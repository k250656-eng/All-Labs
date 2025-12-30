#include <stdio.h>
#include <string.h>
int main(){
	char c1[100], c2[100];
	int n;
	printf("enter two product codes: ");
	scanf("%s %s",c1,c2);

	printf("upto how many characters do you want to compare: ");
	scanf("%d", &n);
	if (n>strlen(c1)||n>strlen(c2) )
	{printf("invalid input, entered value is larger than length of one or both of codes"); 
	return 0;
	}
	
	if (strncmp(c1,c2,n)==0)
	{printf("the codes share the same prefix");}
	else{printf("the codes share do not the same prefix");}
	
}
	
