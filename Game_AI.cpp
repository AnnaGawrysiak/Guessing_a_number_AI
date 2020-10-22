#include "Game_AI.h"
#include <iostream>
#include <ctime>
#include <cstdlib>
#include <vector>

using namespace std;

Game_AI::Game_AI()
{
    //ctor
}

Game_AI::~Game_AI()
{
    //dtor
}

 void Game_AI::zmien_zakres(int wynik_porownania)
 // wiekszy, mniejszy, rowny
    {
        //cout << "Wynik porownania: " << wynik_porownania << endl;
        cout << "Typ AI: " << typ_AI << endl;

        if (wynik_porownania == 0 && typ_AI > zakres_min)
              {
                  zakres_min = typ_AI+1;
                  cout << "Nowy zakres min: " << zakres_min << endl;
              }

        else if (wynik_porownania == 1 && typ_AI < zakres_max)
            {
                zakres_max = typ_AI-1;
                cout << "Nowy zakres max: " << zakres_max << endl;
            }


        else if (wynik_porownania == 2)
            cout << "Wygrana AI" << endl;

    }


    int Game_AI::typuj_liczbe()
    {

     srand (time (0));

     cout << "zakres_min" << zakres_min << endl;
     cout << "zakres_max" << zakres_max << endl;

    typ_AI =( rand() % (zakres_max - zakres_min + 1) + zakres_min);

     cout << "Wylosowana przez AI: " << typ_AI << endl;

    // vector_typow_AI.push_back(typ_AI);

    // for (std::vector<int>::iterator it = vector_typow_AI.begin() ; it != vector_typow_AI.end(); ++it)

          //  {
           //   if (typ_AI == *it)
            //    return Game_AI::typuj_liczbe();
           // }

     return typ_AI;
    }

    void Game_AI::set_zakres_min(int zakres_min_)
    {
        zakres_min = zakres_min_;
    }

    void Game_AI::set_zakres_max(int zakres_max_)
    {
        zakres_max = zakres_max_;
    }


