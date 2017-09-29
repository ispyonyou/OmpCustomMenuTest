#pragma once

#include "OmpCustomMenuTest_i.h"
#include "Resource.h"

class ATL_NO_VTABLE COmpCustomMenu : public ICustomMenu
                                   , public ATL::CComObjectRootEx<ATL::CComMultiThreadModel>
                                   , public ATL::CComCoClass< COmpCustomMenu, &CLSID_OmpCustomMenu >
{
public:
  DECLARE_REGISTRY_RESOURCEID( IDR_OMP_CUSTOM_MENU )

public:
  BEGIN_COM_MAP( COmpCustomMenu )
    COM_INTERFACE_ENTRY( ICustomMenu )
  END_COM_MAP()

  STDMETHOD( QueryContextMenu )(long type, long code, BSTR* commands);
  STDMETHOD( InvokeCommand )(long type, long code, BSTR command);
};
