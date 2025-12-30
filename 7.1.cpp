
#include <stdio.h> 
int main() { int sum;
int a[10];
for (int i=0; i<10;i++) {

printf("enter integer number %d: ",i+1); scanf("%d", &a[i]);}
printf("original: \n"); 
for (int i=0;i<10;i++) { 
printf("%d", a[i]);
printf("\nreversed: \n"); 
for (int i=9;i>=0; i--){ 
printf("%d", a[i]); sum=sum+a[i];
}
printf("\nsum of reversed array is %d", sum);
}
