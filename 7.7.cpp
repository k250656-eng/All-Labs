#include <stdio.h>
int main (){
    int n,b,c;
printf("number of elements you want to input: ");
scanf("%d", &n);
int a[n]; 
for (int i=0;i<n;i++){
    printf("enter element %d: ",i+1);
    scanf("%d",&a[i]);
}
printf("entered elements:\n");
for (int i=0;i<n;i++){
    printf("%d ",a[i]);
}
printf("\nenter the index of the element you want to modify: ");
scanf("%d",&b);
printf("enter the new element at index %d: ",b);
scanf("%d",&c);

a[b-1]=c;
printf("\nmodified elements: \n");
for (int i=0;i<n;i++){
    printf("%d ",a[i]);
}
}


