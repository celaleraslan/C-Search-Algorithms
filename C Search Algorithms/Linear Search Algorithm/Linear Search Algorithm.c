#include <stdio.h>
#include <stdlib.h>

int main()
{
	int N,number,i;
	
	printf("How many numbers will be produced:\n");
	scanf("%d",&N);
	
	int array[N];
	
	srand(time(0));
	printf("Elements of the Array:\n");
	for(i=0;i<N;i++)
	{
		array[i]=rand()%100;
	}
	for(i=0;i<N;i++)
	{
		printf("%d\t",array[i]);
	}
	printf("\nPlease enter the number you are looking for:\n");
	scanf("%d",&number);
	
	for(i=0;i<N;i++)
	{
		if(array[i]==number)
		{
			printf("The number %d is in the %d. row.\n",number,i+1);
			break;
		}
	}
	if(i == N)
	{
		printf("The number %d you are looking for could not be found.\n",number);
	}
	
	return(0);
}
