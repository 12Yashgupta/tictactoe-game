#include<stdio.h>
#include<stdlib.h>
void show();
void rule();
void game();
void play1();
void play2();
char str1[20];
char str2[20];
int check2(int);
int check1(int);
int start;
char layout[3][3]={{'1','2','3'},{'4','5','6'},{'7','8','9'}};
int main()
{
    show();
    system("cls");
    rule();
    play();
    return 0;
}
void game()
{
    printf("\t\t\t\t\t|-------|---------|------|\n");
    printf("\t\t\t\t\t|   %c   |    %c    |  %c   |\n",layout[0][0],layout[0][1],layout[0][2]);
    printf("\t\t\t\t\t|-------|---------|------|\n");
    printf("\t\t\t\t\t|   %c   |    %c    |  %c   |\n",layout[1][0],layout[1][1],layout[1][2]);
    printf("\t\t\t\t\t|-------|---------|------|\n");
    printf("\t\t\t\t\t|   %c   |    %c    |  %c   |\n",layout[2][0],layout[2][1],layout[2][2]);
    printf("\t\t\t\t\t|-------|---------|------|\n");
}
void play()
{
    int count=1;
    printf("Enter Who Will Start This Game:Player-1 and Player-2");
    scanf("%d",&start);
    if(start==1)
    {
    while(count<=9)
    {
         if(count%2!=0)
         {
          game();
          play1();
          count=check1(count);
         }
         else
         {
          game();
          play2();
          count=check2(count);
         }
       count++;
    }
    }
    while(count<=9)
    {
    if(start==2)
    {
    while(count<=9)
    {
         if(count%2==0)
         {
          game();
          play1();
          count=check1(count);
         }
         else
         {
          game();
          play2();
          count=check2(count);
         }
       count++;
    }
    }
    }
    if(count==10)
    {
        printf("GAME DRAW\n");
        printf("HAPPY GAMING");
    }
    game();
}
void play2()
{
    int i,j;
    char player2;
    fflush(stdin);
    printf("Player-2:-Enter Your Move To Fill 'O'--");
    scanf("%c",&player2);
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            if(player2==layout[i][j])
            {
                 layout[i][j]='O';
            }
        }
    }
    system("cls");
}
int check2(int c)
{
    if(layout[0][0]=='O'&&layout[0][1]=='O'&&layout[0][2]=='O')
    {
    printf("%sWINNER",str2);
    return 11;}
    else if(layout[1][0]=='O'&&layout[1][1]=='O'&&layout[1][2]=='O')
    {printf("%sWINNER",str2);
    return 11;}
    else if(layout[2][0]=='O'&&layout[2][1]=='O'&&layout[2][2]=='O')
    {
    printf("%sWINNER",str2);
    return 11;}
    else if(layout[0][0]=='O'&&layout[1][0]=='O'&&layout[2][0]=='O')
    {printf("%sWINNER",str2);
    return 11;}
    else if(layout[0][1]=='O'&&layout[1][1]=='O'&&layout[2][1]=='O')
        {
            printf("%sWINNER",str2);
            return 11;
        }
    else if(layout[0][2]=='O'&&layout[1][2]=='O'&&layout[2][2]=='O')
    {
        printf("%sWINNER",str2);
        return 11;
    }
    else if(layout[0][0]=='O'&&layout[1][1]=='O'&&layout[2][2]=='O')
    {
        printf("%sWINNER",str2);
        return 11;
    }
    else if(layout[0][2]=='O'&&layout[1][1]=='O'&&layout[2][0]=='O')
    {
    printf("%sWINNER",str2);
    return 11;
    }
    else
        return c;
}
void play1()
{
    int i,j;
    char player1;
    fflush(stdin);
    printf("player-1:-Please Enter The Number To Fill 'X'--");
    scanf("%c",&player1);
    printf("\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            if(player1==layout[i][j])
            {
                layout[i][j]='X';
                break;
            }
        }
    }

    system("cls");
}
int check1(int c)
{
     if(layout[0][0]=='X'&&layout[0][1]=='X'&&layout[0][2]=='X')
    {
        printf("%sWINNER",str1);
        return 11;}
    else if(layout[1][0]=='X'&&layout[1][1]=='X'&&layout[1][2]=='X')
    {
        printf("%sWINNER",str1);
        return 11;
    }
    else if(layout[2][0]=='X'&&layout[2][1]=='X'&&layout[2][2]=='X')
    {
        printf("%sWINNER",str1);
    return 11;}
    else if(layout[0][0]=='X'&&layout[1][0]=='X'&&layout[2][0]=='X')
    {
        printf("%sWINNER",str1);
        return 11;
    }
    else if(layout[0][1]=='X'&&layout[1][1]=='X'&&layout[2][1]=='X')
    {
        printf("%sWINNER",str1);
        return 11;
    }
    else if(layout[0][2]=='X'&&layout[1][2]=='X'&&layout[2][2]=='X')
   {
       printf("%sWINNER",str1);
       return 11;
   }
    else if(layout[0][0]=='X'&&layout[1][1]=='X'&&layout[2][2]=='X')
    {
        printf("%sWINNER",str1);
        return 11;
    }
    else if(layout[0][2]=='X'&&layout[1][1]=='X'&&layout[2][0]=='X')
    {
        printf("%sWINNER",str1);
        return 11;
    }
    else
        return c;
    //gamestart();
}
void rule()
{
    printf("RULE:-\n");
    printf(" 1- You Have Given This With This 3*3 Matrix\n\n");
    game();
    printf("\n 2-For Making Your Move In Any Position,Please Enter The Number Where You Want X or O");
    printf("\n 3-You Can Not Enter The Number Where O and X is already Filled\n");
    printf("Enter Any Key To Start:)");
    getch();
    system("cls");
}
void show()
{
    printf("\t\t\t\t\t    WELCOME\n\n");
    printf("\t\t\t\t------------OXOXOXOXOX---------------\n");
    printf("\t\t\t\t|          TIC   TAC  TOE           |\n");
    printf("\t\t\t\t-------------------------------------\n\n\n");
    printf("\t\t\t\t\t|-------|---------|------|\n");
    printf("\t\t\t\t\t|   X   |    X    |  X   |\n");
    printf("\t\t\t\t\t|-------|---------|------|\n");
    printf("\t\t\t\t\t|   O   |    O    |  X   |\n");
    printf("\t\t\t\t\t|-------|---------|------|\n");
    printf("\t\t\t\t\t|   X   |     X   |  O   |\n");
    printf("\t\t\t\t\t|-------|---------|------|\n");
    printf("Enter The Player-1 Name:-");
    fgets(str1,20,stdin);
    printf("Enter The Player-2 Name:-");
    fgets(str2,20,stdin);
    printf("\nPlayer 1 Symbol- X");
    printf("\nPlayer 2 Symbol- O\n\n");
}
