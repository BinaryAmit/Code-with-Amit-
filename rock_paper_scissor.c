#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<string.h>
int main() {
    int number1, number2, number0;


    srand(time(NULL));
    number0=rand()%3;
    number1=rand()%3;
    number2=rand()%3;
    char compt_choice[][20] = {"rock", "paper", "scissor"};

    // Accessing and printing the strings
    /*  for (int i = 0; i < 3; i++) {
          printf("%s\n", compt_choice[i]);
      }
           */
    //puts(compt_choice[number]);
    char player_name[50];
    char player_choice[50];
    printf("Enter your name:");
    scanf("%s",& player_name);
    printf("\vHello %s\nyou are welcome in our Rock paper scissor game.\nIn this game you have to choose any one from rock paper & scissor\v\n", player_name);

    int mode=1;


    do {

        for(int i=1; i<=3; i++) {

            printf("Round %d:\n",i);

            printf("your turn:\nplease give any one from rock, paper & scissor:");
            scanf("%s",&player_choice);

            int number[2];
            int k=number[i];
            printf("\v\vcomputer turn:\ncomputer choose :%s\n",compt_choice[k]);

            if(player_choice=='rock') {
            }


            printf("\v");

        }
        printf("Game over\n");
        printf("if you want to continue playing press 1 either 0:\n");
        scanf("%d",&mode);





    } while(mode==1);
    printf("you are quitting.....!\n");
    printf("Thanks for playing with us...!\bhave a good day...!");


    /*

    printf("%s\n", compt_choice[number0]);
    printf("%s\n", compt_choice[number1]);
    printf("%s\n", compt_choice[number2]);



    */

    return 0;
}