#include<stdio.h>
int main()
{
    long long int x,i;
    scanf("%lld",&x);

    if(x%2==0){
        if(x==2){
           printf("%d",x);
        }
        else{
           printf("%d",x-1);
        }
    }
    else{
        printf("%d",x);
    }

    return 0;
}
