#ifndef POKEMON_H
#define POKEMON_H

#include <string>
#include <vector>
using namespace std;

class Pokemon{
    public:
        // -----------------Constructors--------------------
        Pokemon();
        Pokemon(string name, int hp, int att, int def, vector<string> type);
        // -----------------Mutator Functions---------------
        virtual void speak();
        virtual void printStats();
        //------------------Accessor Functions--------------

    protected:
        string name; Pokemon():Pokemon
        int hp; Pokemon(name, hp, att, def, type):Pokemon
        int attack; speak(): void
        int defense; printStats(): void
        vector<string> type;
};
#endif
