#include <stdio.h>

int main(){
	int z;
	float a,b,result;
	printf("Options:\n");
	printf("1.Addition\n");
	printf("2.Subtraction\n");
	printf("3.Division\n");
	printf("4.Multiplication\n");
	printf("Which action do you want to do(write only numbers!) : ");
	scanf("%d",&z);
	printf("First Count:");
	scanf("%f",&a);
	printf("Second Count:");
	scanf("%f",&b);
	if(z==1){
		result=a+b;
		printf("%f",result);
	}
	else if(z==2){
		result=a-b;
		printf("%f",result);
	}
	else if(z==3){
		result=a/b;
		printf("%f",result);
	}
	else if(z==4){
		result=a*b;
		printf("%f",result);
	}
	else{
		printf("Wrong Command!");
	}
	return 0;
}