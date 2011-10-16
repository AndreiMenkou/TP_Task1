///////////////////////////////////////////////////////////
//  Circle.cpp
//  Implementation of the Class Circle
//  Created on:      16-Oct-2011 17:54:55
///////////////////////////////////////////////////////////

#include "Circle.h"
#include <cmath>


Circle::Circle(const QPoint& aCenter, const QPoint& onBorder) : Ellipse(aCenter, aCenter + QPoint(std::max(abs(aCenter.x() - onBorder.x()), abs(aCenter.y() - onBorder.y())), std::max(abs(aCenter.x() - onBorder.x()), abs(aCenter.y() - onBorder.y())))) {}


Circle::~Circle(){

}
