/*
The information of 10 students and 3 courses are kept in an array. Write the function that 
finds the average for each lesson
*/
#include<stdio.h>
#define nstudents 10
#define ncourses 3

int main(){
	int i, j;
	int arr[10][3]={{10, 15, 20}, {25, 30, 35}, {40, 45, 50}, {55, 60, 65}, {70, 75, 80}, {85, 90, 95},{100, 97, 94}, {91, 88, 85}, {82, 79, 76}, {73, 70, 67}};
	for (i=0; i<10; i++){
		for (j=0; j<3; j++){
			printf("%d", arr[i][j]);
			printf("\t");	
		}
		printf("\n");
	}
	int toplam3=0; int toplam2=0; int toplam=0;	
	for (i=0; i<10; i++){
		toplam+=arr[i][0];
}
	printf("%d\t", toplam);
	for (i=0; i<10; i++){
			toplam2+=arr[i][1];
}
	printf("%d\t", toplam2);
	for (i=0; i<10; i++){
			toplam3+=arr[i][2];
}
	printf("%d\t", toplam3);
	float ort=0.0, ort2=0.0, ort3=0.0;
	ort=(float)toplam/3;
	ort2=(float)toplam2/3;
	ort3=(float)toplam3/3;
	printf("\n");
	printf("%.2f\t %.2f\t %.2f\t", ort, ort2, ort3);
	return 0;
}
