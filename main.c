#include <stdio.h>
void gamename();
void gamestart();
void logic();
void logic1();
void look();Compiling
char sym[9]={'1','2','3','4','5','6','7','8','9'};
char name1[20];
char name2[20];
int main() 
{
 gamename();
 gamestart();
  logic();
    return 0;
}
void look()
{
    printf("-----------|---------|-------\n");
    printf("     %c     |   %c     |  %c     \n",sym[0],sym[1],sym[2]);
    printf("-----------|---------|-------\n");
    printf("     %c     |   %c     |  %c    \n",sym[3],sym[4],sym[5]);
    printf("-----------|---------|-------\n");
    printf("     %c     |   %c     |  %c    \n",sym[6],sym[7],sym[8]);
    printf("-----------------------------\n");
}
void logic()
{
    int pla;
   int count;
   int i;
   printf("Enter The Player Who Will start first:Player1 Or Player2");
   fflush(stdin);
   scanf("%d",&pla);
   count=0;
    if(pla==1)
    {
        while(count<=8)
        {
            logic1();
            look();
            count++;
        }
     }
}
void logic1()
{
    char s,p;
    int i;
    printf("\nEnter the position and symbol",p,s);
                scanf("%c %c",&p,&s);
                for(i=0;i<9;i++)
                {
                 if(p==sym[i])
                    {
                     sym[i]=s;
                    }
                }
    }

void gamename()
{  
    printf("-------------0x0x0x0x-------------\n");
    printf("|          TIC TAC TOE           |\n");
    printf("----------------------------------\n");
    printf("-----------|---------|-------\n");
    printf("     O     |   X     |  O     \n");
    printf("-----------|---------|-------\n");
    printf("     X     |   O     |  O    \n");
    printf("-----------|---------|-------\n");
    printf("     X     |   X     |  O    \n");
    printf("-----------------------------\n");
    printf("Enter The Name For Player-1");
    fgets(name1,20,stdin);
    printf("\nEnter The Name For Player-2");
    fgets(name2,20,stdin);
    
}
void gamestart()
{
    printf("Player-1 Symbol : X\n");
    printf("Player-2 symbol : O\n");
}
