#include <stdio.h>

int displayMatrix(int arr[2][3]){
	
	for (int i=0; i<2; i++){
		for (int j=0;j<3;j++){printf(" %d ",arr[i][j]);}
		printf("\n");}
	
}

int calculateSum(int arr[2][3]){
int sumofarray=0;	
	for (int i=0; i<2; i++){
		for (int j=0;j<3;j++){
		
		sumofarray= arr[i][j]+ sumofarray;
	}}	
		return sumofarray;	
}

float calculateAverage(int arr[2][3]){	
float average=0;
float sumofarray=0;
	for (int i=0; i<2; i++){
		for (int j=0;j<3;j++){
			
		float sumofarray= arr[i][j]+ sumofarray;
		average= sumofarray/6.0; }}
		return average;
	
}

int findMax(int arr[2][3]){
	int max= arr[0][0];
	for (int i=0; i<2; i++){
		for (int j=0;j<3;j++){
			
			if (arr[i][j]>max){ max=arr[i][j];}
			}}
			return max;
			
}


int main (){
	int arr[2][3]= {{1,2,6},{3,4,5}};
	displayMatrix(arr);
	printf("\nsum of all matrix elements is %d",calculateSum(arr));
	printf("\naverage of all matrix elements is %.2f",calculateAverage(arr));
	printf("\nmaximum value in matrix is %d",findMax(arr));
		
}
			
		
		



