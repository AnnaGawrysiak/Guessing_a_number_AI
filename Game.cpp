#include "Game.h"
#include <iostream>
using namespace std;


        Game::Game()
        {

        }

        Game::Game(int wylosowana_, int typowana_, int czy_wygrana_)
        {
            wylosowana = wylosowana_;
            typowana = typowana_;
            czy_wygrana = czy_wygrana_;
        }

        Game::Game(const Game & P1)
        {

            wylosowana = P1.wylosowana;
            typowana = P1.typowana;
            czy_wygrana = P1.czy_wygrana;
        }

    Game::~Game()
    {
    }

    int Game::wczytaj_wartosc()
    {
        cout << "Wytypuj swoja liczbe z zakresu od 1 do 100: ";
        cin >> typowana;

    return typowana;
    }


    int Game::sprawdzenie_liczby(int wylosowana_)
    {


         if (typowana == wylosowana_)
            //return zakres_trafien :: rowny;
           {
            cout << rowny << endl;
            czy_wygrana = true;
            return rowny;
           }

        if (typowana > wylosowana_)
        {
            cout << "Liczba wybrana przez uzytkownika jest wieksza niz przez AI" << endl;
           // return zakres_trafien :: wiekszy;
           return wiekszy;
        }


         if (typowana < wylosowana_)
         {
        cout << "Liczba wybrana przez uzytkownika jest mniejsza niz przez AI" << endl;
         return mniejszy;
         }

    }

    bool Game::sprawdzenie_czy_wygrana()
    {
        if (czy_wygrana == true)
            return true;

        else
        return false;
    }
