#include <stdio.h>
#include <stdlib.h>

int main()
{
	/*The Binary Search Algorithm searches by dividing the array in half instead of searching one by one to find the desired element in the array,
	 which does not force the memory.
	*/
	int N,i,j,temporary,first,last,middle,wanted;
	
	printf("Please enter how many numbers will be generated:\n");
	scanf("%d",&N);
	
	int array[N];
	
	srand(time(0));
	printf("Elements of the Array:\n");
	for(i=0;i<N;i++)
	{
		array[i] = rand()%100;
	}
	for(i=0;i<N;i++)
	{
		printf("%d\t",array[i]);
	}
	for(i=0;i<N-1;i++)
	{
		for(j=0;j<N-1-i;j++)
		{
			if(array[j]>array[j+1])
			{
				temporary=array[j];
				array[j]=array[j+1];
				array[j+1]=temporary;
			}
		}
	}
	printf("\nSorted Array Elements:\n");
	for(i=0;i<N;i++)
	{
		printf("%d\t",array[i]);
	}
	
	printf("\nEnter the value you want to find:\n");
	scanf("%d",&wanted);
	
	first=0;
	last=N-1;
	middle=(first+last)/2;
	
	while(first<=last)
	{
		if(array[middle]<wanted)
		{
			first=middle+1;
		}
		else if(array[middle]==wanted)
		{
			printf("Number %d found in %d. place.\n",wanted,middle+1);
			break;
		}
		else
		{
			last=middle-1;
		}
		middle=(first+last)/2;
	}
	if(first>last)
	{
		printf("Number %d could not be found.\n",wanted);
	}	
	return(0);
}
