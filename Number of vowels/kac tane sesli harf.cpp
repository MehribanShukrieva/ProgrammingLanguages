#include <stdio.h>
    #include <conio.h>
    int sesli(char cumle[]){
       char sesli[]="aeiou"; //sesli harfler
       int i=0,a,sayac=0;
       while(cumle[i]!='\0'){ //c�mle bitene kadar d�ng� kur
           for(a=0;a<5;a++) //sesli harfleri gez
               if(cumle[i]==sesli[a]){ //c�mledeki bir harf sesli harflere esitse sayaci bir artir
                   sayac++;
                   break;
               }
          i++;
       }
       return sayac; //sayac degerini geri d�nd�r
    }
    main(){
       char cumle[100];
       printf("Cumle Girin: ");
       gets(cumle); //gets ile c�mleyi al
       printf("Cumlede %d sesli harf var",sesli(cumle)); //sonucu ekrana yazdir.
    }
