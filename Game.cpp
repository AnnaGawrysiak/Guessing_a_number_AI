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
        cout << "Wytypuj swoja liczbe: ";
        cin >> typowana;

    return typowana;
    }


    int Game::sprawdzenie_liczby(int typowana_, int wylosowana_)
    {


         if (typowana_ == wylosowana_)
            //return zakres_trafien :: rowny;
           {
            cout << rowny << endl;
            return 2;
           }

        if (typowana_ > wylosowana_)
        {
            cout << "Liczba wybrana przez uzytkownika jest wieksza niz przez AI" << endl;
           // return zakres_trafien :: wiekszy;
           return 0;
        }


         if (typowana_ < wylosowana_)
         {
        cout << "Liczba wybrana przez uzytkownika jest mniejsza niz przez AI" << endl;
         return 1;
         }


            //return zakres_trafien :: mniejszy;
    }

    bool Game::sprawdzenie_czy_wygrana()
    {
        return false;
    }
