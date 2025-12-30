#include <stdio.h>
	int main (){
		
		int a[5];
		for (int i=0;i<5;i++){
			printf("enter value %d: ", i+1);
			scanf("%d",&a[i]);
		}
		
		int *p=a;
		
		int n=5;
		for (int i=0;i<5;i++){
			printf("address of a[%d] is %d, value is %d\n", i, (p+i),*(p+i));
		}
		
		
	}

