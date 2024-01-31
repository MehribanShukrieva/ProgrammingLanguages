#include<stdio.h>
int main(){
	int n, i, sum;
	printf("Enter a number:");
	scanf("%d", &n);
	i=1;
	sum=0;
	while(i<n){
		if (n%i==0)
		sum=sum+i;
		i++;
	}
	if(sum==n){
		printf("Entered number is perfect");}
	else {
		printf("Entered number is not perfect");}
	return 0;
}
