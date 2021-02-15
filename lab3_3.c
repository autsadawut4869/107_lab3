#include<stdio.h>
int main()
{
    int k,a=2;
    scanf("%d",&k);

    if(k==1){
        printf("%d\n",k);
    }
    while(k!=1){
        while(k%a==0){
            printf("%d\n",a);
            k=k/a;
        }
        a++;
    }
    printf("0");

    return 0;
}
