#include <stdio.h>
int main (){
int a[5]={1,2,4,3,5};
int b[5]={6,8,7,9,1};
int j=0;
int c[10];
for (int i=0;i<10;i++){
    if (i<5){
c[i]=a[i];
    }
    else {
         c[i]=b[j];
    j++;
    }
}
for (int i=0;i<10;i++){
    printf("%d ",c[i]);
}
}

