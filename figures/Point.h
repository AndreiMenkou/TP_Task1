///////////////////////////////////////////////////////////
//  Point.h
//  Implementation of the Class Point
//  Created on:      16-Oct-2011 17:54:56
///////////////////////////////////////////////////////////

#if !defined(EA_8154CCA9_352E_4048_94C5_F23245FFEC38__INCLUDED_)
#define EA_8154CCA9_352E_4048_94C5_F23245FFEC38__INCLUDED_

#include "Figure1D.h"

class Point : public Figure1D
{

public:
        Point(const QPoint&);
	virtual ~Point();

};
#endif // !defined(EA_8154CCA9_352E_4048_94C5_F23245FFEC38__INCLUDED_)
