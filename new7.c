#include<stdio.h>
void copy_arr(double arr[5],double sou_arr[5],int num);
void copy_ptr(double ptr[5],double sou_arr[5],int num);
void copy_ptrs(double ptrs[5],double sou_arr[5],double *sou_arr_end);
int main(void)
{  
    double source[5];
	double target1[5]={0};
	double target2[5]={0};
	double target3[5]={0};
	int count;
	for(count=0;count<5;count++)
	{
		scanf("%lf",&source[count]);
	}
	copy_arr(target1,source,5);
	copy_ptr(target2,source,5);
	copy_ptrs(target2,source,source+5);	
 return 0;
}
void copy_arr(double arr[5],double sou_arr[5],int num)
{
	int i;
	for(i=0;i<num;i++)
	{
		arr[i]=sou_arr[i];
	}
	for(i=0;i<num;i++)
	{
		printf("%lf ",arr[i]);
	}
	printf("\n");
	return;
}
void copy_ptr(double * ptr,double * sou_arr,int num)
{
	int i_1;	
	for(i_1=0;i_1<num;i_1++)
	{
		*ptr=*sou_arr;
		printf("%lf ",*ptr);
		ptr++;
		sou_arr++;
	}
			printf("\n");
	return;
}
void copy_ptrs(double ptrs[5],double sou_arr[5],double * sou_arr_end)
{
	
	for(;sou_arr<sou_arr_end;sou_arr++)
	{
		*ptrs=*sou_arr;
	    printf("%lf ",*ptrs);
		ptrs++;		
	}
			printf("\n");
	return;
}

