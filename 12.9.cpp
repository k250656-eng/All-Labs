#include<stdio.h>
#include<stdlib.h>
int main(){
    int n;
    printf("Enter number of integers: ");
    scanf("%d",&n);
    int*arr=(int*)malloc(n);
    printf("Enter %d numbers: ",n);
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("Array elements: ");
    for(int i=0;i<n;i++) printf("%d ",arr[i]);
    printf("\n");
    return 0;
}

