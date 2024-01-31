#include <stdio.h>
    #include <conio.h>
    int sesli(char cumle[]){
       char sesli[]="aeiou"; //sesli harfler
       int i=0,a,sayac=0;
       while(cumle[i]!='\0'){ //cümle bitene kadar döngü kur
           for(a=0;a<5;a++) //sesli harfleri gez
               if(cumle[i]==sesli[a]){ //cümledeki bir harf sesli harflere esitse sayaci bir artir
                   sayac++;
                   break;
               }
          i++;
       }
       return sayac; //sayac degerini geri döndür
    }
    main(){
       char cumle[100];
       printf("Cumle Girin: ");
       gets(cumle); //gets ile cümleyi al
       printf("Cumlede %d sesli harf var",sesli(cumle)); //sonucu ekrana yazdir.
    }
