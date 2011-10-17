///////////////////////////////////////////////////////////
//  Ellipse.cpp
//  Implementation of the Class Ellipse
//  Created on:      16-Oct-2011 17:54:55
///////////////////////////////////////////////////////////

#include "Ellipse.h"
#include <cmath>

Ellipse::Ellipse() { }

Ellipse::Ellipse(const QPoint& aCenter, const QPoint& onBorder) {
    setCenter(aCenter);
    setMajorRadius((int) std::abs((double) aCenter.x() - onBorder.x()));
    setMinorRadius((int) std::abs((double) aCenter.y() - onBorder.y()));
}


Ellipse::~Ellipse(){

}

void Ellipse::draw() {
    painter->setPen(QPen(getFillColor()));
    painter->fillRect(-getMajorRadius(), -getMinorRadius(), 2 * getMajorRadius(), 2 * getMinorRadius(), Qt::SolidPattern);
    painter->drawEllipse(-getMajorRadius(), -getMinorRadius(), 2 * getMajorRadius(), 2 * getMinorRadius());
}

QRectF Ellipse::boundingRect() const {
    return QRectF(-getMajorRadius(), -getMinorRadius(),  2 * getMajorRadius(), 2 * getMinorRadius());
}

int Ellipse::getMajorRadius() const {
	return majorRadius;
}


int Ellipse::getMinorRadius() const {
	return minorRadius;
}


void Ellipse::setMajorRadius(int newVal) {
	majorRadius = newVal;
}


void Ellipse::setMinorRadius(int newVal){
	minorRadius = newVal;
}

QPainterPath Ellipse::shape() const {
    QPainterPath painterPath;
    painterPath.addEllipse(QRectF());
}
