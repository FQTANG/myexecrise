#include<stdio.h>
void copy_arr(int row,int col,double arr[row][col]);
void sum_arr(int row,int col,double arr[row][col],double arr_1[row][col]);
void arr_average(int row,int col,double arr[row][col]);
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
	arr_average(row,col,arr);
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
void arr_average(int row,int col,double arr[row][col])
{
	int count_row,count_col;
	double row_aver[row];
	double all_sum,all_aver;
	all_aver=0;
	all_sum=0;
			for(count_row=0;count_row<row;count_row++)
			{
				row_aver[count_row]=0;
			}
		for(count_row=0;count_row<row;count_row++)
	{
		for(count_col=0;count_col<col;count_col++)
		{
			all_sum+=arr[count_row][count_col];
		}
	}
	all_aver=all_sum/(row*col);
	printf("%.2f\n",all_aver);
		for(count_row=0;count_row<row;count_row++)
	{
		for(count_col=0;count_col<col;count_col++)
		{
			row_aver[count_row]+=arr[count_row][count_col];
		}
	}
	for(count_row=0;count_row<row;count_row++)
	{
		printf("%.2f ",row_aver[count_row]/col);
	}
	printf("\n");
	return;
}