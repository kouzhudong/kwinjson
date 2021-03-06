#pragma once


//一下代码的功能是禁止包含应用层的头文件。
//目的是避免与驱动层的代码出现命名的冲突。
#define _MINWINBASE_
#define _APISETFILE_
#define _FILEAPIFROMAPP_H_
#define _APISETDEBUG_
#define _ERRHANDLING_H_
#define _FIBERS_H_
#define _NAMEDPIPE_H_
#define _HEAPAPI_H_
#define _IO_APISET_H_
#define _SYNCHAPI_H_
#define _THREADPOOLAPISET_H_
#define _THREADPOOLLEGACYAPISET_H_
#define _ENCLAVEAPI_H_
#define _MEMORYAPI_H_
#define _SYSINFOAPI_H_
#define _PROCESSTHREADSAPI_H_
#define _WINBASE_
#define _APISECUREBASE_
#define _WOW64APISET_H_
#define _JOBAPISET2_H_
#define _WINGDI_
#define _WINSOCKAPI_
#define _WINUSER_
#define _PRSHT_H_
#define _LZEXPAND_
#define _IMM_
#define _APISETCONSOLEL3_
#define _WINSPOOL_
#define _INC_SHELLAPI
#define _INC_COMMDLG
#define _OLE2_H_
#define __oleidl_h__
#define _NTDDSCRD_H2_
#define _WINSVC_
#define _WINSCARD_H_
#define __WINCRYPT_H__
#define _M_CEE_PURE
#define _INC_IO
#define _INC_LOCALE
#define _INC_TIME
