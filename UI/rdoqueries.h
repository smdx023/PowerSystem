// Machine generated IDispatch wrapper class(es) created by Microsoft Visual C++

// NOTE: Do not modify the contents of this file.  If this class is regenerated by
//  Microsoft Visual C++, your modifications will be overwritten.


// Dispatch interfaces referenced by this interface
class CrdoPreparedStatement;

/////////////////////////////////////////////////////////////////////////////
// CrdoQueries wrapper class

class CrdoQueries : public COleDispatchDriver
{
public:
	CrdoQueries() {}		// Calls COleDispatchDriver default constructor
	CrdoQueries(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	CrdoQueries(const CrdoQueries& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	long GetCount();
	CrdoPreparedStatement GetItem(const VARIANT& Index);
};
