#include "global.h"

int main (void)

{
    int player_gold = 0;
    char action;
    char nick_name[9]; 

hello(nick_name);
    printf("You attacked by Sanya(3HP). 'A'ttack or 'R'un\n");
    action = getchar();

    while (action != 'r')
    {
         if (action == 'a' || action == 'A')
        {
           player_gold = battle(player_gold);
        }

  
    printf("Next action?'A'ttack or 'R'un\n");
    getchar();
    action = getchar();
        }
    if (action == 'r') printf("You earned %d gold! Good job!\n", player_gold);
    _getch();
    return 0;
}
