///////////////////////////////////////////////////////////
//  Figure2D.cpp
//  Implementation of the Class Figure2D
//  Created on:      16-Oct-2011 17:54:56
///////////////////////////////////////////////////////////

#include "Figure2D.h"


Figure2D::Figure2D(){

}



Figure2D::~Figure2D(){

}

void Figure2D::draw() {
    painter->fillPath(painterPath, QBrush(fillColor));
    AbstractFigure::draw();
}



QColor Figure2D::getFillColor(){
	return fillColor;
}


void Figure2D::setFillColor(const QColor& color){
        fillColor = color;
}
