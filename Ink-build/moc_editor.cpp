/****************************************************************************
** Meta object code from reading C++ file 'editor.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.2.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../Ink/editor.h"
#include <QtGui/qtextcursor.h>
#include <QScreen>
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'editor.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.2.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Editor_t {
    const uint offsetsAndSize[42];
    char stringdata0[464];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(offsetof(qt_meta_stringdata_Editor_t, stringdata0) + ofs), len 
static const qt_meta_stringdata_Editor_t qt_meta_stringdata_Editor = {
    {
QT_MOC_LITERAL(0, 6), // "Editor"
QT_MOC_LITERAL(7, 11), // "changeColor"
QT_MOC_LITERAL(19, 0), // ""
QT_MOC_LITERAL(20, 26), // "on_actionOptions_triggered"
QT_MOC_LITERAL(47, 31), // "on_actionClear_screen_triggered"
QT_MOC_LITERAL(79, 30), // "on_penWidthSlider_valueChanged"
QT_MOC_LITERAL(110, 5), // "value"
QT_MOC_LITERAL(116, 27), // "on_colorWheelButton_clicked"
QT_MOC_LITERAL(144, 22), // "on_actionPNG_triggered"
QT_MOC_LITERAL(167, 23), // "on_actionJPEG_triggered"
QT_MOC_LITERAL(191, 22), // "on_actionJPG_triggered"
QT_MOC_LITERAL(214, 22), // "on_actionPPM_triggered"
QT_MOC_LITERAL(237, 22), // "on_actionXBM_triggered"
QT_MOC_LITERAL(260, 22), // "on_actionXPM_triggered"
QT_MOC_LITERAL(283, 22), // "on_actionBMP_triggered"
QT_MOC_LITERAL(306, 23), // "on_actionSave_triggered"
QT_MOC_LITERAL(330, 23), // "on_actionUndo_triggered"
QT_MOC_LITERAL(354, 30), // "on_actionChange_Size_triggered"
QT_MOC_LITERAL(385, 22), // "on_actionRGB_triggered"
QT_MOC_LITERAL(408, 28), // "on_actionGreyscale_triggered"
QT_MOC_LITERAL(437, 26) // "on_actionInverse_triggered"

    },
    "Editor\0changeColor\0\0on_actionOptions_triggered\0"
    "on_actionClear_screen_triggered\0"
    "on_penWidthSlider_valueChanged\0value\0"
    "on_colorWheelButton_clicked\0"
    "on_actionPNG_triggered\0on_actionJPEG_triggered\0"
    "on_actionJPG_triggered\0on_actionPPM_triggered\0"
    "on_actionXBM_triggered\0on_actionXPM_triggered\0"
    "on_actionBMP_triggered\0on_actionSave_triggered\0"
    "on_actionUndo_triggered\0"
    "on_actionChange_Size_triggered\0"
    "on_actionRGB_triggered\0"
    "on_actionGreyscale_triggered\0"
    "on_actionInverse_triggered"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Editor[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
      18,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,  122,    2, 0x08,    1 /* Private */,
       3,    0,  125,    2, 0x08,    3 /* Private */,
       4,    0,  126,    2, 0x08,    4 /* Private */,
       5,    1,  127,    2, 0x08,    5 /* Private */,
       7,    0,  130,    2, 0x08,    7 /* Private */,
       8,    0,  131,    2, 0x08,    8 /* Private */,
       9,    0,  132,    2, 0x08,    9 /* Private */,
      10,    0,  133,    2, 0x08,   10 /* Private */,
      11,    0,  134,    2, 0x08,   11 /* Private */,
      12,    0,  135,    2, 0x08,   12 /* Private */,
      13,    0,  136,    2, 0x08,   13 /* Private */,
      14,    0,  137,    2, 0x08,   14 /* Private */,
      15,    0,  138,    2, 0x08,   15 /* Private */,
      16,    0,  139,    2, 0x08,   16 /* Private */,
      17,    0,  140,    2, 0x08,   17 /* Private */,
      18,    0,  141,    2, 0x08,   18 /* Private */,
      19,    0,  142,    2, 0x08,   19 /* Private */,
      20,    0,  143,    2, 0x08,   20 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::QColor,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    6,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void Editor::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Editor *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->changeColor((*reinterpret_cast< QColor(*)>(_a[1]))); break;
        case 1: _t->on_actionOptions_triggered(); break;
        case 2: _t->on_actionClear_screen_triggered(); break;
        case 3: _t->on_penWidthSlider_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->on_colorWheelButton_clicked(); break;
        case 5: _t->on_actionPNG_triggered(); break;
        case 6: _t->on_actionJPEG_triggered(); break;
        case 7: _t->on_actionJPG_triggered(); break;
        case 8: _t->on_actionPPM_triggered(); break;
        case 9: _t->on_actionXBM_triggered(); break;
        case 10: _t->on_actionXPM_triggered(); break;
        case 11: _t->on_actionBMP_triggered(); break;
        case 12: _t->on_actionSave_triggered(); break;
        case 13: _t->on_actionUndo_triggered(); break;
        case 14: _t->on_actionChange_Size_triggered(); break;
        case 15: _t->on_actionRGB_triggered(); break;
        case 16: _t->on_actionGreyscale_triggered(); break;
        case 17: _t->on_actionInverse_triggered(); break;
        default: ;
        }
    }
}

const QMetaObject Editor::staticMetaObject = { {
    QMetaObject::SuperData::link<QMainWindow::staticMetaObject>(),
    qt_meta_stringdata_Editor.offsetsAndSize,
    qt_meta_data_Editor,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_Editor_t
, QtPrivate::TypeAndForceComplete<Editor, std::true_type>
, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QColor, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>


>,
    nullptr
} };


const QMetaObject *Editor::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Editor::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Editor.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int Editor::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 18)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 18;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 18)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 18;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
