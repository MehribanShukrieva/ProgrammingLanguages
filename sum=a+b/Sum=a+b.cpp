#include<stdio.h>

 int main() {
	int a,b,sum;
	// Take two numbers from the keyboard
	printf("Enter two numbers:");
	scanf("%d %d", &a,&b);
	
	sum=a+b;
	// Display the sum of these two numbers
	printf("sum: %d",sum);
	return 0;
}
