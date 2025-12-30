#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *f;
    int id1, id2, id3;
    f=fopen("library.txt" , "w");
    if (f==NULL){printf("error, can not open file");
    exit(1);}
    
    printf("enter 3 book IDs: ");
    scanf("%d %d %d", &id1, &id2, &id3);
    fprintf(f,"%d %d %d\n",id1,id2,id3);
    fclose(f);
    
    f=fopen("library.txt" , "r");
    if (f==NULL){printf("error, can not open file");
    exit(1);}
    
    int a,b,c;
    fscanf(f, "%d %d %d", &a, &b,&c);
    printf("book IDs from file are %d %d %d",a,b,c);
    fclose(f);
}
    
    
    
    
    
