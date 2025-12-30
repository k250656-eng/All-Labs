#include <stdio.h>
float avg(int a,int b,int c){
int sum=a+b+c;
	return sum/3.0;
	
}
int main ()
{
	float average=avg(3,2,1);
	printf("average of these numbers is %.2f", average);
}
