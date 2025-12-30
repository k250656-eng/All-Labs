#include <stdio.h>
int main (){
 
int msum=0,ssum=0;
int n;
printf("how many rows or columns do you want in matrice: ");
scanf("%d",&n);
int a[n][n];
 
for (int i=0;i<n;i++){
            	for (int j=0;j<n;j++){
                            	printf("enter value for %d row, %d column for 1st matrice: ", i+1,j+1);
                            	scanf("%d", &a[i][j]);}}
 
for (int i=0;i<n;i++){
            	for (int j=0;j<n;j++){
                            	if (i==j){
                                            	msum=msum+a[i][j];
                            	}
                            	if (i+j==n-1){
                                            	ssum=ssum+a[i][j];
                            	}
}}
 
 
printf("\nsum of main diagonal is %d", msum);
printf("\nsum of secondary diagonal is %d", ssum);
printf("\nsum of both diagonals is %d", ssum+msum);
 
}

