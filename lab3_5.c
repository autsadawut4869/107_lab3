#include <stdio.h>
int main()
{
    unsigned int n,k=0,x=2,p[3];
    scanf("%u",&n);
    int num=n;
    for(k=0;k<3;k++){
        while(n%x!=0){
            x++;
        }
        n/=x;
        p[k]=x;
        x=2;
    }
    if(p[0]!=p[1]&&p[0]!=p[2]&&p[1]!=p[2]){
        printf("%u is a Lucky Number.",num);
    }
    else{
        printf("%u is not a Lucky Number.",num);
    }

    return 0;
}
