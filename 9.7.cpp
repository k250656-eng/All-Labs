#include <stdio.h>
int main (){
	int *ptr=NULL;
	if (ptr==NULL){
		printf("this pointer does not refer to any valid memory location.");
	}
	else {
		printf("this pointer does refer to a valid memory location.");
	}
}
