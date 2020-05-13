#include <iostream>
#include "nowagra.h"

using namespace std;


void menu()
{
    system ("CLS");
    for(int i=0; i<4;i++)
        cout << endl;
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),4);
    cout << "                                 "  << "   _|_|                _|                         " << endl;
    cout << "                                 "  << " _|    _|  _|  _|_|  _|_|_|_|    _|_|      _|_|_|  " << endl;
    cout << "                                 "  << " _|_|_|_|  _|_|        _|      _|_|_|_|  _|_|      " << endl;
    cout << "                                 "  << " _|    _|  _|          _|      _|            _|_|" << endl;
    cout << "                                 "  << " _|    _|  _|            _|_|    _|_|_|  _|_|_|    " << endl;
    for(int i=0; i<2;i++)
        cout << endl;
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),14);
    cout << "                          " << "  /------------------------[  MENU  ]-----------------------\\" << endl;
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),15);
    cout << endl;
    cout << endl;
    cout << "                          " << "  " << endl;
    cout << "                          " << "  " << endl;
    cout << "                                                " << "  < [1]NOWA GRA >" << endl;
    cout << "                          " << "  " << endl;
    cout << "                          " << "  " << endl;
    cout << endl;
    cout << endl;
    cout << "                          " << "  " << endl;
    cout << "                          " << "  " << endl;
    cout << "                                               " << "  < [2]WCZYTAJ GRE >" << endl;
    cout << "                          " << "  " << endl;
    cout << "                          " << "  " << endl;
    cout << endl;
    cout << endl;
    cout << "                          " << "  " << endl;
    cout << "                          " << "  " << endl;
    cout << "                                                 " << "  < [3]RANKING >" << endl;
    cout << "                          " << "  " << endl;
    cout << "                          " << "  " << endl;
    cout << endl;
    cout << endl;
    cout << "                          " << "  " << endl;
    cout << "                          " << "  " << endl;
    cout << "                                                 " << "  < [4]WYJSCIE >" << endl;
    cout << "                          " << "  " << endl;
    cout << "                          " << "  " << endl;
    cout << endl;

    cout << endl;
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),11);
    cout << "                          " << "    @Michalina_Calus                     @Mateusz_Redzimski  "<< endl;
    stopka();
    int zmienna;
    cin >> zmienna;
    switch( zmienna )
    {
        case 1:
            system("cls");
            nowagra();
            break;

        case 2:
            system("cls");
            cout << "WYBRALES WCZYTAJ GRE" << endl;
            break;

            //...
        case 3:
            system("cls");
            cout << "WYBRALES RANKING" << endl;
            break;

        default:
            exit(0);
            break;
    }
}

