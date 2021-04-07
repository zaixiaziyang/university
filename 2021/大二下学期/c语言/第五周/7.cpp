#include<stdio.h>
int main()
{
int i,a,q=0;
    scanf("%d",&a);
    while(a){
        i=a%10;
        q=q*10+i;
        a=a/10;
    }
    printf("逆向输出:%d\n",q);
return 0;
}