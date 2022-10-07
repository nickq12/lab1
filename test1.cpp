#include "stdafx.h"
#include <malloc.h>
#include <stdio.h>
#include <conio.h>
#include "stdlib.h"
#include "time.h"

void main() {
	int n, *Mas, i;
	scanf("%d", &n);
	Mas=(int*)malloc(n*sizeof(int));
	for (i=0;i<n;i++){
		Mas[i]=rand()%201-100;
		printf("\n%d", Mas[i]);
	}
getchar();
getchar();
}