#include "global.h"
int battle(int player_gold)
{
    srand(time(NULL));
    rand();
    int goblin_gold = rand() % 15;
for (int hp_goblin = rand() % 5; hp_goblin >= 0;)
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
 return player_gold;
}
int hello(char *nick_name)
{
    printf("What is your name?\n");
    scanf("%8[^\n]",nick_name);
    printf("Hi, %s\n", nick_name);
    while(getchar() != '\n');
    return 0;
}