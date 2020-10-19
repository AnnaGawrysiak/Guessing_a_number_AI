#include "Game_AI.h"
#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

Game_AI::Game_AI()
{
    //ctor
}

Game_AI::~Game_AI()
{
    //dtor
}

 void Game_AI::zmien_zakres(int wynik_porownania, int &min_, int &max_)
    {
        cout << "Wynik porownania: " << wynik_porownania << endl;
        cout << "typ_AI" << typ_AI << endl;

        if (wynik_porownania == 0 && typ_AI > min_)
              {
                  min_ = typ_AI+1;
                  cout << "Nowy zakres min: " << min_ << endl;
              }

        if (wynik_porownania == 1 && typ_AI < max_)
            {
                max_ = typ_AI-1;
                cout << "Nowy zakres max: " << max_ << endl;
            }


        if (wynik_porownania == 2)
            cout << "Wygrana z AI" << endl;

    }


    int Game_AI::typuj_liczbe(int &zakres_min_, int &zakres_max_)
    {
     srand (time (0));

     cout << "zakres_min" << zakres_min_ << endl;
     cout << "zakres_max" << zakres_max_ << endl;

    typ_AI =( rand() % zakres_max_ ) + zakres_min_;

     cout << "Wylosowana przez AI: " << typ_AI << endl;

     return typ_AI;
    }

    void Game_AI::set_zakres_min(int zakres_min_)
    {
        zakres_min = zakres_min_;
    }

    int Game_AI::get_zakres_min()
    {
        return zakres_min;
    }

    void Game_AI::set_zakres_max(int zakres_max_)
    {
        zakres_max = zakres_max_;
    }

    int Game_AI::get_zakres_max()
    {
        return zakres_max;
    }

    void Game_AI::set_typ_AI(int typ_AI_)
    {
        typ_AI = typ_AI_;
    }

    int Game_AI::get_typ_AI()
    {
        return typ_AI;
    }
