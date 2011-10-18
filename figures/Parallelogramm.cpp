///////////////////////////////////////////////////////////
//  Parallelogramm.cpp
//  Implementation of the Class Parallelogramm
//  Created on:      18-Oct-2011 02:18:31
///////////////////////////////////////////////////////////

#include "Parallelogramm.h"


Parallelogramm::Parallelogramm(const QPoint& aCenter, const QPoint& a, const QPoint& b) {
    setCenter(aCenter);
    setPoints(a - aCenter, b - aCenter);
}


Parallelogramm::~Parallelogramm(){

}


QPoint Parallelogramm::getPointA(){

	return pointA;
}


QPoint Parallelogramm::getPointB(){

	return pointB;
}


void Parallelogramm::setPointA(const QPoint& newPointA) {

        pointA = newPointA;
}


void Parallelogramm::setPointB(const QPoint& newPointB) {

        pointB = newPointB;
}

void Parallelogramm::setPoints(const QPoint & a, const QPoint & b) {
    painterPath.moveTo(QPointF(a));
    painterPath.lineTo(QPointF(b));
    painterPath.lineTo(QPointF(-a));
    painterPath.lineTo(QPointF(-b));
    painterPath.lineTo(QPointF(a));
}
