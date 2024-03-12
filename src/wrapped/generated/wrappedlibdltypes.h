/*******************************************************************
 * File automatically generated by rebuild_wrappers.py (v2.0.0.11) *
 *******************************************************************/
#ifndef __wrappedlibdlTYPES_H_
#define __wrappedlibdlTYPES_H_

#ifndef LIBNAME
#error You should only #include this file inside a wrapped*.c file
#endif
#ifndef ADDED_FUNCTIONS
#define ADDED_FUNCTIONS() 
#endif

typedef int32_t (*iFp_t)(void*);
typedef void* (*pFv_t)(void);
typedef int32_t (*iFpp_t)(void*, void*);
typedef void* (*pFpi_t)(void*, int32_t);
typedef void* (*pFpp_t)(void*, void*);
typedef int32_t (*iFpip_t)(void*, int32_t, void*);
typedef void* (*pFppi_t)(void*, void*, int32_t);
typedef void* (*pFppp_t)(void*, void*, void*);
typedef int32_t (*iFpppi_t)(void*, void*, void*, int32_t);

#define SUPER() ADDED_FUNCTIONS() \
	GO(dlclose, iFp_t) \
	GO(dlerror, pFv_t) \
	GO(_dl_find_object, iFpp_t) \
	GO(dladdr, iFpp_t) \
	GO(dlopen, pFpi_t) \
	GO(dlsym, pFpp_t) \
	GO(dlinfo, iFpip_t) \
	GO(dlmopen, pFppi_t) \
	GO(dlvsym, pFppp_t) \
	GO(dladdr1, iFpppi_t)

#endif // __wrappedlibdlTYPES_H_
