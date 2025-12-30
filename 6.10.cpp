#include <stdio.h>
int main (){
int sum; int n; char ans;
do{
printf("enter a number: ");
scanf("%d", &n);
printf("Do you want to continue? (Y/N): ");
scanf(" %c",&ans );
sum=n+sum;}
while (ans=='Y');
printf("final sum of all entered numbers is %d", sum);
}

