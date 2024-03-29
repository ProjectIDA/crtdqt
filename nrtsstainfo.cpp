//////////////////////////////////////////////////////////////////////
// NRTSSTAINFO.cpp: implementation of the CNRTSSTAINFO class.
//
//////////////////////////////////////////////////////////////////////
#include <iostream>
#include "nrtsinfo.h"

//////////////////////////////////////////////////////////////////////
// Construction/Destruction
//////////////////////////////////////////////////////////////////////
CNRTSSTAINFO::CNRTSSTAINFO()
{
}

CNRTSSTAINFO::CNRTSSTAINFO(QString StaName)
{
    Sta=StaName;
}

CNRTSSTAINFO::~CNRTSSTAINFO()
{
    Clear();
}

void CNRTSSTAINFO::AddChan(QString ChanName, QString csLCODE, double dSpS, BOOL bDraw)
{
    QString sKey = ChanName+"."+csLCODE;
    CNRTSCHANINFO *ci=new CNRTSCHANINFO(ChanName, csLCODE, dSpS, bDraw);
    ChanInfo[sKey] = ci;
}

void CNRTSSTAINFO::Clear()
{
    CNRTSCHANINFO *ci;
    QMap <QString, CNRTSCHANINFO *>::Iterator i;
    for ( i=ChanInfo.begin(); i!=ChanInfo.end(); ++i)
    {
        ci = *i;
        delete ci;
    }
    ChanInfo.clear();
}
/*-----------------------------------------------------------------------+
 |                                                                       |
 | Copyright (C) 2016 Regents of the University of California            |
 |                                                                       |
 | This software is provided 'as-is', without any express or implied     |
 | warranty.  In no event will the authors be held liable for any        |
 | damages arising from the use of this software.                        |
 |                                                                       |
 | Permission is granted to anyone to use this software for any purpose, |
 | including commercial applications, and to alter it and redistribute   |
 | it freely, subject to the following restrictions:                     |
 |                                                                       |
 | 1. The origin of this software must not be misrepresented; you must   |
 |    not claim that you wrote the original software. If you use this    |
 |    software in a product, an acknowledgment in the product            |
 |    documentation of the contribution by Project IDA, UCSD would be    |
 |    appreciated but is not required.                                   |
 | 2. Altered source versions must be plainly marked as such, and must   |
 |    not be misrepresented as being the original software.              |
 | 3. This notice may not be removed or altered from any source          |
 |    distribution.                                                      |
 |                                                                       |
 +-----------------------------------------------------------------------*/
/* Revision History
 *
 * $Log$
 */
