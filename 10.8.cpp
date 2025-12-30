#include <stdio.h>
#include <string.h>
int main(){
	char n[3][20];
	int i;
	for (i=0;i<3;i++){
	printf("enter name %d: ",i+1);
	fgets(n[i],21,stdin);
	}
	for (i=0;i<3;i++){
		printf("%s", n[i]);}
	}
	
