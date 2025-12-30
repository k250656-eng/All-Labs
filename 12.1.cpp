#include <stdio.h>
#include <stdlib.h>
int main(){
	int n;
	
	int *ptr=(int*)malloc(5*sizeof(int));
	if (ptr==NULL){printf("memory allocation failed\n"); return 1;
	}
	
	for (int i=0;i<5;i++){
		printf("enter element %d: ",i+1);
		scanf("%d", &ptr[i]);
	}
	
	printf("6th element: %d",ptr[5]);
}
