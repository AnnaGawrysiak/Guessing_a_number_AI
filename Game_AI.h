#pragma once
#include <vector>
using namespace std;

class Game_AI
{
    public:
        Game_AI();
        virtual ~Game_AI();

    void change_scope(int comparison_result);

    int AI_guess();

    void set_min_scope(int min_scope_);

    void set_max_scope(int max_scope_);

    private:

        int AI_type;
        int min_scope;
        int max_scope;

};
