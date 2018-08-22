#include<stdio.h>
double pow1(double n,int x);
int main(void)
{
	double i,i_1;
	int n;
	scanf("%lf",&i);
	scanf("%d",&n);
	i_1=pow1(i,n);
	printf("%.0f \n",i_1);
	return 0;
}
double pow1(double n,int x)
{
    int p;
	double y;
	p=x;
	if(n!=0)
	{
    if(p>0)
	{
		p--;
		y=n*pow1(n,p);
	} 
    else
	{
		if(p<0)
	{
		y*=1/n;
		p++;
		pow1(y,p);
	}
	else 
	}
	}
	else 
	{
		if(x==0)
			printf("worng input\n");
			else y=0;
	}
	return y;
}