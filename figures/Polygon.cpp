///////////////////////////////////////////////////////////
//  Polygon.cpp
//  Implementation of the Class Polygon
//  Created on:      16-Oct-2011 17:54:56
///////////////////////////////////////////////////////////

#include "Polygon.h"


Polygon::Polygon() {

}

Polygon::Polygon(QList<QPoint> * list) {
    setPoints(list);
}



Polygon::~Polygon(){

}

QList<QPoint>* Polygon::getPoints(){

	return points;
}


void Polygon::setPoints(QList<QPoint>* newVal){
	points = newVal;
        painterPath = QPainterPath();
        for (int i = 0; i < points->size() - 1; ++i) {
            painterPath.lineTo(points->at(i + 1) - points->at(i));
        }
        painterPath.lineTo(points->first() - points->last());
        setCenter(points->first());
}
