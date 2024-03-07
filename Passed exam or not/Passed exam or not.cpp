#include<stdio.h>

int main (){
	float visa, final, passing_grade;
	char ID[20];
	
	printf("Enter your Student ID:");
	scanf("%s",&ID);
	
	printf("Enter your visa score:");
	scanf("%f",&visa);
	
	printf("Enter your final score:");
	scanf("%f",&final);
	
	passing_grade=visa*0.4+final*0.6;
	
	if(passing_grade>=60){
		
		printf("\n%s",ID);
		printf("\nyou passed exam successfully");
		
	}
	else{
		
		printf("\n%s",ID);
		printf("\nyou could not pass exam successfully");
		
	}
	
	return 0;
}
