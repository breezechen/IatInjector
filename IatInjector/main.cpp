#include <stdio.h>
#include <tchar.h>

const TCHAR* target_exe;
const TCHAR* target_dll;

bool repair;
bool inject;

bool parse_params(int argc, TCHAR** argv)
{
    return true;
}

void usage()
{

}

int wmain(int argc, TCHAR** argv)
{
    if (!parse_params(argc, argv)) {
        usage();
        return -1;
    } 

    if (inject) {

    }
    return 0;
}