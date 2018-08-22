#include "mylibrary.h"
#include <tgmath.h>
#define trans(x) (x/180)*3.1415926

struct polar_coordinates{
   double module;
   double angle;
};
struct axes_coordinates{
	double x_axes;
	double y_axes;
};

struct axes_coordinates * transfor(struct  polar_coordinates * pt1,struct  axes_coordinates * pt2);

int main(void)
{
	printf("Enter polar_coordinates value:\n");
	struct polar_coordinates input;
	struct polar_coordinates * input_pt=&input;
	struct axes_coordinates output;
	struct  axes_coordinates * output_pt=&output;
	while(scanf("%lf",&input.module)==1&&scanf("%lf",&input.angle)==1)
	{
			transfor(input_pt,output_pt);
			printf("Enter polar_coordinates value:\n");
	}
	return 0;
 } 
struct  axes_coordinates * transfor(struct  polar_coordinates * pt1,struct  axes_coordinates * pt2)
{
	(*pt2).x_axes=(*pt1).module*cos(trans((*pt1).angle));
	(*pt2).y_axes=(*pt1).module*sin(trans((*pt1).angle));
	printf("x_axes is %.5f,y_axes is %.5f\n",(*pt2).x_axes,(*pt2).y_axes);
	return pt2;
}