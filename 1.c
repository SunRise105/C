#include <stdio.h>

int main (void)

{
    int goblin_gold = 15;
    int player_gold = 0;
    char action;
    int hp_goblin;
    char nick_name[9]; 

    printf("What is your name?\n");
    scanf("%8[^\n]",nick_name);
    printf("Hi, %s\n", nick_name);
    while(getchar() != '\n');

    printf("You attacked by Sanya(3HP). 'A'ttack or 'R'un\n", hp_goblin);
    action = getchar();

    while (action != 'r')
    {
            if (action == 'a' || action == 'A')
        {
            for (hp_goblin = 3; hp_goblin >= 0;)
            {
                hp_goblin = hp_goblin - 1;
                if (hp_goblin > 0)
                    printf("You punch Sanya. Sanya HP: %d\n", hp_goblin);
                if (hp_goblin == 0)
                {
                    printf("You killed Sanya.\n");
                    player_gold = player_gold + goblin_gold;
                    printf("You found %d gold. You have total hold %d\n", goblin_gold, player_gold);
                    break;
                }
                
            }
        }

  
    printf("Next action?'A'ttack or 'R'un\n");
    getchar();
    action = getchar();
        }
    if (action == 'r') printf("You've decided to run away!\n");
    return 0;
}
