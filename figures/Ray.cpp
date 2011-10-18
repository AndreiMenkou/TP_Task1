///////////////////////////////////////////////////////////
//  Ray.cpp
//  Implementation of the Class Ray
//  Created on:      16-Oct-2011 17:54:56
///////////////////////////////////////////////////////////

#include "Ray.h"


Ray::Ray(){

}

Ray::Ray(const QPoint& p1, const QPoint& p2) : Segment(p1, p1 + 1000 * (p2 - p1)) {

}


Ray::~Ray(){

}
