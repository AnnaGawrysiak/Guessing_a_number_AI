#pragma once


class Game
{
     private:

        int wylosowana;
        int typowana;
        bool czy_wygrana = false;

        enum zakres_trafien
        {
          wiekszy,
          mniejszy,
          rowny,
        };


    public:

        Game();

        Game(int wylosowana_, int typowana_, int czy_wygrana_);

        Game(const Game & P1);

        virtual ~Game();

        int wczytaj_wartosc();

        int sprawdzenie_liczby(int wylosowana_);

        bool sprawdzenie_czy_wygrana();


};

