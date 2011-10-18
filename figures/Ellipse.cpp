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
    painterPath.addEllipse(QPointF(0, 0), getMajorRadius(), getMinorRadius());
}


Ellipse::~Ellipse(){

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
