#include <stdio.h>

int main(){ 
struct books{
	char title[20]; char author[20]; int count; float price;
};
	
	
	struct books c[3];
	for (int i=0;i<3;i++){
		printf("enter title for book %d: ",i+1);
		scanf("%s", &c[i].title);
		printf("enter author for book %d: ",i+1);
		scanf("%s", &c[i].author);
		printf("enter page count for book %d: ",i+1);
		scanf("%d", &c[i].count);
		printf("enter price for book %d: ",i+1);
		scanf("%f", &c[i].price); }
		
	printf("title\tauthor\tpages\tprice\n");
	for (int i=0;i<3;i++){
		printf("%s\t%s\t%d\t%f\n",c[i].title,c[i].author,c[i].count,c[i].price );
		
	}
}
		

