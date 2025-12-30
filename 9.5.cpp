#include <stdio.h>
void swap (int *a,int *b){
int temp;
printf("initial values are a = %d, b = %d\n", *a,*b);
	temp=*a;
	*a=*b;
	*b=temp;
	printf("new values are a = %d, b = %d", *a,*b);
}
int main (){
	int a, b, temp;
	printf("enter a: ");
	scanf("%d",&a);
	printf("enter b: ");
	scanf("%d",&b);
	swap (&a,&b);
}

