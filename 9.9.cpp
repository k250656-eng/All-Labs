#include <stdio.h>
float add(float a,float b){
	return a+b;
}
float multiply(float a,float b){
	return a*b;
}
float subtract(float a,float b){
	return a-b;
}
float divide(float a,float b){
	return a/b;
}
int main (){
	int ans;
	float x,y,z,result;
	float (*operation)(float,float);
	printf("1.add\n2.subtract\n3.multiply\n4.divide\nselect option: ");
	scanf("%d",&ans);
	printf("enter two numbers: ");
	scanf("%f %f",&x,&y);
	switch(ans){
		case 1:
			operation = add;
			break;
			case 2:
			operation = subtract;
			break;
			case 3:
			operation = multiply;
			break;
			case 4:
			operation = divide;
			break;
			default:
				printf("invalid choice.");
			
	}
if(operation != NULL) {
        result = operation(x, y);
        printf("result = %.2f\n", result);
    } else {
        printf("invalid choice so no operation performed.\n");
    }
}
