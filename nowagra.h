
#include <iostream>
#include "naglowek_nowagra.h"
#include "stopka.h"
#include "string"
#include "gracz.h"



using namespace std;

void nowagra()
{
    string imienew,rasanew; // TO DO ZMIANY NA CLASE KIEDY JUZ STWORZYMY
    Gracz uzytkownik("Andrzej","Krasnolud",150,15,10,10);

    int zmienna;




    naglowek_nowagra();
    for(int i=0;i<2;i++)
        cout << endl;
    cout << "                               " <<"Przybywasz do Artes, miasta polozonego w samym centrum" << endl;
    cout << "                               " <<"krolestwa Wabbajack. Miasto to z pozoru mlekiem i mio-" << endl;
    cout << "                               " <<"dem plynace, skrywa wiele tajemnic oraz zagrozen ktore" << endl;
    cout << "                               " <<"tylko na Ciebie czekaja. Gdy przechodzisz przez brame " << endl;
    cout << "                               " <<"zatrzymuje Cie straznik by zadac Ci kilka pytan...    " << endl;
    cout << endl;
    cout << "                               " <<"          Kliknij [ ";
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),10);
    cout << "ENTER";
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),15);
    cout << " ] aby kontynuowac..          " << endl;


    for (int i=0;i<21;i++)
        cout << endl;



    system("PAUSE");
        do
        {
            system("CLS");
            naglowek_nowagra();
            for(int i=0;i<2;i++)
                cout << endl;
            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),11);
            cout << "                               " <<"                     [ STRAZNIK ]                      "<< endl;
            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),15);
            cout << endl;
            cout << "                               " <<" Witaj! Zanim wpuszcze Cie do miasta musze Ci zadac ki-"<< endl;
            cout << "                               " <<" lka pytan. Powiedz mi prosze jak masz na imie...      "<< endl;
            cout << endl;
            cout << "                               " <<"            Podaj swoje imie: ";
            cin >> imienew;
            cout << endl;
        }while(imienew.length()>20||imienew.length()<1);
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),11);
        cout << "                               " <<"                     [ STRAZNIK ]                      "<< endl;
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),15);
        cout << endl;
        cout << "                               " << imienew << "..." << endl;
        cout << "                               " << "Dosc egzotyczne imie, nigdy wczesniej takiego nie spo-"<< endl;
        cout << "                               " << "tkalem. Powiedz mi jeszcze, skad przybywasz?          "<< endl;
        cout << endl;
        cout << "                               ";
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),10);
        cout << "          [1] ";
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),15);
        cout << "Z Radomia.     ";
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),8);
        cout << "Rasa:Ork" << endl;
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),15);
        cout << "                               ";
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),10);
        cout << "          [2] ";
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),15);
        cout << "Z Mazur.       ";
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),8);
        cout << "Rasa:Elf" << endl;
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),15);
        cout << "                               ";
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),10);
        cout << "          [3] ";
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),15);
        cout << "Z Gdanska.     ";
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),8);
        cout << "Rasa:Czlowiek" << endl;
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),15);
        cout << "                               ";
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),10);
        cout << "          [4] ";
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),15);
        cout << "Ze Slaska.     ";
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),8);
        cout << "Rasa:Krasnolud" << endl;
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),15);
        cout << endl;
        cout << "                               " <<"            Wybierz skad pochodzisz: ";
        cin >> zmienna;
        switch( zmienna )
        {
            case 1:
                rasanew="Ork";
                uzytkownik.zmien(imienew,rasanew,150,15,10,10);
                // TUTAJ PRZY OKAZJI ZWIEKSZYMY PODSTAWOWE STATYSTYKI NP DLA ORKA SILE O 4 ect ect... uzylem switcha zeby nie dalo sie wykasztanic tutaj programu.
                break;

            case 2:
                rasanew="Elf";
                uzytkownik.zmien(imienew,rasanew,80,12,15,15);
                break;
            case 3:
                rasanew="Czlowiek";
                uzytkownik.zmien(imienew,rasanew,120,12,14,12);

                break;

            default:
                rasanew="Krasnolud";
                uzytkownik.zmien(imienew,rasanew,100,15,15,10);
                break;
        }
        cout << endl;
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),11);
    cout << "                               " << "                     [ STRAZNIK ]                     "<< endl;
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),15);
    cout << endl;
    cout << "                               " << "Dziekuje, to juz wszystko mozesz wejsc do miasta. Tylko"<< endl;
    cout << "                               " << "nie wpakuj sie w zadne klopoty! Wiezienie jest juz pra-"<< endl;
    cout << "                               " << "wie pelne. Nie potrzeba nam wiecej zlodzieji w miescie."<< endl;
    cout << endl;
    cout << "                               " <<"          Kliknij [ ";
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),10);
    cout << "ENTER";
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),15);
    cout << " ] aby kontynuowac..          " << endl;

    for (int i=0;i<2;i++)
        cout << endl;

    stopka();
        cout << uzytkownik.imie << endl;
        cout << uzytkownik.zdrowie << endl;
        cout << uzytkownik.sila << endl;
        cout << uzytkownik.szczescie << endl;
        cout << uzytkownik.zrecznosc << endl;
    system("PAUSE");








}
