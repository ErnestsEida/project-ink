#ifndef SCRIBBLEAREA_H
#define SCRIBBLEAREA_H

#include <QWidget>
#include <QPainter>
#include <QMouseEvent>

class ScribbleArea : public QWidget
{
    Q_OBJECT

public:
    enum ToolType {
        Pencil,
        Line,
        Rectangle,
        Circle
    };

    ScribbleArea(QWidget *parent = 0);

    QImage image;

    bool openImage(const QString &fileName);
    bool openImage(QImage);
    bool saveImage(const QString &fileName);
    void setPenColor(const QColor &newColor);
    void setPenWidth(int newWidth);

    bool isModified() const { return modified; }
    QColor penColor() const { return myPenColor; }
    int penWidth() const { return myPenWidth; }
    void undo();

public slots:
    void clearImage();
    void changeTool(ToolType);

protected:
    void mousePressEvent(QMouseEvent *event) override;
    void mouseMoveEvent(QMouseEvent *event) override;
    void mouseReleaseEvent(QMouseEvent *event) override;
    void paintEvent(QPaintEvent *event) override;
    void resizeEvent(QResizeEvent *event) override;

private:
    void drawLineTo(const QPoint &endPoint);
    void drawRectTo(const QPoint &endPoint);
    void drawCircle(const QPoint &endPoint);
    void resizeImage(QImage *image, const QSize &newSize);

    QList<QImage> undoStack;
    bool modified;
    bool scribbling;
    int myPenWidth;
    ToolType currentTool;
    QColor myPenColor;
    QPoint lastPoint;
};

#endif // SCRIBBLEAREA_H
