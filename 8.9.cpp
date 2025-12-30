#include <stdio.h>
int main (){
	int a[3][3];
	for (int i=0;i<3;i++){
		for (int j=0;j<3;j++){
			printf("enter the value for row %d column %d: ", i+1,j+1);
			scanf("%d",&a[i][j]);
			}}
	
	
	for (int i=0;i<3;i++){
		for (int j=2;j>=0;j--){
			printf(" %d ",a[j][i]);}
			printf("\n");}
	
}

