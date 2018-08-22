#include<stdio.h>
int test_function(void);
static int num_of_call=0;
int main(void)
{
	int num=0,i=0;
	scanf("%d",&num);
	for(;i<num;i++)
	{
		test_function();
		printf("%d\n",num_of_call);
	}
	return 0;
}
int test_function(void)
{
	extern int num_of_call;
	num_of_call++;
	return num_of_call;
}