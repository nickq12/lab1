#include "stdafx.h"
#include <malloc.h>
#include <stdio.h>
#include <conio.h>
#include "stdlib.h"
#include "time.h"

void main() {
	srand(time(0));

	int i, j, sum, n;
	
	scanf("%d", &n);
	int** arr = (int**)malloc(sizeof(int*) * n);
	int* SummArray = (int*)malloc(sizeof(int)*n);
	for (i=0;i<n;i++){
		arr[i] = (int*)malloc(sizeof(int) * n);
		sum=0;
		for (j=0;j<n;j++){
			arr[i][j]=rand()%100;
			printf("%4d", arr[i][j]);
			sum += arr[i][j];
			SummArray[i]=sum;
		}
		printf("\t|  %d\n", SummArray[i]);
	}
	for (j=0;j<n;j++){
		sum=0;
		for (i=0;i<n;i++){
			sum += arr[i][j];
			SummArray[j]=sum;
		}
		printf("\t|  %d\n", SummArray[j]);
	}
	_getch();
}