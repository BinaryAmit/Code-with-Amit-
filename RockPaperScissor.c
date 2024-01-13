#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<string.h>
int main() {
    int number[2],number1, number2, number0;
    srand(time(NULL));

    char compt_choice[][20] = {"rock", "paper", "scissor"};
    
    char player_name[50];
    char player_choice[50];
    printf("Enter your name:");
    scanf("%s",player_name);
    printf("Hello %s\nyou are welcome in our Rock paper scissor game.\nIn this game you have to choose any one from rock paper & scissor\n\n", player_name);

    int mode=1;
    int player_point=0;
    int compt_point=0;


    do {

        for(int i=1; i<=3; i++) {

            printf("Round %d:\n",i);

            printf("your turn:\nplease give any one from rock, paper & scissor:");
            scanf("%s",&player_choice);

           // int number[2];
            number[i]=rand()%3;
            printf("computer turn:\ncomputer choose :%s\n",compt_choice[number [i]]);

            if(strcmp(player_choice,compt_choice[number[i]])==0){
                printf("match draw\n");
                /*printf("you win");
                player_point+=1;
                printf("your point is:%d\ncomputer point is:%d",player_point,compt_point);
                */
            }else{
                
                printf("computer win\n");
                compt_point+=1;
                printf("your point is: %d\ncomputer point is:%d\n",player_point,compt_point);
                
            }


            printf("\n\n\n");

        }
        printf("Game over\n");
        printf("if you want to continue playing press 1 either 0:\n");
        scanf("%d",&mode);





    } while(mode==1);
    printf("you are quitting.....!\n");
    printf("Thanks for playing with us...!have a good day...!");




    return 0;
}