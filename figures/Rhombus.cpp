///////////////////////////////////////////////////////////
//  Rhombus.cpp
//  Implementation of the Class Rhombus
//  Created on:      16-Oct-2011 17:54:56
///////////////////////////////////////////////////////////

#include "Rhombus.h"


Rhombus::Rhombus(){

}

Rhombus::Rhombus(const QPoint & center, const QPoint & border) :
    Parallelogramm(center, QPoint(center.x(), border.y()), QPoint(border.x(), center.y())){

}



Rhombus::~Rhombus(){

}





double Rhombus::getAngle(){

	return angle;
}


int Rhombus::getLenghtA(){

	return lenghtA;
}


int Rhombus::getLenghtB(){

	return lenghtB;
}


void Rhombus::setAngle(double newVal){

	angle = newVal;
}


void Rhombus::setLenghtA(int newVal){

	lenghtA = newVal;
}


void Rhombus::setLenghtB(int newVal){

	lenghtB = newVal;
}
