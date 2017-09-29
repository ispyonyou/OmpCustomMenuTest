

/* this ALWAYS GENERATED file contains the definitions for the interfaces */


 /* File created by MIDL compiler version 8.01.0622 */
/* at Tue Jan 19 06:14:07 2038
 */
/* Compiler settings for OmpCustomMenuTest.idl:
    Oicf, W1, Zp8, env=Win64 (32b run), target_arch=AMD64 8.01.0622 
    protocol : dce , ms_ext, c_ext, robust
    error checks: allocation ref bounds_check enum stub_data 
    VC __declspec() decoration level: 
         __declspec(uuid()), __declspec(selectany), __declspec(novtable)
         DECLSPEC_UUID(), MIDL_INTERFACE()
*/
/* @@MIDL_FILE_HEADING(  ) */

#pragma warning( disable: 4049 )  /* more than 64k source lines */


/* verify that the <rpcndr.h> version is high enough to compile this file*/
#ifndef __REQUIRED_RPCNDR_H_VERSION__
#define __REQUIRED_RPCNDR_H_VERSION__ 475
#endif

#include "rpc.h"
#include "rpcndr.h"

#ifndef __RPCNDR_H_VERSION__
#error this stub requires an updated version of <rpcndr.h>
#endif /* __RPCNDR_H_VERSION__ */

#ifndef COM_NO_WINDOWS_H
#include "windows.h"
#include "ole2.h"
#endif /*COM_NO_WINDOWS_H*/

#ifndef __OmpCustomMenuTest_i_h__
#define __OmpCustomMenuTest_i_h__

#if defined(_MSC_VER) && (_MSC_VER >= 1020)
#pragma once
#endif

/* Forward Declarations */ 

#ifndef __ICustomMenu_FWD_DEFINED__
#define __ICustomMenu_FWD_DEFINED__
typedef interface ICustomMenu ICustomMenu;

#endif 	/* __ICustomMenu_FWD_DEFINED__ */


#ifndef __OmpCustomMenu_FWD_DEFINED__
#define __OmpCustomMenu_FWD_DEFINED__

#ifdef __cplusplus
typedef class OmpCustomMenu OmpCustomMenu;
#else
typedef struct OmpCustomMenu OmpCustomMenu;
#endif /* __cplusplus */

#endif 	/* __OmpCustomMenu_FWD_DEFINED__ */


/* header files for imported files */
#include "oaidl.h"
#include "ocidl.h"

#ifdef __cplusplus
extern "C"{
#endif 


#ifndef __ICustomMenu_INTERFACE_DEFINED__
#define __ICustomMenu_INTERFACE_DEFINED__

/* interface ICustomMenu */
/* [unique][uuid][object] */ 


EXTERN_C const IID IID_ICustomMenu;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("7239FCDF-EC16-4D96-BAAC-27370975E5A5")
    ICustomMenu : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE QueryContextMenu( 
            /* [in] */ long type,
            /* [in] */ long code,
            /* [out] */ BSTR *commands) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE InvokeCommand( 
            /* [in] */ long type,
            /* [in] */ long code,
            /* [in] */ BSTR command) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct ICustomMenuVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ICustomMenu * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ICustomMenu * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ICustomMenu * This);
        
        HRESULT ( STDMETHODCALLTYPE *QueryContextMenu )( 
            ICustomMenu * This,
            /* [in] */ long type,
            /* [in] */ long code,
            /* [out] */ BSTR *commands);
        
        HRESULT ( STDMETHODCALLTYPE *InvokeCommand )( 
            ICustomMenu * This,
            /* [in] */ long type,
            /* [in] */ long code,
            /* [in] */ BSTR command);
        
        END_INTERFACE
    } ICustomMenuVtbl;

    interface ICustomMenu
    {
        CONST_VTBL struct ICustomMenuVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ICustomMenu_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ICustomMenu_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ICustomMenu_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ICustomMenu_QueryContextMenu(This,type,code,commands)	\
    ( (This)->lpVtbl -> QueryContextMenu(This,type,code,commands) ) 

#define ICustomMenu_InvokeCommand(This,type,code,command)	\
    ( (This)->lpVtbl -> InvokeCommand(This,type,code,command) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ICustomMenu_INTERFACE_DEFINED__ */



#ifndef __OmpCustomMenuTestLib_LIBRARY_DEFINED__
#define __OmpCustomMenuTestLib_LIBRARY_DEFINED__

/* library OmpCustomMenuTestLib */
/* [helpstring][version][uuid] */ 


EXTERN_C const IID LIBID_OmpCustomMenuTestLib;

EXTERN_C const CLSID CLSID_OmpCustomMenu;

#ifdef __cplusplus

class DECLSPEC_UUID("13720996-2378-49F0-AC21-E3FB4C3F0D46")
OmpCustomMenu;
#endif
#endif /* __OmpCustomMenuTestLib_LIBRARY_DEFINED__ */

/* Additional Prototypes for ALL interfaces */

unsigned long             __RPC_USER  BSTR_UserSize(     unsigned long *, unsigned long            , BSTR * ); 
unsigned char * __RPC_USER  BSTR_UserMarshal(  unsigned long *, unsigned char *, BSTR * ); 
unsigned char * __RPC_USER  BSTR_UserUnmarshal(unsigned long *, unsigned char *, BSTR * ); 
void                      __RPC_USER  BSTR_UserFree(     unsigned long *, BSTR * ); 

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif


