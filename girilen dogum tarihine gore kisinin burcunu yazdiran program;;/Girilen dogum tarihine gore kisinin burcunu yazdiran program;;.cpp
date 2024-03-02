/*
girilen dogum tarihine gore kisinin burcunu yazdiran program;;
*/
#include<stdio.h>
int main(){
	int mm, dd;
	printf("Dogum tarihinizi giriniz: \nOnce dogum gunu, sonra ay\nOrnek: 24    1\n");
	scanf("%d %d", &dd, &mm);
	if ((mm==1 && dd>=22)||(mm==2 && dd<=19)){
		printf("KOVA");
		}
		else if ((mm==2 && dd>=20) || (mm==3 && dd<=20)){
			printf("BALIK");
	}
		else if ((mm==3 && dd>=21) || (mm==4 && dd<=20)){
			printf("KOC");
	}
		else if ((mm==4 && dd>=21) || (mm==5 && dd<=21)){
			printf("BOGA");
	}
		else if ((mm==5 && dd>=22) || (mm==6 && dd<=22)){
			printf("IKIZLER");
	}
		else if ((mm==6 && dd>=23) || (mm==7 && dd<=22)){
			printf("YENGEC");
	}
		else if ((mm==7 && dd>=23) || (mm==8 && dd<=22)){
			printf("ASLAN");
	}		
		else if ((mm==8 && dd>=23) || (mm==9 && dd<=22)){
			printf("BASAK");
	}
		else if ((mm==9 && dd>=23) || (mm==10 && dd<=22)){
			printf("TERAZI");
	}
		else if ((mm==10 && dd>=23) || (mm==11 && dd<=21)){
			printf("AKREP");
	}
		else if((mm==11 && dd>=22) || (mm==12 && dd<=21)){
			printf("YAY");
	}
		else if((mm==12 && dd>=22) || (mm==1 && dd<=21)){
			printf("OGLAK");
	}
	return 0;
}
