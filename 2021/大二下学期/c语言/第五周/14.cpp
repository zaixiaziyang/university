// 5文钱可以买一只公鸡，3文钱可以买一只母鸡，一文钱三只小鸡，现在用100文钱买100只鸡，那么现在有多少公鸡小鸡母鸡
#include <stdio.h>
int main(){
   int gong,mu,xiao,n,m;
   m=100;n=100; gong=0;
   while(gong<=n/5){
   mu=0;
   	while(mu<=n/3){
	   	xiao=n-gong-mu;
	   	if(gong*5+mu*3+xiao/3==m&&mu+gong+xiao==n&&xiao%3==0){
	   	
	   		printf("公鸡个数%d,母子个数%d,小鸡个数%d.\n",gong,mu,xiao);
	   	}
	   	mu++;
	   }
	   gong++;
   }
  
}