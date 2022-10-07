#include "stdafx.h"
#include "stdlib.h"
#include "time.h"

int main()
{
	srand(time(NULL));

	int Arr[10];
	int min,max,i,r;

for (i=0;i<10;i++){
	Arr[i] = rand();
	printf("%d ",Arr[i]);
}
	min = Arr[0];
	max = Arr[0];


for (i=0;i<10;i++){
	if (Arr[i]>max)
		max=Arr[i];
	if (Arr[i]<min)
		min=Arr[i];
}

r=max-min;

printf("\n%d %d",min,max);
printf("\n%d",r);
getchar();
}
