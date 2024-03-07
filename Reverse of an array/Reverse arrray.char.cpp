#include<stdio.h>
int SayiKontrol (int n){
	int basamak= n%10;
	n/=10;
	while(n!=0){ if (basamak!=n%10){
		return 0;
	} n/=10 ;}
	return 1;
}
int main(){
	int i; 
	int A [10]= {233, 45, 777, 81, 999999, 36, 90, 88, 11, 61};
	for(i=0; i<10; i++){
		if (SayiKontrol(A[i])==1) { printf("\n%d ayni", A[i]);}	
		else { printf("\n%d farkli", A[i]);}
	}
	return 0;
}
