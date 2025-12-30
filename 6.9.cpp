#include <stdio.h>
int main (){
	int a,largest,smallest, n,i;
	char ans;
	
printf("enter a number: ");
scanf("%d", &n);

largest=smallest=n;

do{
printf("largest number entered so far is %d\n", largest);	
printf("smallest number entered so far is %d\n", smallest);
printf("Do you want to continue? (Y/N): ");
scanf(" %c", &ans);
if (ans=='Y'){
	printf("enter a number: ");
scanf("%d", &n);
if (n>largest) {
	largest=n;	
}
if (n<smallest){
smallest=n;
}
}}
while (ans=='Y');
printf("\nFinal largest: %d\n", largest);
printf("Final smallest: %d\n", smallest);

}


