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
		scanf("%f",&search_max[count]);		
	}
		for(count=0;count<num;count++)
		{
			printf("%lf ",search_max[count]);
		}

	max=search_array(search_max,num);
	printf("%lf",max);
	return 0;
}
double search_array(double target[],int num)
{
	int i;
	double found;
	found=target[0];              
	for(i=0;i<num;i++)
	{
		target++;
		if(found<target[i])
			found=target[i];
	}
	return found;
}
