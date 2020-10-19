#pragma once

class Game_AI
{
    public:
        Game_AI();
        virtual ~Game_AI();

    void zmien_zakres(int wynik_porownania, int & min_, int & max_);

    int typuj_liczbe(int &zakres_min_, int &zakres_max_);

    void set_zakres_min(int zakres_min_);

    int get_zakres_min();

    void set_zakres_max(int zakres_max_);

    int get_zakres_max();

    void set_typ_AI(int typ_AI_);

    int get_typ_AI();

    private:

        int typ_AI;
        int zakres_min;
        int zakres_max;


};
