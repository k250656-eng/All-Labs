#include <stdio.h>
int main (){
	int a=1;
	float b=2.5;
	char c='c';
	
	void *ptr;
	ptr=&a;
	printf("integer = %d\n", *(int*)ptr);
	ptr=&b;
	printf("float = %.2f\n", *(float*)ptr);
	ptr=&c;
	printf("character = %c\n", *(char*)ptr);
}
