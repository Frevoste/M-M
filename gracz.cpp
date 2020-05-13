#include <iostream>
#include "gracz.h"

using namespace std;


Gracz::Gracz(string name,string race,int hp,int str,int luck,int dex)
{
    imie=name;
    rasa=race;
    zdrowie=hp;
    sila=str;
    szczescie=luck;
    zrecznosc=dex;
}

void Gracz::zmien(string name1,string race1,int hp1,int str1,int luck1,int dex1)
{
    imie=name1;
    rasa=race1;
    zdrowie=hp1;
    sila=str1;
    szczescie=luck1;
    zrecznosc=dex1;
}
