#include <stdio.h>
/*
The 10-element integer array will be sent to a function by entering values from the keyboard. 
Write a function that finds the "biggest first two numbers" in the array and prints it to the screen. 
*/
void array(int str[10])
{
	int i, max, max2;
	max=str[0];
	for (i=0; i<10; i++){
		if(max < str[i])
			max=str[i];
}
	max2=max;
	if(max!=str[0])
		max=str[0];
		else
		max=str[1];
		for(i=0; i<10; i++){
			if(max<str[i]&&str[i]!=max2)
			max=str[i];
		}
	printf("%d and %d", max, max2);
}
int main(){
	int str[10], i;
	printf("Enter 10-element integer array:");
	for (i=1; i<=10; i++){
	scanf("%d", &str[i]);
}
	array(str);
	return 0;
}
