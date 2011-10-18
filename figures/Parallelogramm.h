///////////////////////////////////////////////////////////
//  Parallelogramm.h
//  Implementation of the Class Parallelogramm
//  Created on:      18-Oct-2011 02:18:30
///////////////////////////////////////////////////////////

#if !defined(EA_DD7C1BCA_2118_4c6b_90B1_9DCCC8A65552__INCLUDED_)
#define EA_DD7C1BCA_2118_4c6b_90B1_9DCCC8A65552__INCLUDED_

#include "Figure2D.h"

class Parallelogramm : public Figure2D
{

public:
        Parallelogramm() {}
        Parallelogramm(const QPoint&, const QPoint&, const QPoint&);
	virtual ~Parallelogramm();

	QPoint getPointA();
	QPoint getPointB();
        void setPointA(const QPoint&);
        void setPointB(const QPoint&);
        void setPoints(const QPoint&, const QPoint&);

private:
	QPoint pointA;
	QPoint pointB;

};
#endif // !defined(EA_DD7C1BCA_2118_4c6b_90B1_9DCCC8A65552__INCLUDED_)
