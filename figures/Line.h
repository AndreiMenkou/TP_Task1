///////////////////////////////////////////////////////////
//  Line.h
//  Implementation of the Class Line
//  Created on:      16-Oct-2011 17:54:56
///////////////////////////////////////////////////////////

#if !defined(EA_80DC7565_6C3F_4b1b_B01E_CD4F1E2F81B5__INCLUDED_)
#define EA_80DC7565_6C3F_4b1b_B01E_CD4F1E2F81B5__INCLUDED_

#include "Ray.h"

class Line : public Ray
{

public:
	Line();
        Line(const QPoint&, const QPoint&);
	virtual ~Line();

};
#endif // !defined(EA_80DC7565_6C3F_4b1b_B01E_CD4F1E2F81B5__INCLUDED_)
