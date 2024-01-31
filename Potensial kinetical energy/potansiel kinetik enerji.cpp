#include<stdio.h>
#include<math.h>

int main (){
	float m, v, h, Ep, Ek;
	printf("Maddenin kutlesini (m) giriniz:");
	scanf("%f", &m);
	
	printf("Maddenin hizini (v) giriniz:");
	scanf("%f", &v);
	
	printf("Maddenin yerden yuksekligini (h) giriniz:");
	scanf("%f", &h);
	
	Ep=m*9.8*h;
	Ek=(m*v*v)/2; 
	printf("\nMaddenin potansiyel enerjisi(Ep):%.2f",Ep);
	printf("\nMaddenin kinetik enerjisi(Ek):%.2f",Ek);
	return 0;
}
