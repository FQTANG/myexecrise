#include<stdio.h>
void rank3(double * input_1,double * input_2,double * input_3);
int main(void)
{
	double i_1,i_2,i_3;
	while(scanf("%lf %lf %lf",&i_1,&i_2,&i_3)==3)
	{
		rank3(&i_1,&i_2,&i_3);
		printf("%.1f,%.1f,%.1f",i_1,i_2,i_3);
	    scanf("%lf %lf %lf",&i_1,&i_2,&i_3);
	}
return 0;
}
void rank3(double * input_1,double * input_2,double * input_3)
{
	double i_12,i_13,i_23,sup;
	i_12=*input_1-*input_2;
	i_13=*input_1-*input_3;
	i_23=*input_2-*input_3;
	if(i_12>0)
	{
		sup=*input_1;              //change 1&2
		*input_1=*input_2;
		*input_2=sup;
		if(i_13>0)
		{
		sup=*input_3;              //change 1&3
		*input_3=*input_2;
		*input_2=sup;
	    if(i_23>0)
		{                          //change 2&3
		sup=*input_1;
		*input_1=*input_2;
		*input_2=sup;	
		} 			
		}
	}
	else
	{
		if(i_23>0)                  //change 2&3
		{
		sup=*input_3;
		*input_3=*input_2;
		*input_2=sup;	
		}
	}

	
		return ;	
}
