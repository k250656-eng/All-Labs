#include <stdio.h>
	int sqr(int a){
		return a*a;
	}
	
	int main (){
		int a;
		printf("enter number you want to square: ");
		scanf("%d",&a);
	
		printf("square is %d", sqr(a));
		return 0;}

