#include<stdio.h>
int main (){
	int choise;
	while(choise!=-1){
		printf("\n1.Sum\n2.Average\n3.Numbers more than average\n4.Reverse\n5.Min and Max\n6.Sorting from the least to the biggest number")\nPLEASE CHOOSE THE ONE YOU WANT TO KNOW!
        scanf("%d",&choise);
		switch (choise){
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
    	            printf("%d\t", A[i])}}
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
			exit(1);
    			break;}}}
	return 0;
}
