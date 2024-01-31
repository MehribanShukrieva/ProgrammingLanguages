#include<stdio.h>
int main(){
    float a, b, d;
	int c;
	printf("Iki sayi giriniz(a,b):");
	scanf("%f %f", &a, &b);
	
	printf("Islem numarasini giriniz:\n1:Toplama(+)\n2:Cikarma(-)\n3:Carpma(*)\n4:Bolme(/)\n");
	scanf("%d", &c);
	
	switch(c){
		case 1:
			d=a+b;
			printf("%.1f+%.1f=%.1f", a, b, d);
			break;
		case 2:
			d=a-b;
			printf("%.1f-%.1f=%.1f", a, b, d);
			break;
		case 3:	
			d=a*b;
			printf("%.1f*%.1f=%.1f", a, b, d);
			break;
	    case 4:
	    	d=a/b;
	    	printf("%.1f/%.1f=%.1f", a, b, d);
	    	break;
	    default:
	    	printf("\nbirden dorde kadar sayi gire bilirsiniz\nLutfen baska bir sayi giriniz");
	    	break;
	    }
	return 0;
}
