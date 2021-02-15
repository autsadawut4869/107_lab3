#include<stdio.h>
int main()
{
    long long int n,p,i=2;
    scanf("%lld",&n);
    for(n;n>=0;n--)
    {
        p=1;
        while(i<n){
            if(n%i==0){
                p=0;
                break;
            }
            i++;
        }
        if(p==1){
            printf("%lld",n);
            break;
        }
    }

    return 0;
}
