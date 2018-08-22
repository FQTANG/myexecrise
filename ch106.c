#include<stdio.h>
void copy_arr(int row,int col,double arr[row][col]);
void sum_arr(int row,int col,double arr[row][col],double arr_1[row][col]);
int main(void)
{
	int row;
	int col;
	scanf("%d %d",&row,&col);
	double arr[row][col],arr_1[row][col];
	int count_row,count_col;
	for(count_row=0;count_row<row;count_row++)
	{
		for(count_col=0;count_col<col;count_col++)
		{
			scanf("%lf",&arr[count_row][count_col]);
		}
	}
	for(count_row=0;count_row<row;count_row++)
	{
		for(count_col=0;count_col<col;count_col++)
		{
			scanf("%lf",&arr_1[count_row][count_col]);
		}
	}
	copy_arr(row,col,arr);
	sum_arr(row,col,arr,arr_1);
	return 0;
}
void copy_arr(int row,int col,double arr[row][col])
{
	double arr_target[row][col];
	int count_row,count_col;

	for(count_row=0;count_row<row;count_row++)
	{
		for(count_col=0;count_col<col;count_col++)
		{
			arr_target[count_row][count_col]=arr[count_row][count_col];
		}
	}

	for(count_row=0;count_row<row;count_row++)
	{
		for(count_col=0;count_col<col;count_col++)
		{
			printf("%.1f ",arr_target[count_row][count_col]);
		}
		printf("\n");
	}
	return;
}
void sum_arr(int row,int col,double arr[row][col],double arr_1[row][col])
{
	double answer[row][col];
		int count_row,count_col;
	for(count_row=0;count_row<row;count_row++)
	{
		for(count_col=0;count_col<col;count_col++)
		{
			answer[count_row][count_col]=arr[count_row][count_col]+arr_1[count_row][count_col];
		}
	}
	for(count_row=0;count_row<row;count_row++)
	{
		for(count_col=0;count_col<col;count_col++)
		{
			printf("%.1f ",answer[count_row][count_col]);
		}
		printf("\n");
	}
	return;
	return;
}