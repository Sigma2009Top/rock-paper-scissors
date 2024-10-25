#pragma once

#include <iostream>
#include <string>

class Item{
private:
    std::string name;
    std::string enemy;
    std::string super;

    unsigned int score = 0;

public:
    Item();
    Item(std::string name, std::string enemy, std::string super);

    std::string get_name();
    std::string get_enemy();
    std::string get_super();

    void set_name(std::string name);
    void set_enemy(std::string enemy);
    void set_super(std::string super);

    void attack(std::string attacker);
};