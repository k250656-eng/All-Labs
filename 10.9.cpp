#include <stdio.h>
#include <string.h>
int main(){
	char n[100][100]; int i;
	for (i=0;i<3;i++){
	printf("enter name %d: ",i+1);
	fgets(n[i],100,stdin);
	}
	int j;
	for (i=0;i<3;i++){
		printf("characters in name %d:\n",i+1);
		for (j = 0; n[i][j] != '\0'; j++){

			printf("%c ",n[i][j]);
		}
	
		printf("\n");}
	}
