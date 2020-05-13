#include <iostream>
using namespace std;

class Gracz
{
    public:
    string imie,rasa;
    int sila,zrecznosc,szczescie,zdrowie;
    Gracz(string="Anon",string="Krasnolud",int=100,int=10,int=10,int=10);
    void zmien(string,string,int,int,int,int);

};
