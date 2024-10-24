#pragma once

#include <iostream>
#include <string>

#include "item.h"

Item::Item(){
    this->name = "";
    this->enemy = "";
    this->super = "";
}
Item::Item(std::string name, std::string enemy, std::string super){
    this->name = name;
    this->enemy = enemy;
    this->super = super;
}

std::string Item::get_name(){
    return name;
}
std::string Item::get_enemy(){
    return enemy;
}
std::string Item::get_super(){
    return super;
}

void Item::set_name(std::string name){
    this->name = name;
}
void Item::set_enemy(std::string enemy){
    this->enemy = enemy;
}
void Item::set_super(std::string super){
    this->super = super;
}


void Item::lose(){
    std::cout << "Your lose" << std::endl;
    std::cout << "Your score: " << score << std::endl;
}

void Item::attack(std::string attacker){
    if(attacker == enemy){
        lose();
    }
    else if(attacker == this->name){
        std::cout << "Nobody win" << std::endl;
        std::cout << "Your score: " << score << std::endl;
    }
    else if(attacker == this->super){
        score++;
        std::cout << "Your win!" << std::endl;
        std::cout << "Your score: " << score << std::endl;
    }
    else{
        std::cout << "Incorrect" << std::endl;
    }
}