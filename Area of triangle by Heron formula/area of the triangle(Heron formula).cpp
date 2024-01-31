#include<stdio.h>
#include<math.h>
 //finding area of the triangle using Heron formula
int main(){
	float a, b, c, u, Alan;
	printf("Enter three sides of triangle:");
	scanf("%f %f %f", &a, &b, &c);
	
	u=(a+b+c)/2;
	
	Alan=sqrt(u*(u-a)*(u-b)*(u-c));
	
	printf("Area of triangle: %.2f", Alan);
	return 0;
}
