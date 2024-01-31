#include <stdio.h>
#include<string.h>
int main(){
	char str1[100], str2[100], str3[200];
	int choice, i, j, together, min, max;
	printf("Bir string dizinizi giriniz:");
	gets(str1);
	printf("Ikinci string dizinizi daha giriniz:");
	gets(str2);
	while(choice!=-1){
		printf("\n1. str1 dizisinin uzunlugunu hesaplamak;");
        printf("\n2. str2 dizisinin uzunlugunu hesaplamak;");
        printf("\n3. str1 ve str2 dizilerini birlestirmek;");
        printf("\n4. str1 dizisindeki en buyuk karakteri bulmak(ASCII tablosuna gore);");
        printf("\n5. str2 dizisindeki en kucuk karakteri bulmak(ASCII tablosuna gore);");
		printf("\nYapmak istediginiz islemi giriniz:");
		scanf("%d", &choice);
		switch(choice){
			case 1:
				for(i=0; str1[i]!='\0'; i++){}
				printf("str1 dizisinin uzunlugu: %d", i);
				break;
		    case 2:
		    	for(i=0; str2[i]!='\0'; i++){}
		    	printf("str2 dizisinin uzunlugu: %d", i);
		    	break;
		    case 3:
		    	for(i=0; str1[i]!='\0'; i++){
		    		str3[i]=str1[i];
				}
				for(j=0; str2[j]!='\0'; j++){
					str3[i+j]=str2[j];
				}
				str3[i+j]='\0';
				printf("\n%s", str3);
		    	break;
			case 4:
			    max=str1[0];
			    for(i=0; str1[i]!='\0'; i++){
			    	if (max<str1[i])
			    	max=str1[i];}
				printf("str1 dizisindeki ASCII tablosuna gore en buyuk karakter: %d", max);
				break;
			case 5:
			    min=str2[0];
				for(i=0; str2[i]!='\0'; i++){
					if (min>str2[i])
					min=str2[i];}	
				printf("str2 dizisindeki ASCII tablosuna gore en kucuk karakter: %d", min);
				break;}
			printf("\nDevam etmek icin bir islem giriniz, cikis icin '-1' tusuna basiniz");
			scanf("%d", &choice);
		
	}
	return 0;
}
