#include<stdio.h>

int main(){
	int i, n, t1, t2, t3;
	printf("bir 'n' sayisi giriniz:");
	scanf("%d",&n);
	t1=0;
	t2=0;
	t3=0;
	for(i=1; i<=n; i++){
		t1 += i;}
	printf("n'e kadar butun tam sayilarin toplami:""%d\n",t1);

	for(i=1; i<=n; i+=2){
        t2 += i;}
	    printf("n'e kadar butun tek sayilarin toplami:""%d\n",t2);
	
	for(i=2; i<=n; i+=2){
        t3 += i;}
	    printf("n'e kadar butun cift sayilarin toplami:""%d\n",t3);
	
	return 0;
}
