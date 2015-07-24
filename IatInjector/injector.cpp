#include <tchar.h>
#include <Windows.h>

bool inject_exe_file_patch_iat(const TCHAR* exe_name, const TCHAR* dll_name)
{
    return true;
}
bool repair_exe_file(const TCHAR* exe_name)
{
    return true;
}
bool is_exe_file_injected(const TCHAR* exe_name)
{
    return true;
}
bool is_pe(const TCHAR* file_name)
{
    return true;
}
bool is_dll_exports(const TCHAR* dll_name)
{
    return true;
}