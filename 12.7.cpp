#include<stdio.h>
#include<stdlib.h>
int main(){
    int*arr=(int*)malloc(5*sizeof(int));
    int*arr2=(int*)realloc(NULL,10*sizeof(int));
    if(arr2!=NULL) printf("Memory allocated with realloc(NULL)\n");
    free(arr);
    free(arr2);
    return 0;
}

