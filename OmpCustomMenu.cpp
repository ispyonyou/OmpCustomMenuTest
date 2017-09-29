#include "stdafx.h"
#include "OmpCustomMenu.h"

HRESULT COmpCustomMenu::QueryContextMenu( long type, long code, BSTR* commands )
{
  *commands = SysAllocString( L"<OmpContextMenu>"
                                 "<item name = \"пункт меню 1\"/>"
                                 "<item name = \"пункт меню 2\"/>"
                               "</OmpContextMenu>" );

  return S_OK;
}

HRESULT COmpCustomMenu::InvokeCommand( long type, long code, BSTR command )
{
  return S_OK;
}
