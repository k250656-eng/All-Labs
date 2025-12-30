
#include <stdio.h>
#include <string.h>
int main(){
	char p1[100], p2[100];
	printf("enter password: ");
	scanf("%s",p1);
	printf("re-enter password to confirm : ");
	scanf("%s",p2);
	
	if (strcmp(p1,p2)==0){
		printf("password matched");
	
	}
	else{
		printf ("Passwords do not match");
	}}

