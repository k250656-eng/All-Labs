#include <stdio.h>
#include <stdlib.h>
int main(){
	int n;
	
	int *ptr=(int*)malloc(5*sizeof(int));
	if (ptr==NULL){printf("memory allocation failed\n"); return 1;
	}
	int i;
	for (i=0;i<5;i++){
		printf("enter element %d: ",i+1);
		scanf("%d", &ptr[i]);
	}
	
printf("before calling free():");
	for (i=0;i<5;i++){
	printf(" %d ",ptr[i]);	
	}
	free(ptr); //call free() once
	free(ptr);//call free() twice
	printf("after calling free() twice");
	for (i=0;i<5;i++){
	printf(" %d ",ptr[i]);	
	}
	
	return 0;}

