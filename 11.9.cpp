#include <stdio.h>
void funccount(){
	static int count=0;
	count++;
	printf("this function was called %d times\n",count);
}
//testing:
int main(){
	funccount();
	funccount();
	funccount();
}
