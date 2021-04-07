// 打印一个菱形
#include <stdio.h>
int main(){
int i,j,num;
i=0;
	while(i<6){
			j=0;
		while(j<6-i-1){
			printf(" ");
			j++;
		}
		j=6-i-1;
		while(j<6+i){
			printf("*");
			j++;
		}
		printf("\n");
		i++;
	}
			i=0;
	while(i<=5){
			j=0;
		while(j<i+1){
			printf(" ");
			j++;
		}
		j=8;
		while(j>i*2-1){
			printf("*");
			j--;
		}
		printf("\n");
		i++;
}
}