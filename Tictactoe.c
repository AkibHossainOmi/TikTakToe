#include <stdio.h>
#include<unistd.h>
struct p
{
    char x;
} p[9]={'1','2','3','4','5','6','7','8','9'};
void draw();
int main()
{
    draw();
    int i,ps;
    for(i=0;i<9;i++)
    {
        if((p[0].x=='O'&&p[1].x=='O'&&p[2].x=='O')||(p[3].x=='O'&&p[4].x=='O'&&p[5].x=='O')||
           (p[6].x=='O'&&p[7].x=='O'&&p[8].x=='O')||(p[0].x=='O'&&p[3].x=='O'&&p[6].x=='O')||
           (p[1].x=='O'&&p[4].x=='O'&&p[7].x=='O')||(p[2].x=='O'&&p[5].x=='O'&&p[8].x=='O')||
           (p[0].x=='O'&&p[4].x=='O'&&p[8].x=='O')||(p[2].x=='O'&&p[4].x=='O'&&p[6].x=='O'))
        {
            printf("Sorry :(\nYou lost the game\nPlay again\n");
            break;
        }
        if((p[0].x=='X'&&p[1].x=='X'&&p[2].x=='X')||(p[3].x=='X'&&p[4].x=='X'&&p[5].x=='X')||
           (p[6].x=='X'&&p[7].x=='X'&&p[8].x=='X')||(p[0].x=='X'&&p[3].x=='X'&&p[6].x=='X')||
           (p[1].x=='X'&&p[4].x=='X'&&p[7].x=='X')||(p[2].x=='X'&&p[5].x=='X'&&p[8].x=='X')||
           (p[0].x=='X'&&p[4].x=='X'&&p[8].x=='X')||(p[2].x=='X'&&p[4].x=='X'&&p[6].x=='X'))
        {
            printf("Congratulation!!!\nYou win the game\nPlay again\n");
            break;
        }
        if(i%2==1)
        {
            printf("\n\nWait for computer turn: \n\n\n");
            sleep(1);
        }
        if(i==1&&p[4].x!='X')
        {
            p[4].x='O';
            draw();
            continue;
        }
        else if(i==3&&((p[1].x=='X'&&p[5].x=='X')||(p[8].x=='X'&&p[4].x=='X')||(p[0].x=='X'&&p[5].x=='X')||(p[8].x=='X'&&p[1].x=='X')||(p[8].x=='X'&&p[1].x=='X')))
        {
            p[2].x='O';
            draw();
            continue;
        }
        else if(i==3&&((p[7].x=='X'&&p[5].x=='X')||(p[2].x=='X'&&p[7].x=='X')||(p[6].x=='X'&&p[5].x=='X')))
        {
            p[8].x='O';
            draw();
            continue;
        }
        else if(i==1||(i==3&&((p[2].x=='X'&&p[3].x=='X')||(p[6].x=='X'&&p[1].x=='X'))))
        {
            p[0].x='O';
            draw();
            continue;
        }
        else if(i==3&&((p[0].x=='X'&&p[7].x=='X')||(p[3].x=='X'&&p[7].x=='X')||(p[2].x=='X'&&p[3].x=='X')||(p[6].x=='X'&&p[1].x=='X')))
        {
            p[6].x='O';
            draw();
            continue;
        }
        else if(i==3&&p[2].x=='X'&&p[6].x=='X')
        {
            p[1].x='O';
            draw();
            continue;
        }
        if(i>2&&i%2==1)
        {
            if(p[0].x=='O'&&p[1].x=='O'&&p[2].x=='3') p[2].x='O';
            else if(p[0].x=='O'&&p[2].x=='O'&&p[1].x=='2') p[1].x='O';
            else if(p[2].x=='O'&&p[1].x=='O'&&p[0].x=='1') p[0].x='O';
            else if(p[3].x=='O'&&p[4].x=='O'&&p[5].x=='6') p[5].x='O';
            else if(p[3].x=='O'&&p[5].x=='O'&&p[4].x=='5') p[4].x='O';
            else if(p[4].x=='O'&&p[5].x=='O'&&p[3].x=='4') p[3].x='O';
            else if(p[6].x=='O'&&p[7].x=='O'&&p[8].x=='9') p[8].x='O';
            else if(p[6].x=='O'&&p[8].x=='O'&&p[7].x=='8') p[7].x='O';
            else if(p[7].x=='O'&&p[8].x=='O'&&p[6].x=='7') p[6].x='O';
            else if(p[0].x=='O'&&p[3].x=='O'&&p[6].x=='7') p[6].x='O';
            else if(p[0].x=='O'&&p[6].x=='O'&&p[3].x=='4') p[3].x='O';
            else if(p[6].x=='O'&&p[3].x=='O'&&p[0].x=='1') p[0].x='O';
            else if(p[4].x=='O'&&p[7].x=='O'&&p[1].x=='2') p[1].x='O';
            else if(p[1].x=='O'&&p[7].x=='O'&&p[4].x=='5') p[4].x='O';
            else if(p[4].x=='O'&&p[1].x=='O'&&p[7].x=='8') p[7].x='O';
            else if(p[8].x=='O'&&p[5].x=='O'&&p[2].x=='3') p[2].x='O';
            else if(p[2].x=='O'&&p[8].x=='O'&&p[5].x=='6') p[5].x='O';
            else if(p[2].x=='O'&&p[5].x=='O'&&p[8].x=='9') p[8].x='O';
            else if(p[4].x=='O'&&p[8].x=='O'&&p[0].x=='1') p[0].x='O';
            else if(p[0].x=='O'&&p[8].x=='O'&&p[4].x=='5') p[4].x='O';
            else if(p[4].x=='O'&&p[0].x=='O'&&p[8].x=='9') p[8].x='O';
            else if(p[4].x=='O'&&p[6].x=='O'&&p[2].x=='3') p[2].x='O';
            else if(p[2].x=='O'&&p[6].x=='O'&&p[4].x=='5') p[4].x='O';
            else if(p[2].x=='O'&&p[4].x=='O'&&p[6].x=='7') p[6].x='O';
            else if(p[0].x=='X'&&p[1].x=='X'&&p[2].x=='3') p[2].x='O';
            else if(p[0].x=='X'&&p[2].x=='X'&&p[1].x=='2') p[1].x='O';
            else if(p[2].x=='X'&&p[1].x=='X'&&p[0].x=='1') p[0].x='O';
            else if(p[3].x=='X'&&p[4].x=='X'&&p[5].x=='6') p[5].x='O';
            else if(p[3].x=='X'&&p[5].x=='X'&&p[4].x=='5') p[4].x='O';
            else if(p[4].x=='X'&&p[5].x=='X'&&p[3].x=='4') p[3].x='O';
            else if(p[6].x=='X'&&p[7].x=='X'&&p[8].x=='9') p[8].x='O';
            else if(p[6].x=='X'&&p[8].x=='X'&&p[7].x=='8') p[7].x='O';
            else if(p[7].x=='X'&&p[8].x=='X'&&p[6].x=='7') p[6].x='O';
            else if(p[0].x=='X'&&p[3].x=='X'&&p[6].x=='7') p[6].x='O';
            else if(p[0].x=='X'&&p[6].x=='X'&&p[3].x=='4') p[3].x='O';
            else if(p[6].x=='X'&&p[3].x=='X'&&p[0].x=='1') p[0].x='O';
            else if(p[4].x=='X'&&p[7].x=='X'&&p[1].x=='2') p[1].x='O';
            else if(p[1].x=='X'&&p[7].x=='X'&&p[4].x=='5') p[4].x='O';
            else if(p[4].x=='X'&&p[1].x=='X'&&p[7].x=='8') p[7].x='O';
            else if(p[8].x=='X'&&p[5].x=='X'&&p[2].x=='3') p[2].x='O';
            else if(p[2].x=='X'&&p[8].x=='X'&&p[5].x=='6') p[5].x='O';
            else if(p[2].x=='X'&&p[5].x=='X'&&p[8].x=='9') p[8].x='O';
            else if(p[4].x=='X'&&p[8].x=='X'&&p[0].x=='1') p[0].x='O';
            else if(p[0].x=='X'&&p[8].x=='X'&&p[4].x=='5') p[4].x='O';
            else if(p[4].x=='X'&&p[0].x=='X'&&p[8].x=='9') p[8].x='O';
            else if(p[4].x=='X'&&p[6].x=='X'&&p[2].x=='3') p[2].x='O';
            else if(p[2].x=='X'&&p[6].x=='X'&&p[4].x=='5') p[4].x='O';
            else if(p[2].x=='X'&&p[4].x=='X'&&p[6].x=='7') p[6].x='O';
            else
            {
                for(int j='1';j<='9';j++)
                {
                    if(p[j-49].x==j)
                    {
                        p[j-49].x='O';
                        break;
                    }
                }
            }
            draw();
            continue;
        }
        printf("\n\nMake your turn: ");
        scanf("%d",&ps);
        system("cls");
        sleep(0.5);
        if(p[ps-1].x!='1'&&p[ps-1].x!='2'&&p[ps-1].x!='3'&&
           p[ps-1].x!='4'&&p[ps-1].x!='5'&&p[ps-1].x!='6'&&
           p[ps-1].x!='7'&&p[ps-1].x!='8'&&p[ps-1].x!='9')
           {
               printf("\n\nInvalid position\nYou have been cheating!\nPlay again\n");
               break;
           }
        p[ps-1].x='X';
        draw();
        if(i==8) printf("\n\nWow!!\nYou have drawn with the computer\n");
    }
    scanf("%d",&ps);
}
void draw()
{
    printf("\n\n\t %c | %c | %c     \n"
           "\t---|---|---\n"
           "\t %c | %c | %c   \n"
           "\t---|---|---\n"
           "\t %c | %c | %c   \n",p[0].x,p[1].x,p[2].x,p[3].x,p[4].x,p[5].x,p[6].x,p[7].x,p[8].x,p[9].x);
}
