///////////////////////////////////////////////////////////
//  Ellipse.h
//  Implementation of the Class Ellipse
//  Created on:      16-Oct-2011 17:54:55
///////////////////////////////////////////////////////////

#if !defined(EA_34996F58_9FB0_4afc_9ADF_99B2E4FE4830__INCLUDED_)
#define EA_34996F58_9FB0_4afc_9ADF_99B2E4FE4830__INCLUDED_

#include "Figure2D.h"

class Ellipse : public Figure2D
{

public:
        Ellipse();
        Ellipse(const QPoint&, const QPoint&);
	virtual ~Ellipse();

        int getMajorRadius() const;
        int getMinorRadius() const;
        void setMajorRadius(int newVal);
        void setMinorRadius(int newVal);

private:
	int majorRadius;
	int minorRadius;

};
#endif // !defined(EA_34996F58_9FB0_4afc_9ADF_99B2E4FE4830__INCLUDED_)
