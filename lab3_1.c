#include<stdio.h>
int main()
{
    int play[5][4];
    int i,j,score[5],bs=0,people=0;
    for(i=0;i<5;i++)
    {
        for(j=0;j<4;j++){
            scanf("%d",&play[i][j]);
        }
    }
    for(i=0;i<5;i++)
    {
        score[i]=0;
        for(j=0;j<4;j++){
            score[i] += play[i][j];
            if(bs<score[i]){
                bs = score[i];
                people = i;
            }
        }
    }

    printf("%d %d",people,bs);

    return 0;
}
