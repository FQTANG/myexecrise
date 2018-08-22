#include "mylibrary.h"
#define med_aver(x_1,x_2) 2/(1/x_1+1/x_2)

int main(void)
{
	double x_1,x_2;
	while(scanf("%lf %lf",&x_1,&x_2)==2)
	{
		double ans;
		ans=med_aver(x_1,x_2);
		printf("%.2f/n",ans);
	}
	return 0;
}