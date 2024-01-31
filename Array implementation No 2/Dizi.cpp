#include <stdio.h>

int main(){
	int n, sum=0, i, j, k, min, max;
    float average=0.0;
    int A[100];
    printf("Dizi eleman sayisini giriniz:");
    scanf("%d", &n);
    for(i=0; i<n; i++){
    	printf("\nDizinin %d elemanini giriniz:", i+1);
	    scanf("%d", &A[i]);
    }
    for(i=0; i<n; i++){
	    sum+=A[i];
    }
    printf("\nDizi elemanlarinin toplami:%d", sum);
    
    average=(float)sum/n;
    printf("\nDizinin ortalamasi:%.2f", average);
    
	printf("\nOrtalamadan buyuk olan dizi elemanlari sirasiyla:");
    for(i=0; i<n; i++){
    	if(A[i]>average){
    	printf("%d\t", A[i]);
    }
	}
	int revA[n];
	printf("\ndizinin tersten yazilmis hali:\t");
	for(i=n-1; i>=0; i--){
		revA[i]=A[i];
		printf("%d\t",revA[i]);	
	}
	
	min=A[0];
	max=A[0];
	for(i=0; i<n; i++){
		if (min>A[i])
		    min=A[i];
		if (max<A[i])
		    max=A[i];
	}
	printf("\nDizinin maximum degeri:%d",max);
	printf("\nDizinin minimum degeri:%d",min);
	printf("\nDizinin kucukten buyuge siralanmasi:");
	for(i=0; i<n; i++){
		for(j=i+1; j<n; j++){
			if(A[j]<A[i]){
				k=A[i];
                A[i]=A[j];
                A[j]=k;
			}
		}
	}
	for(i=0; i<n; i++){
        printf("%d\t",A[i]);
    }
    int choice;
	while(choice!=-1){
		printf("\n1.Toplam\n2.Ortalama\n3.Ortalamadan buyuk olan elemanlar\n4.Dizinin tersten yazilmis hali\n5.Min and Max\n6.Dizinin elemanlarinin kucukten buyuge siralanmasi...");
		printf("\nWhats your choice?");
        scanf("%d",&choice);
		switch (choice){
			case 1:
				printf("\nDizi elemanlarinin toplami:%d", sum);
				break;
			case 2:
				printf("\nDizinin ortalamasi:%.2f", average);
				break;
			case 3:
				printf("\nOrtalamadan buyuk olan dizi elemanlari sirasiyla:");
                for(i=0; i<n; i++){
    	            if(A[i]>average){
    	            printf("%d\t", A[i]);}}
    	            break;
			case 4:
				printf("\ndizinin tersten yazilmis hali:\t");
	            for(i=n-1; i>=0; i--){
	            	revA[i]=A[i];
	              	printf("%d\t",revA[i]);	}
	              	break;
			case 5:
				printf("\nDizinin maximum degeri:%d",max);
	            printf("\nDizinin minimum degeri:%d",min);
	            break;
		    case 6:
		    	printf("\nDizinin kucukten buyuge siralanmasi:");
	            for(i=0; i<n; i++){
		            for(j=i+1; j<n; j++){
			            if(A[j]<A[i]){
			            	k=A[i];
                            A[i]=A[j];
                            A[j]=k;	}}}
	            for(i=0; i<n; i++){
                    printf("%d\t",A[i]);}
                break;
		    default:
			    return 0;
    			break;} } 
    return 0;
}
