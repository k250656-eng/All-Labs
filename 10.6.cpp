
#include <stdio.h>
#include <string.h>
int main(){
	char fn[100], sn[100];
	printf("enter first username: ");
	scanf("%s",fn);
	printf("enter second username: ");
	scanf("%s",sn);
	strcat(fn,sn);
	printf("merged name is %s",fn);}

