#include<stdio.h>
int main()
{
    long int k,a=2;
    scanf("%ld",&k);

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
    //����ش���µ�ͧ��0����
    printf("0");

    return 0;
}
