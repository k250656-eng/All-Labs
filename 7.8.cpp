#include <stdio.h>
int main (){
 char a[100];
int i;
int l;
 printf("enter some text: "); 
 fgets(a, sizeof(a), stdin);
    while (a[l] != '\0') {
        l++;
    }
for (i=0;i<l;i++){
    if (a[i]=='a'){
    a[i]='A';}
     if (a[i]=='e'){
    a[i]='E';}
     if (a[i]=='i'){
    a[i]='I';}
     if (a[i]=='o'){
    a[i]='O';}
     if (a[i]=='u'){
    a[i]='U';}
    }
    printf("\nmodified text:\n");
for (i=0;i<l;i++){
    printf("%c",a[i]);
}}

