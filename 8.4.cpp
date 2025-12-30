#include <stdio.h>
int main(){
	int a[3][3];
	int c=0;
	int d=0;
	for (int i=0;i<3;i++){
	for (int j=0;j<3;j++){
		printf("enter value for row %d and column %d: ",i+1,j+1);
		scanf("%d", &a[i][j]);
			}}
		
		
	for (int i=0;i<3;i++){
	for (int j=0;j<3;j++){	
	
	
		if (i<j){
			if (a[i][j]!=0)
			c=1;
		}
		
		if (i>j){
			if (a[i][j]!=0)
			d=1;}

}}

if (c!=1){printf("\nthis is a upper triangular matrix");}
if (d!=1){printf("\nthis is an lower triangular matrix");}
if (c==1 && d==1){printf("this is neither lower nor upper triangular matrix");}
}

