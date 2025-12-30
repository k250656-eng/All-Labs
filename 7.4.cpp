#include <stdio.h>
int main (){
	int a[10]={2,1,4,3,6,5,8,9,1,0};
	float median;
	for (int i=0;i<10;i++){
		for (int j=i+1;j<10;j++){ 
			if (a[i]>a[j]){
				int temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}
	

	int l = sizeof(a) / sizeof(a[0]);
	if (l%2==0){
		median= (a[l/2]+a[(l/2)-1])/2.0;
	}
	else {
		median=a[l/2];
	}
	
	for (int i=0;i<10;i++){
		printf("%d",a[i]);
	}
	printf("\nmedian is %.2f", median);
}
