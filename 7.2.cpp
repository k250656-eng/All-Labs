#include <stdio.h> int main() {
int sum;
int a[10];
int odd=0; int even=0;
int evenpresent=0;
int oddpresent=0;
for (int i=0; i<10; i++) {
printf("enter integer number %d: ",i+1)= scanf("%d", &a[i]);
if (a[i]%2==0){
even=even+a[i];
evenpresent=1;
}
else {
odd=odd+a[i];
oddpresent=1;
}
}
printf("\nsum of even numbers is %d", even); 
printf("\nsum of odd numbers is %d", odd);
if (evenpresent!=1){
}
printf("\nno even numbers");
if (oddpresent!=1){
printf("\nno odd numbers");}
}

