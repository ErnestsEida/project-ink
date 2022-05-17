#include "scribblearea.h"

ScribbleArea::ScribbleArea(QWidget *parent) : QWidget(parent)
{
    setAttribute(Qt::WA_StaticContents);
    modified = false;
    scribbling = false;
    myPenWidth = 1;
    currentTool = ToolType::Pencil;
    myPenColor = Qt::black;
}

bool ScribbleArea::openImage(const QString &fileName)
{
    QImage loadedImage;
    if (!loadedImage.load(fileName))
        return false;

    QSize newSize = loadedImage.size().expandedTo(size());
    resizeImage(&loadedImage, newSize);
    image = loadedImage;
    modified = false;
    update();
    return true;
}

bool ScribbleArea::openImage(QImage xImage)
{
    QImage loadedImage = xImage;

    QSize newSize = loadedImage.size();
    resizeImage(&loadedImage, newSize);
    image = loadedImage;
    modified = false;
    update();
    return true;
}

bool ScribbleArea::saveImage(const QString &fileName)
{
    QImage visibleImage = image;

    if (visibleImage.save(fileName)) {
        modified = false;
        return true;
    } else {
        return false;
    }
}

void ScribbleArea::setPenColor(const QColor &newColor)
{
    myPenColor = newColor;
}

void ScribbleArea::setPenWidth(int newWidth)
{
    myPenWidth = newWidth;
}

void ScribbleArea::clearImage()
{
    undoStack.append(image);
    image.fill(qRgb(255, 255, 255));
    modified = true;
    update();
}

void ScribbleArea::mousePressEvent(QMouseEvent *event)
{
    if (event->button() == Qt::LeftButton) {
        lastPoint = event->pos();
        scribbling = true;
    }
}

void ScribbleArea::mouseMoveEvent(QMouseEvent *event)
{
    if ((event->buttons() & Qt::LeftButton) && scribbling)
    {
        if (currentTool == ToolType::Pencil)
        {
            drawLineTo(event->pos());
        }
    }
}

void ScribbleArea::mouseReleaseEvent(QMouseEvent *event)
{
    if (event->button() == Qt::LeftButton && scribbling)
    {
        if (currentTool == ToolType::Line || currentTool == ToolType::Pencil)
        {
            drawLineTo(event->pos());
            scribbling = false;
        } else if (currentTool == ToolType::Rectangle){
            drawRectTo(event->pos());
            scribbling = false;
        } else if (currentTool == ToolType::Circle){
            drawCircle(event->pos());
            scribbling = false;
        }
    }
    undoStack.append(image);
}

void ScribbleArea::paintEvent(QPaintEvent *event)
{
    QPainter painter(this);
    QRect dirtyRect = event->rect();
    painter.drawImage(dirtyRect, image, dirtyRect);

    // PREVIEWS
    if (currentTool == ToolType::Line){
        if (scribbling){
            painter.setPen(QPen(myPenColor, myPenWidth, Qt::SolidLine, Qt::RoundCap, Qt::RoundJoin));
            painter.drawLine(lastPoint, this->mapFromGlobal(QCursor::pos()));
        }
        update();
    } else if (currentTool == ToolType::Rectangle){
        if (scribbling){
            painter.setPen(QPen(myPenColor, myPenWidth, Qt::SolidLine, Qt::RoundCap, Qt::RoundJoin));
            QPoint cursorPos = this->mapFromGlobal(QCursor::pos());
            painter.drawRect(QRect(lastPoint.x(), lastPoint.y(), cursorPos.x() - lastPoint.x(), cursorPos.y() - lastPoint.y()));
        }
        update();
    } else if (currentTool == ToolType::Circle){
        if (scribbling){
            painter.setPen(QPen(myPenColor, myPenWidth, Qt::SolidLine, Qt::RoundCap, Qt::RoundJoin));
            QPoint cursorPos = this->mapFromGlobal(QCursor::pos());
            painter.drawEllipse(QRect(lastPoint.x(), lastPoint.y(), cursorPos.x() - lastPoint.x(), cursorPos.y() - lastPoint.y()));
        }
        update();
    }
    // ----------------------------
}

void ScribbleArea::resizeEvent(QResizeEvent *event)
{
    if (width() > image.width() || height() > image.height()) {
        int newWidth = qMax(width(), image.width());
        int newHeight = qMax(height(), image.height());
        resizeImage(&image, QSize(newWidth, newHeight));
        update();
    }
    QWidget::resizeEvent(event);
    undoStack.append(image);
}

void ScribbleArea::drawCircle(const QPoint &endPoint){
    QPainter painter(&image);
    painter.setPen(QPen(myPenColor, myPenWidth, Qt::SolidLine, Qt::RoundCap, Qt::RoundJoin));
    painter.drawEllipse(QRect(lastPoint.x(), lastPoint.y(), endPoint.x() - lastPoint.x(), endPoint.y() - lastPoint.y()));
    modified = true;
    update();
    lastPoint = endPoint;
}

void ScribbleArea::drawRectTo(const QPoint &endPoint){
    QPainter painter(&image);
    painter.setPen(QPen(myPenColor, myPenWidth, Qt::SolidLine, Qt::RoundCap, Qt::RoundJoin));
    painter.drawRect(QRect(lastPoint.x(), lastPoint.y(), endPoint.x() - lastPoint.x(), endPoint.y() - lastPoint.y()));
    modified = true;
    update();
    lastPoint = endPoint;
}

void ScribbleArea::drawLineTo(const QPoint &endPoint)
{
    QPainter painter(&image);
    painter.setPen(QPen(myPenColor, myPenWidth, Qt::SolidLine, Qt::RoundCap, Qt::RoundJoin));
    painter.drawLine(lastPoint, endPoint);
    modified = true;

    int rad = (myPenWidth / 2) + 2;
    update(QRect(lastPoint, endPoint).normalized().adjusted(-rad, -rad, +rad, +rad));
    lastPoint = endPoint;
}

void ScribbleArea::resizeImage(QImage *image, const QSize &newSize)
{
    if (image->size() == newSize)
        return;

    QImage newImage(newSize, QImage::Format_RGB32);
    newImage.fill(qRgb(255, 255, 255));
    QPainter painter(&newImage);
    painter.drawImage(QPoint(0, 0), *image);
    *image = newImage;
}

void ScribbleArea::undo()
{
    if (undoStack.length() > 1)
    {
        redoStack.append(undoStack.last());
        undoStack.removeLast();
        openImage(undoStack.last());
    }
}

void ScribbleArea::redo(){
    if (redoStack.length() > 0)
    {
        openImage(redoStack.last());
        undoStack.append(redoStack.last());
        redoStack.removeLast();
    }
}

void ScribbleArea::changeTool(ToolType tool){
    this->currentTool = tool;
}
