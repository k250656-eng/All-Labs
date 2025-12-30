#include<stdio.h>
#include<stdlib.h>
int main(){
    int*arr=(int*)malloc(10*sizeof(int));
    printf("Enter 10 numbers:\n");
    for(int i=0;i<10;i++){
        scanf("%d",&arr[i]);
    }
    printf("Array elements:\n");
    for(int i=0;i<10;i++) printf("%d ",arr[i]);
    printf("\n");
    return 0;
}

