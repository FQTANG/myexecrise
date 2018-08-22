#include <stdio.h>
#include <time.h>

double time_wait(double t,double wait);

int main(void)
{
	double t_1=0,t_2=0;
	scanf("%lf %lf",&t_1,&t_2);
	double t_0=0;
	double temp=0;
	double s_1=0;
	double s_2=0;
	temp=time_wait(t_0,t_1);
	s_1=5*temp*temp;
	printf("First displcaement is %.2f\n",s_1);
	temp=time_wait(t_0,t_2);
    s_2=5*temp*temp;
	printf("First displcaement is %.2f\n",s_2);
	return 0;
}
double time_wait(double t,double wait)
{
	t=(double) time(0);
	double t_1=0;
	double temp;
		while(1)
	{
		t_1=(double)time(0);
      	if((t_1-t)>wait)
			break;
	}
	temp=t_1;
	return temp;
}