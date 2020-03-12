#if !defined(AFX_REPOSITORYOBJECT_H__9552503C_6B0E_4F75_95D2_2E8D9C3C3B6C__INCLUDED_)
#define AFX_REPOSITORYOBJECT_H__9552503C_6B0E_4F75_95D2_2E8D9C3C3B6C__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// Machine generated IDispatch wrapper class(es) created by Microsoft Visual C++

// NOTE: Do not modify the contents of this file.  If this class is regenerated by
//  Microsoft Visual C++, your modifications will be overwritten.


// Dispatch interfaces referenced by this interface
class CReposProperties;
class CRepository;

/////////////////////////////////////////////////////////////////////////////
// CRepositoryObject wrapper class

class CRepositoryObject : public COleDispatchDriver
{
public:
	CRepositoryObject() {}		// Calls COleDispatchDriver default constructor
	CRepositoryObject(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	CRepositoryObject(const CRepositoryObject& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	CReposProperties GetProperties();
	VARIANT GetType();
	CRepository GetRepository();
	CString GetName();
	void SetName(LPCTSTR lpszNewValue);
	LPDISPATCH GetInterface(const VARIANT& Iface);
	void Delete();
	void Lock();
	VARIANT GetObjectID();
	VARIANT GetInternalID();
	void Refresh(long iMilliseconds);
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_REPOSITORYOBJECT_H__9552503C_6B0E_4F75_95D2_2E8D9C3C3B6C__INCLUDED_)