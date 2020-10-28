#include "Game.h"
#include <iostream>

using namespace std;


        Game::Game()
        {

        }

        Game::Game(int AI_type_, int user_type_, int if_won_)
        {
            AI_type = AI_type_;
            user_type = user_type_;
            if_won = if_won_;
        }

        Game::Game(const Game & P1)
        {

            AI_type = P1.AI_type;
            user_type = P1.user_type;
            if_won = P1.if_won;
        }

    Game::~Game()
    {
    }

    int Game::load_value()
    {
        cout << "Wytypuj swoja liczbe z zakresu od 1 do 100: ";
        cin >> user_type;

    return user_type;
    }


    int Game::comparing_numbers(int AI_type_)
    {


         if (user_type == AI_type_)

           {
            cout << equal << endl;
            if_won = true;
            return equal;
           }

        if (user_type > AI_type_)
        {
            cout << "Number chosen by the user is bigger than AI's type" << endl;
           return bigger;
        }


         if (user_type < AI_type_)
         {
        cout << "Number chosen by the user is smaller than AI's type" << endl;
         return smaller;
         }

    }

    bool Game::checking_if_won()
    {
        if (if_won == true)
            return true;

        else
        return false;
    }
