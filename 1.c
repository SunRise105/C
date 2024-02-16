#include <stdio.h>
#include <conio.h>

int hello(char *nick_name)
{
    printf("What is your name?\n");
    scanf("%8[^\n]",nick_name);
    printf("Hi, %s\n", nick_name);
    while(getchar() != '\n');
    return 0;
}
int battle(int player_gold)
{
    int goblin_gold = 15;
for (int hp_goblin = 3; hp_goblin >= 0;)
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
