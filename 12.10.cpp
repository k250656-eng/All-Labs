#include<stdio.h>
#include<stdlib.h>
int main(){
    int*n=(int*)malloc(5*sizeof(int));
    printf("Enter 5 numbers: ");
    for(int i=0;i<5;i++) {scanf("%d",&n[i]);}
    int*n2=(int*)realloc(n,10*sizeof(int));
    free(n);
    printf("Array after realloc:\n");
    for(int i=0;i<10;i++) {printf("%d ",n2[i]);}
    printf("\n");
    free(n2);
    return 0;
}


