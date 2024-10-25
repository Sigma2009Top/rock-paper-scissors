#include <iostream>
#include <string>
#include <ctime>

#include "item/item.h"

using namespace std;

int main(int argc, char *argv[])
{
    system("cls");

    Item paper("paper", "scissors", "rock");
    Item rock("rock", "paper", "scissors");
    Item scissors("scissors", "rock", "paper");

    Item items[] = {paper, rock, scissors};

    string player_item;
    Item player("", "", "");

    Item bot("", "", "");

    for(;;){ // game loop
        cout << "---------------------" << endl;

        srand(time(0));
        unsigned int rnd = rand() % (sizeof(items) / sizeof(items[0]));

        bot = items[rnd];

        cout << "enter stop or s to stop the game" << endl;
        cout << "rock, scissors or paper? \n" << endl;
        cin >> player_item;

        if(player_item == "s" || player_item == "stop"){
            break;
        }
        else if(player_item.compare(paper.get_name()) == 0){  // paper
            player.set_name(paper.get_name());
            player.set_enemy(paper.get_enemy());
            player.set_super(paper.get_super());
        }
        else if(player_item.compare(rock.get_name()) == 0){  // rock
            player.set_name(rock.get_name());
            player.set_enemy(rock.get_enemy());
            player.set_super(rock.get_super());
        }
        else if(player_item.compare(scissors.get_name()) == 0){  // scissors
            player.set_name(scissors.get_name());
            player.set_enemy(scissors.get_enemy());
            player.set_super(scissors.get_super());
        }

        cout << "---------------------" << endl;
        cout << "\n\n";
        system("cls");

        player.attack(bot.get_name());
        cout << endl << "enemy is " << bot.get_name() << endl;
        cout << "your is " << player.get_name() << endl;
    }

    return 0;
}