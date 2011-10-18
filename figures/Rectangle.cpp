///////////////////////////////////////////////////////////
//  Rectangle.cpp
//  Implementation of the Class Rectangle
//  Created on:      16-Oct-2011 17:54:56
///////////////////////////////////////////////////////////

#include "Rectangle.h"


Rectangle::Rectangle(const QPoint& center, const QPoint& border) {
    QPoint fromCenterA = border - center;
    QPoint fromCenterB = fromCenterA;
    fromCenterB.setY(-fromCenterB.y());
    setCenter(center);
    setPoints(fromCenterA, fromCenterB);
    qDebug() << fromCenterA << " " << fromCenterB << "JKJKJK";
}


Rectangle::~Rectangle(){

}
