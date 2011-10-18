///////////////////////////////////////////////////////////
//  Point.cpp
//  Implementation of the Class Point
//  Created on:      16-Oct-2011 17:54:56
///////////////////////////////////////////////////////////

#include "Point.h"


Point::Point(const QPoint& point){
    setCenter(point);
    painterPath.addEllipse(QPointF(0, 0), 0.5, 0.5);
}

Point::~Point(){

}
