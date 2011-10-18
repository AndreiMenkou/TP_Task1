///////////////////////////////////////////////////////////
//  Line.cpp
//  Implementation of the Class Line
//  Created on:      16-Oct-2011 17:54:56
///////////////////////////////////////////////////////////

#include "Line.h"


Line::Line(){

}

Line::Line(const QPoint& p1, const QPoint& p2) : Ray(p1 + 100 * (p2 - p1), p1) {

}


Line::~Line(){

}
