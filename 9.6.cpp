#include <stdio.h>
void calculate(int a, int b, int *sum, float *avg){
	*sum=a+b;
	*avg=*sum/2.0;
}
int main (){
	int a,b;
	int sum; float avg;
	printf("enter first number: ");
	scanf("%d",&a);
	printf("enter second number: ");
	scanf("%d",&b);
	calculate(a,b,&sum,&avg);
	printf("sum is %d and average is %.2f",sum,avg);
}
