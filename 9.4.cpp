#include <stdio.h>

int findMax(int arr[],int size){
	int max= arr[0];
	
	for (int i=0; i<size; i++){
			
			if (arr[i]>max){ max=arr[i];}
			}
			return max;
			
}


int main (){


	int arr[]={2,3,4,5,6};
	int size=sizeof(arr)/sizeof(arr[0]);
	printf("max=%d",findMax(arr,size));
}

