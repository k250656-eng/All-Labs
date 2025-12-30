#include <stdio.h>
int main (){
	int sum,a,ub=0, deposits=0, wd=0;
	printf("enter the amount of a transaction (positive for deposits, negative for withdrawals) or type 0 to stop: ");
		scanf("%d",&a);
		int ib=5000 ;
		ub=ub+a+5000;
		printf("updated balance is %d\n", ub);
	do{
		printf("enter the amount of a transaction (positive for deposits, negative for withdrawals) or type 0 to stop: ");
		scanf("%d",&a);
		ub=ub+a;
		printf("updated balance is %d\n", ub);
		if (a>=0){
			deposits++;
		}
		else{ wd++;
		}
}
while(a!=0);
printf("final balance after all transactions is %d\n",ub);
printf("number of withdrawals made is %d\n",wd);
printf("number of deposits made is %d\n",deposits);
}

