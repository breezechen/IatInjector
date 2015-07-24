#include <stdio.h>
#include <tchar.h>
#include "injector.h"


const TCHAR* target_exe = NULL;
const TCHAR* target_dll = NULL;

bool repair = false;
bool inject = false;
bool listinfo = false;
bool force = false;

bool parse_params(int argc, TCHAR** argv)
{
    return true;
}

void usage()
{

}

bool test_open_file(const TCHAR* file_name)
{
    return true;
}

int wmain(int argc, TCHAR** argv)
{
    if (!parse_params(argc, argv)) {
        usage();
        return -1;
    }

    if (!test_open_file(target_exe)) {
        wprintf(_T("Open %s failed!\n"), target_exe);
        return -1;
    }

    if (!test_open_file(target_dll)) {
        wprintf(_T("Open %s failed!\n"), target_dll);
        return -1;
    }

    if (!is_pe(target_exe)) {
        wprintf(_T("%s is not a executable application!\n"), target_exe);
        return -1;
    }

    if (inject) {
        if (!is_dll_exports(target_dll)) {
            printf("\n");
            return -1;
        }

        if (is_exe_file_injected(target_exe)) {
            wprintf(_T("%s seems has injected with IatInjector before.Using  [IatInjector -l] to view more infomation about IAT.\nContinue injecting?(y/N):"), target_exe);
            char ans;
            scanf("%c", &ans);
            if (ans != 'y' && ans != 'Y') {
                return -1;
            }
        }
    }

    return 0;
}