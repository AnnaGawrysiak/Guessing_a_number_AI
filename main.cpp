#include <iostream>
#include <ctime>
#include <cstdlib>
#include "Game.h"
#include "Game_AI.h"


 using namespace std;

 int main()
 {

    Game gra;

    Game_AI graAI;

    graAI.set_zakres_min(1);
    graAI.set_zakres_max(100);

    gra.wczytaj_wartosc();

    int wynik_losowania =  graAI.typuj_liczbe();

    int porownanie = gra.sprawdzenie_liczby(wynik_losowania);

    bool czy_wygrana = gra.sprawdzenie_czy_wygrana();

    int runda = 1;

   do
    {
        graAI.zmien_zakres(porownanie);
        wynik_losowania =  graAI.typuj_liczbe();
        porownanie = gra.sprawdzenie_liczby(wynik_losowania);
        czy_wygrana = gra.sprawdzenie_czy_wygrana();
        runda ++;

        cout << endl;
    }while(czy_wygrana == false);

    if (czy_wygrana == true)
        cout << "Brawa dla AI! W rundzie " << runda << " komputer odgadl wytypowana liczbe: " << wynik_losowania << endl;

     return 0;
 }
