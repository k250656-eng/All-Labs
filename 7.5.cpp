#include <stdio.h>
int main (){
	int a[10];
	int sum=0;
	int temp;
	for (int i=0;i<10;i++){
		printf("enter grade of student %d: ",i+1);
		scanf("%d",&a[i]);
	}


	for (int i=0;i<10;i++){
		printf("\ngrade of student %d is: %d",i+1, a[i]);
		sum=sum+a[i];
	}


int l = sizeof(a) / sizeof(a[0]);
float mean= sum/l;

for (int i=0; i<9; i++){
	for (int j=i+1;j<10;j++){
		if (a[i]>a[j]){
			temp=a[i];
			a[i]=a[j];
			a[j]=temp;
		}
		
	}
}
printf("\nhighest grade is %d",a[l-1]);
printf("\nlowest grade is %d",a[0]);

}

