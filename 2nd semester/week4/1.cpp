#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void selectionSort(int *arr, int size){
	
	int *i, *j, *min;
	
	for(i = arr; i<size+arr - 1; i++)
	{
		min = i;
		
		for(j = i+1; j<size+arr; j++)
		{
			if(*j > *min)
			{
				min = j;
			}
		}
		
		if(min!=i)
		{
			int temp = *i;
			*i = *min;
			*min = temp;
		}
	}
}

int main(){
	
	srand(time(NULL));
	int arr[20];
	
	for(int i = 0;i<20;i++)
	{
		arr[i] = rand() % 100;
	}
	
	printf("Rastgele olusturulmus dizi: ");
	for(int i = 0;i<20;i++)
	{
		printf("%d ",arr[i]);
	}
	
	selectionSort(arr,20);
	
	printf("\nSiralanmis dizi: ");
	for (int i = 0; i<20; i++)
	{
		printf("%d, ",arr[i]);
	}
	return 0;
}
