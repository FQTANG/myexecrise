#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(void)
{
	int array[1000];
	int print_array[10]={1,2,3,4,5,6,7,8,9};
	int count=0,top,seek;
			srand((unsigned int)time(0));	
	for(count=0;count<100;count++)
	{
		array[count]=rand()%10;
	}
	for(top=0;top<1000;top++)
		for(seek=0;seek<10;seek++)
			if(array[top]==seek)
			{
				print_array[seek]++;
			}
	for(count=0;count<10;count++)
	{
		printf("%d",print_array[count]);
	    printf("\n");
	}	
	return 0;
}