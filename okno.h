#define _WIN32_WINNT 0x0500
#include<windows.h>


using namespace std;

void okno()
{
    HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE); // uchwyt standardowego wyjœcia
    COORD c2; // struktura potrzebna do ustawienia rozmiarów bufora pamiêci
    c2.X = 120; // szerokoœæ na 120 szerokoœci znaków
    c2.Y = 50; // wysokoœæ na 50 wysokoœci znaków
    SetConsoleScreenBufferSize(handle, c2); // ustawia rozmiar bufora (wyœwietlanego tekstu)

    SMALL_RECT sr; // struktura wykorzystywana do ustawienia rozmiaru okna
    sr.Left = 0; // na zero
    sr.Top = 0; // na zero
    sr.Right = c2.X-1; // szerokoœæ o 1 mniejsza od bufora
    sr.Bottom = c2.Y-1; // wysokoœæ o 1 mniejsza od bufora
    SetConsoleWindowInfo(handle,true,&sr); // ustawia rozmiar okna (jednostka to szerokoœæ i wysokoœæ pojedynczego znaku)
    ShowScrollBar(GetConsoleWindow(), SB_BOTH, FALSE);
    SetWindowLong(GetConsoleWindow(), GWL_STYLE, GetWindowLong(GetConsoleWindow(), GWL_STYLE)&~WS_SIZEBOX);

}

