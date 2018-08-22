#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(void)
{
	int array[20][59];
	srand((unsigned int)time(0));	
	int count_row,count_col;
	for(count_row=0;count_row<20;count_row++)
	for(count_col=0;count_col<30;count_col++)
		array[count_row][2*count_col]=rand()%10+48;
	for(count_row=0;count_row<20;count_row++)
		for(count_col=0;count_col<30;count_col++)
			array[count_row][2*count_col+1]=' ';
	for(count_row=0;count_row<20;count_row++)
	{
		for(count_col=0;count_col<59;count_col++)
		 printf("%c",array[count_row][count_col]);
	     printf("\n");
	} 
	return 0;
}