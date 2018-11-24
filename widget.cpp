#include "widget.h"
#include "ui_widget.h"
#include <QPainter>

Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);
}

Widget::~Widget()
{
    delete ui;
}

void Widget::paintEvent(QPaintEvent * e)
{
    QPainter painter(this);
    int width = this->width();
    int height = this->height();

    QColor colors[] = {
        QColor::fromRgb(255,0,0),
        QColor::fromRgb(255,255,0),
        QColor::fromRgb(0,255,0),
        QColor::fromRgb(0,255,255),
        QColor::fromRgb(0,0,255),
        QColor::fromRgb(255,0,255),
        QColor::fromRgb(255,255,255)
    };
    for (int i = 0; i < 7; i++){
        painter.setPen(Qt::black);
        painter.setBrush(QBrush(colors[i]));
        painter.drawEllipse(QPoint(width/2,height), width/2 - i*width/14, height - i*height/7);
}
    };
