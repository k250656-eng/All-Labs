#include <stdio.h> 
int main (){ 
int a,b,n; int count=0, sum=0; 
printf("enter a number: "); 
scanf("%d", &n); 
for (a=2;a<=n;a++){ 
for (b=2;b<a;b++){ 
if (a%b==0){ break; } } 
if (a==b){ printf("%d ", a); 
count++; sum+=a;} } 
printf("\n number of prime values upto %d are %d", n,count); 
printf("\n sum of prime values upto %d is %d", n,sum);

}

