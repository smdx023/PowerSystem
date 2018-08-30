#if !defined(AFX_VCBACKDROP_H__FE3139B8_29EB_4020_A039_93E582B725AF__INCLUDED_)
#define AFX_VCBACKDROP_H__FE3139B8_29EB_4020_A039_93E582B725AF__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// Machine generated IDispatch wrapper class(es) created by Microsoft Visual C++

// NOTE: Do not modify the contents of this file.  If this class is regenerated by
//  Microsoft Visual C++, your modifications will be overwritten.


// Dispatch interfaces referenced by this interface
class CVcShadow;
class CVcFrame;
class CVcFill;

/////////////////////////////////////////////////////////////////////////////
// CVcBackdrop wrapper class

class CVcBackdrop : public COleDispatchDriver
{
public:
	CVcBackdrop() {}		// Calls COleDispatchDriver default constructor
	CVcBackdrop(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	CVcBackdrop(const CVcBackdrop& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	CVcShadow GetShadow();
	CVcFrame GetFrame();
	CVcFill GetFill();
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_VCBACKDROP_H__FE3139B8_29EB_4020_A039_93E582B725AF__INCLUDED_)