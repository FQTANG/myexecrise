#include<stdio.h>
double search_array(double * target,int num);
int main(void)
{
	int num,count;
	double max;
	scanf("%d",&num);
	double search_max[num];
	for(count=0;count<num;count++)
	{
		scanf("%lf",&search_max[count]);		
	}
		for(count=0;count<num;count++)
		{
			printf("%lf ",search_max[count]);
		}

	max=search_array(search_max,num);
	printf("%.0lf",max);
	return 0;
}
double search_array(double target[],int num)
{
	int i;
	double Max,min,found;
	max=target[0];
    min=target[0];	
	for(i=0;i<num;i++)
	{
		if(max<target[i])
			max=target[i];
	}
	
	for(i=0;i<num;i++)
	{
		if(min>target[i])
		   min=target[i];
	}
	found=max-min;
	return found;
}
