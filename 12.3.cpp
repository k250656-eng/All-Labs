#include <stdio.h>
#include <stdlib.h>
int main(){
	int n;
	
	int *ptr=(int*)malloc(5*sizeof(int));
	if (ptr==NULL){printf("memory allocation failed\n"); return 1;
	}
	int i;
	for (i=0;i<5;i++){*(ptr+i)=i+1; }
	for (i=0;i<5;i++){
	printf("%d",*(ptr+i) );}	
		
		free(ptr);
	}

