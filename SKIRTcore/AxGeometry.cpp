/*//////////////////////////////////////////////////////////////////
////       SKIRT -- an advanced radiative transfer code         ////
////       © Astronomical Observatory, Ghent University         ////
///////////////////////////////////////////////////////////////// */

#include <cmath>
#include "AxGeometry.hpp"

//////////////////////////////////////////////////////////////////////

AxGeometry::AxGeometry()
{
}

//////////////////////////////////////////////////////////////////////

int AxGeometry::dimension() const
{
    return 2;
}

//////////////////////////////////////////////////////////////////////

double
AxGeometry::density(Position bfr)
const
{
    return density(bfr.cylradius(),bfr.height());
}

//////////////////////////////////////////////////////////////////////

double
AxGeometry::SigmaX()
const
{
    return 2.0 * SigmaR();
}

//////////////////////////////////////////////////////////////////////

double
AxGeometry::SigmaY()
const
{
    return 2.0 * SigmaR();
}

//////////////////////////////////////////////////////////////////////
