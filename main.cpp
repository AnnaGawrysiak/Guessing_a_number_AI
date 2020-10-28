#include <iostream>
#include "Game.h"
#include "Game_AI.h"


 using namespace std;

 int main()
 {

    Game game;

    Game_AI gameAI;

    gameAI.set_min_scope(1);
    gameAI.set_max_scope(100);

    game.load_value();

    int AI_guess =  gameAI.AI_guess();

    int comparison = game.comparing_numbers(AI_guess);

    bool checking_if_won = game.checking_if_won();

    int round = 1;

    gameAI.change_scope(comparison);

    cout << endl;

   while(checking_if_won == false)
    {
        AI_guess =  gameAI.AI_guess();
        comparison = game.comparing_numbers(AI_guess);
        gameAI.change_scope(comparison);
        checking_if_won = game.checking_if_won();
        round ++;

        cout << endl;
    };

    if (checking_if_won == true)
        cout << "Congratulations AI! In round " << round << " AI guessed the right number: " << AI_guess << endl;

     return 0;
 }
