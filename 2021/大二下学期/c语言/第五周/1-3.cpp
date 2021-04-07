#include <stdio.h>
int main()
{
int i=1,sum=0,j=1;
	while(i<=100){
		if(i%3==0){
			printf("%d  ",i);
			sum+=i;
			if(j%5==0)
				printf("\n");
			j++;
		}
		i++;
	}
	printf("\n总和为%d\n",sum);
    return 0;
}