#pragma "$Id$"
// IsiInterruptThread.h: interface for the IsiInterruptThread class.
//
//////////////////////////////////////////////////////////////////////

#if !defined(AFX_ISIINTERRUPTTHREAD_H__3A80311E_2E1F_4895_BFDF_C206CC389295__INCLUDED_)
#define AFX_ISIINTERRUPTTHREAD_H__3A80311E_2E1F_4895_BFDF_C206CC389295__INCLUDED_

#include <qthread.h>
#include "CRTDglob.h"
#include "isi.h"
#include "util.h"


class IsiInterruptThread : public QThread  
{
public:
    IsiInterruptThread();
	virtual ~IsiInterruptThread();
	void Init(ISI **p);

protected:
	ISI **pisi;
	void run();

};

#endif // !defined(AFX_ISIINTERRUPTTHREAD_H__3A80311E_2E1F_4895_BFDF_C206CC389295__INCLUDED_)
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