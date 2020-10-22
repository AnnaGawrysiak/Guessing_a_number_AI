#pragma once
#include <vector>
using namespace std;

class Game_AI
{
    public:
        Game_AI();
        virtual ~Game_AI();

    void zmien_zakres(int wynik_porownania);

    int typuj_liczbe();

    void set_zakres_min(int zakres_min_);

    void set_zakres_max(int zakres_max_);

    private:

        int typ_AI;
        int zakres_min;
        int zakres_max;
       // vector <int> vector_typow_AI;


};
