#include "plataforma.h"

#ifdef _WIN32
#include <windows.h>
#endif

void configConsole()
{
#ifdef _WIN32
    SetConsoleOutputCP(65001);
#endif
}