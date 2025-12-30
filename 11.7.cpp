#include <stdio.h>


int exp(int a,int n){
	if (n==0) return 1;
	return a*exp(a,n-1);	
}
int main(){ int base,expo;
printf("enter base and exponent: ");
scanf("%d %d",&base, &expo);
int ans=exp(base,expo);
printf("answer is %d",ans);}
