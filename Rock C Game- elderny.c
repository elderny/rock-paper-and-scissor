#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int Player_score = 0;
int Pc_score = 0;
char name[20];
void game()
{
    int i = 0, user, pc;
    printf("Type Your Name To Start\n");
    printf("Name: ");
    scanf("%s", &name);
    while (i != 4)
    {
        printf("\n-%s's Turn-\n",name);
        printf("Type '0' for rock, '1' for paper, '2' for scissor\n");
        printf("Type here: ");
        scanf("%d", &user);
        getchar();

        switch (user)
        {
        case 0:
            printf("\n-Computers Turn-\n");
            srand(time(NULL));
            pc = rand()%3;
            if (user == 0 && pc == 2)
            {
                printf("Computer Selected Scissor, %s selected rock\n", name);
                printf("\nStatus: %s has won Round %d\n", name, i+1);
                Player_score ++;
            }
            else if (user == 0 && pc == 1)
            {
                printf("Computer Selected Paper, %s selected rock\n");
                printf("\nStatus: Computer won Round %d\n", +1);
                Pc_score ++;
            }
            else if (user == 0 && pc == 0)
            {
                printf("Computer Selected Rock, %s selected Rock\n", name);
                printf("\nStatus: Draw inputs Round %d\n", i+1);
            }
            break;
        case 1:
            printf("\n-Computers Turn-\n");
            srand(time(NULL));
            pc = rand()%3;
            if (user == 1 && pc == 2)
            {
                printf("Computer Selected Scisor, %s selected Paper\n", name);
                printf("\nStatus: Computer won Round %d\n", i+1);
                Pc_score ++;
            }
            else if (user == 1 && pc == 0)
            {
                printf("Computer Selected Rock, %s selected Paper\n", name);
                printf("\nStatus: %s has won Round %d\n", name, i+1);
                Player_score ++;
            }
            else if (user == 1 && pc == 1)
            {
                printf("Computer Selected Paper, %s selected Paper\n", name);
                printf("\nStatus: Draw inputs Round %d\n", i+1);
            }
            break;
        case 2:
            printf("\n-Computers Turn-\n");
            srand(time(NULL));
            pc = rand()%3;
            if (user == 2 && pc == 1)
            {
                printf("Computer Selected Paper, %s selected Scissor\n", name);
                printf("\nStatus: %s has won Round %d\n", name, i+1);
                Player_score ++;
            }
            else if (user == 2 && pc == 0)
            {
                printf("Computer Selected Rock, %s selected Scissor\n", name);
                printf("\nStatus: Computer won Round %d\n", i+1);
                Pc_score ++;
            }
            else if (user == 2 && pc == 2)
            {
                printf("Computer Selected Scissor, %s selected Scissor\n", name);
                printf("\nStatus: Draw inputs Round %d\n", i+1);
            }
            break;
        default:
            printf("Sorry, %s your action wasn't recorded !\n", name);
            break;
        }
        i += 1;
    }
    printf("\n<-SCORES->\n");
    if (Player_score > Pc_score)
    {
        printf("%s Score: %d\nComputer Score: %d\n", name, Player_score, Pc_score);
        printf("\n--%s is the Winner--\n\n", name);
    }
    else if (Player_score < Pc_score)
    {
        printf("%s Score: %d\nComputer Score: %d\n",name, Player_score, Pc_score);
        printf("\n--Computer is The Winner--\n\n");
    }
    else if (Player_score == Pc_score)
    {
        printf("%s Score: %d\nComputer Score: %d\n", name, Player_score, Pc_score);
        printf("\n--No one won! - Draw--\n\n");
    }
}

int main()
{
    printf("\nWelcome to Elderny's Rocking Game!\n");
    game();
    return 0;
}