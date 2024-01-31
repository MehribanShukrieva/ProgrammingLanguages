#include<stdio.h>
#include<math.h>
int main(){
	int a, b, c;
	float d, x1, x2;
	
	printf("3 katsayi giriniz(a,b,c):");
	scanf("%d %d %d", &a, &b, &c);
	d=b*b-4*a*c;
	if (d==0){
		x1=-b/(2*a);
		printf("x1 and x2:""%f\n",x1);}
	else if (d>0){
		x1=-b+sqrt(d)/2*a;
		x2=-b-sqrt(d)/2*a;
		printf("x1:""%f\n",x1);
		printf("x2:""%f\n",x2);}
	else if (d<0){
		printf("\nSanal kokler");
	}

	return 0;
}
