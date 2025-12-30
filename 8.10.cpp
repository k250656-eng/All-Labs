#include <stdio.h>
int main (){
	int n,i,j;
	int a=1;
	printf("enter number of rows: ");
	scanf("%d",&n);
	
	for (i=0;i<n;i++){
		for (j=0;j<=n-i-1;j++){
			printf(" ");}
			
			a=1;
			
			for (int j=0;j<=i;j++){
				printf(" %d",a);
				a=a*(i-j) / (j+1);}
				
				printf("\n");
				
			}

		
}
