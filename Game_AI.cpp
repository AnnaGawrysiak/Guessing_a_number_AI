#include "Game_AI.h"
#include <iostream>

using namespace std;

Game_AI::Game_AI()
{
    //ctor
}

Game_AI::~Game_AI()
{
    //dtor
}

 void Game_AI::change_scope(int comparison_result)
{
     if (comparison_result == 0 && AI_type > min_scope)
              {
                  min_scope = AI_type;
                  cout << "Nowy zakres min: " << min_scope << endl;
              }

        else if (comparison_result == 1 && AI_type < max_scope)
            {
                max_scope = AI_type;
                cout << "Nowy zakres max: " << max_scope << endl;
            }


        else if (comparison_result == 2)
            cout << "Wygrana AI" << endl;
}



    int Game_AI::AI_guess()
    {

     cout << "zakres_min" << min_scope << endl;
     cout << "zakres_max" << max_scope << endl;

    AI_type = min_scope + ((max_scope - min_scope)/2);

     cout << "Wytypowana przez AI: " << AI_type << endl;

     return AI_type;
    }

    void Game_AI::set_min_scope(int min_scope_)
    {
        min_scope = min_scope_;
    }

    void Game_AI::set_max_scope(int max_scope_)
    {
        max_scope = max_scope_;
    }


