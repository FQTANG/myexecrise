#include<stdio.h>
#include"pe12-2a.h"
static int cache_mode;
static double fuel;
static double distance;
void set_mode(mode)
{
	if(mode==1)
		cache_mode=mode;
	else
	{		if(mode==0)
		cache_mode=mode;
	if(mode<=-2||mode>=2)
	{
		printf("fail valid");
		scanf("%d",&cache_mode);
	}
	else mode=cache_mode;
	}
	return;
}
void get_info(void)
{
	if(cache_mode==0)
	{
	printf("Enter distance traveld in kiliometers:");
	scanf("%lf",&distance);
	printf("Enter fuel consumed in liters:");
	scanf("%lf",&fuel);
	}	
	if(cache_mode==1)
	{
	printf("Enter distance traveld in miles:");
	scanf("%lf",&distance);
	printf("Enter fuel consumed in gallons:");
	scanf("%lf",&fuel);
	}
	return;
}
void show_info(void)
{
	double f_of_dist,dist_of_f;
	if(cache_mode==1)
	{
		dist_of_f=distance/fuel;
		printf("Fuel consumption is %.1f miles per gallon.\n",dist_of_f);
	}
	if(cache_mode==0)
	{
		 f_of_dist=100*(fuel/distance);
		 printf("Fuel consumption is %.2f liters per 100km\n",f_of_dist);
	}
	return;
}