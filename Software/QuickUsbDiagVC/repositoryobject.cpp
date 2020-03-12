// Machine generated IDispatch wrapper class(es) created by Microsoft Visual C++

// NOTE: Do not modify the contents of this file.  If this class is regenerated by
//  Microsoft Visual C++, your modifications will be overwritten.


#include "stdafx.h"
#include "repositoryobject.h"

// Dispatch interfaces referenced by this interface
#include "ReposProperties.h"
#include "repository.h"


/////////////////////////////////////////////////////////////////////////////
// CRepositoryObject properties

/////////////////////////////////////////////////////////////////////////////
// CRepositoryObject operations

CReposProperties CRepositoryObject::GetProperties()
{
	LPDISPATCH pDispatch;
	InvokeHelper(0x3e8, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&pDispatch, NULL);
	return CReposProperties(pDispatch);
}

VARIANT CRepositoryObject::GetType()
{
	VARIANT result;
	InvokeHelper(0x1, DISPATCH_PROPERTYGET, VT_VARIANT, (void*)&result, NULL);
	return result;
}

CRepository CRepositoryObject::GetRepository()
{
	LPDISPATCH pDispatch;
	InvokeHelper(0x2, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&pDispatch, NULL);
	return CRepository(pDispatch);
}

CString CRepositoryObject::GetName()
{
	CString result;
	InvokeHelper(0x3, DISPATCH_PROPERTYGET, VT_BSTR, (void*)&result, NULL);
	return result;
}

void CRepositoryObject::SetName(LPCTSTR lpszNewValue)
{
	static BYTE parms[] =
		VTS_BSTR;
	InvokeHelper(0x3, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 lpszNewValue);
}

LPDISPATCH CRepositoryObject::GetInterface(const VARIANT& Iface)
{
	LPDISPATCH result;
	static BYTE parms[] =
		VTS_VARIANT;
	InvokeHelper(0x0, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, parms,
		&Iface);
	return result;
}

void CRepositoryObject::Delete()
{
	InvokeHelper(0x4, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
}

void CRepositoryObject::Lock()
{
	InvokeHelper(0x5, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
}

VARIANT CRepositoryObject::GetObjectID()
{
	VARIANT result;
	InvokeHelper(0x14, DISPATCH_PROPERTYGET, VT_VARIANT, (void*)&result, NULL);
	return result;
}

VARIANT CRepositoryObject::GetInternalID()
{
	VARIANT result;
	InvokeHelper(0x15, DISPATCH_PROPERTYGET, VT_VARIANT, (void*)&result, NULL);
	return result;
}

void CRepositoryObject::Refresh(long iMilliseconds)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x16, DISPATCH_METHOD, VT_EMPTY, NULL, parms,
		 iMilliseconds);
}