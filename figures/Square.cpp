///////////////////////////////////////////////////////////
//  Square.cpp
//  Implementation of the Class Square
//  Created on:      16-Oct-2011 17:54:57
///////////////////////////////////////////////////////////

#include "Square.h"
#include <cmath>


Square::Square() {

}

Square::Square(const QPoint & center, const QPoint & border) {
    QPoint distance = border - center;
    int halfLength = (int) std::max(std::abs((double) distance.x()), std::abs((double) distance.y()));
    setCenter(center);
    setPoints(QPoint(halfLength, halfLength), QPoint(halfLength, -halfLength));
}



Square::~Square(){

}
