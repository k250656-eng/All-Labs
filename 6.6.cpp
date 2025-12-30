#include <stdio.h>
int main (){
	int n,a,sum, avg, count=0, above70=0, fiftytoseventy=0, below50=0;
	do{
		printf("enter a grade (1-100): ");
		scanf("%d",&n);
		printf("enter any digit to continue or -1 to stop: ");
	scanf("%d",&a);
	printf("the entered grade is %d\n",n);
	sum=sum+n;
	count++;
	if (n>70) { above70++;
	}
	if (n>50 && n <70) { fiftytoseventy++;
	}
	if (n<50 ) { below50++;
	}
	
}
while(a!=-1);
avg=sum/count;
printf("number of grades entered that are above 70 is %d\n",above70);
printf("number of grades entered that are between 50 and 70 is %d\n",fiftytoseventy);
printf("number of grades entered that are below 50 is %d\n",below50);

}

