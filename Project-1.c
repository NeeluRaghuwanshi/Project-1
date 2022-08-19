//Number Shifting Game
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<conio.h>
#include<time.h>
void rules();
int random();
int a[4][4]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15};
int r[4][4];
int main()
{   char n[30];
    char m[30];
    char c;
    printf("Player name:");
    scanf("%s",n);
    strcpy(m,n);
    printf("\n\n");
    system("cls");
    rules(a);
    printf("Enter any key to start...\n\n");
    getch();

    printf("Hello: %s\n",m);
    random(a);

    return 0;
}
void rules(int a[][4])
{   int i,j;
    printf("\n\n");
    printf("    \" WELCOME TO THE NUMBER SHIFTING GAME \"\n\n");
    printf("           ||  RULES OF THE GAME  ||\n\n");
    printf("1.You can move only 1 step at a time by arrow key.\n");
    printf("   Move Up    : by Up arrow key\n");
    printf("   Move Down  : by Down arrow key\n");
    printf("   Move Right : by Up Right key\n");
    printf("   Move Left  : by Left arrow key\n\n");
    printf("2.You can move number at empty position only.\n\n");
    printf("3.For each valid move : your number of moves will decrease by 1,so try to win in minimum number of moves\n\n");
    printf("4.Winning situation : number in 4*4 matrix should be in order from 1 to 15 \n\n");
    printf("           Winning Situation\n");
    printf("-------------------------\n");
    for(i=0;i<4;i++)
      {
          for(j=0;j<4;j++)
              {
                  if(i==3 && j==3)
                 {
                  printf("|     ");
                 }
                 else
                printf("| %2d  ",a[i][j]);
              }

           printf("|\n");

      }
    printf("-------------------------\n");
    printf("5.You can exit the game at any time by pressing E or e.\n\n");
    printf("     HAPPY GAMING, ALL THE BEST.\n\n");
}

int random(int r[4][4])
{
int i,j,ran;
srand(time(NULL));
printf("-------------------------\n");
for(i=0;i<4;i++)
    {
        for(j=0;j<4;j++)
            {   if(i==3 && j==3)
                 {
                  printf("|     ");
                 }
                 else
                 {
                ran=(rand()%15+1);
                r[i][j] = ran;
                printf("| %2d  ",r[i][j]);
                }
            }
        printf("|\n");
    }
    printf("-------------------------\n");
}

int play(int r[4][4])
{

    int moves=100;


}



