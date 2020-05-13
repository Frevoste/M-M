#define _WIN32_WINNT 0x0500
#include<windows.h>
#include <iostream>
#include "okno.h"
#include "naglowek.h"
#include "intro.h"
#include "menu.h"
void start()
{
    okno();
    intro();
    Sleep(3000);
    menu();

}
