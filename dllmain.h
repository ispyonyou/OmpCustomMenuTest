// dllmain.h : Declaration of module class.

class COmpCustomMenuTestModule : public ATL::CComModule
{
public :
	DECLARE_LIBID(LIBID_OmpCustomMenuTestLib)
	DECLARE_REGISTRY_APPID_RESOURCEID(IDR_OMPCUSTOMMENUTEST, "{380cbf2b-8c1f-423b-abdd-16cd9fde3123}")
};

extern class COmpCustomMenuTestModule _AtlModule;
