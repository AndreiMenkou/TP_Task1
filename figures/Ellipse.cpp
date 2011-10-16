///////////////////////////////////////////////////////////
//  Ellipse.cpp
//  Implementation of the Class Ellipse
//  Created on:      16-Oct-2011 17:54:55
///////////////////////////////////////////////////////////

#include "Ellipse.h"


Ellipse::Ellipse() {
    Ellipse(QPoint(0,0), QPoint(10, 10));
}

Ellipse::Ellipse(const QPoint& aCenter, const QPoint& onBorder) {
    setCenter(aCenter);
    setMajorRadius(std::abs(aCenter.x() - onBorder.x()));
    setMinorRadius(std::abs(aCenter.y() - onBorder.y()));
    qDebug() << "Ellipse::Ellipse " << aCenter << " " << onBorder;
    qDebug() << "Ellipse::Ellipse " << getMajorRadius() << " " << getMinorRadius();
}



Ellipse::~Ellipse(){

}



void Ellipse::draw() {
    qDebug() << "Ellipse::draw " << "drawing!!!" << " : " << getMajorRadius() << " " << getMinorRadius() ;
    painter->drawEllipse(-getMajorRadius(), -getMinorRadius(), 2 * getMajorRadius(), 2 * getMinorRadius());
//    painter->drawEllipse(0, 0, 40, 40);
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
    qDebug() << "Ellipse::setMajorRadius " << newVal;
	majorRadius = newVal;
}


void Ellipse::setMinorRadius(int newVal){

	minorRadius = newVal;
}
