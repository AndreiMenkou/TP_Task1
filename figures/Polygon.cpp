///////////////////////////////////////////////////////////
//  Polygon.cpp
//  Implementation of the Class Polygon
//  Created on:      16-Oct-2011 17:54:56
///////////////////////////////////////////////////////////

#include "Polygon.h"


Polygon::Polygon(){

}



Polygon::~Polygon(){

}





QList<QPoint>* Polygon::getPoints(){

	return points;
}


void Polygon::move(QPoint* center){

}


void Polygon::setPoints(QList<QPoint>* newVal){

	points = newVal;
}
