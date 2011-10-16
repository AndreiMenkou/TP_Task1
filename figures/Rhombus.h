///////////////////////////////////////////////////////////
//  Rhombus.h
//  Implementation of the Class Rhombus
//  Created on:      16-Oct-2011 17:54:56
///////////////////////////////////////////////////////////

#if !defined(EA_C5470681_1453_4885_A2BD_9631C1C4B853__INCLUDED_)
#define EA_C5470681_1453_4885_A2BD_9631C1C4B853__INCLUDED_

#include "Figure2D.h"

class Rhombus : public Figure2D
{

public:
	Rhombus();
	virtual ~Rhombus();

	virtual void draw() =0;
	double getAngle();
	int getLenghtA();
	int getLenghtB();
	void setAngle(double newVal);
	void setLenghtA(int newVal);
	void setLenghtB(int newVal);

private:
	double angle;
	int lenghtA;
	int lenghtB;

};
#endif // !defined(EA_C5470681_1453_4885_A2BD_9631C1C4B853__INCLUDED_)
