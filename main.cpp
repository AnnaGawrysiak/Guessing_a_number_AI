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

    int wczytana_przez_uzytownika = gra.wczytaj_wartosc();

    int min_ = graAI.get_zakres_min();

    int max_ = graAI.get_zakres_max();

    int wynik_losowania =  graAI.typuj_liczbe(min_, max_);

    int porownanie = gra.sprawdzenie_liczby(wczytana_przez_uzytownika, wynik_losowania);

    //int i = 0;

   do
    {
    graAI.zmien_zakres(porownanie, min_, max_);
    cout << "Zakres min w main: " << min_ << endl;
    cout << "Zakres max w main: " << max_ << endl;
    wynik_losowania =  graAI.typuj_liczbe(min_, max_);
    porownanie = gra.sprawdzenie_liczby(wczytana_przez_uzytownika, wynik_losowania);
    //i++;
    } //while (i != 10);
    while(porownanie != 2);

    // wejdz w petle. sprawdz warunek zwyciestwa.

     return 0;
 }
