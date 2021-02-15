#include<stdio.h>
int main()
{
    int n,t[48]={0},i=0;
    scanf("%d",&n);
    int x,prime,a,max=0;
    for(i=0;i<n;i++){
        scanf("%d",&prime);
        scanf("%d",&a);
        t[prime-1]=t[prime-1]+a;
    }
    for(i=0;i<48;i++){
        if(max<t[i]){
            max=t[i];
            x=i;
        }
    }
    printf("%d %d",x+1,t[x]);

    return 0;
}
