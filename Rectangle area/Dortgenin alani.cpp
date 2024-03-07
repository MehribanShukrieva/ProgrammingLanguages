#include<stdio.h>
#include<cmath>

int main (){
	float e, f, pi, aci, Alan;
	
	printf("birinci kosegeni(e) giriniz:");
	scanf("%f",&e);
	
	printf("ikinci kosegeni(f) giriniz:");
	scanf("%f",&f);
	
	printf("arasindaki aciyi(aci) giriniz:");
	scanf("%f",&aci);
	
	pi=3.14;
	Alan=e*f*sin(aci*pi/180)/2;
	
	printf("Girilen dortgenin alani:%.3f", Alan);
	
	return 0;
}
