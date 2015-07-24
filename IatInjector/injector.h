#ifndef __INJECTOR_H__
#define __INJECTOR_H__

bool inject_exe_file_patch_iat(const TCHAR* exe_name, const TCHAR* dll_name);
bool repair_exe_file(const TCHAR* exe_name);
bool is_exe_file_injected(const TCHAR* exe_name);
bool is_pe(const TCHAR* file_name);
bool is_dll_exports(const TCHAR* dll_name);

#endif