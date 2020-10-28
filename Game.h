#pragma once


class Game
{
     private:

        int AI_type;
        int user_type;
        bool if_won = false;

        enum scope
        {
          bigger,
          smaller,
          equal,
        };


    public:

        Game();

        Game(int AI_type_, int user_type_, int if_won_);

        Game(const Game & P1);

        virtual ~Game();

        int load_value();

        int comparing_numbers(int AI_type_);

        bool checking_if_won();


};

