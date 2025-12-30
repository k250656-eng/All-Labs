#include <stdio.h>
int main(){
int r;
printf("enter radius: ");
scanf("%d",&r);
#define pi 3.142
float a= pi*r*r;
float c=2*pi*r; 
printf("area is %.2f, circumference is %.2f",a,c);
}

