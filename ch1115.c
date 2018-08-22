#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
int myatoi(char *st);
double mypow(double i,int num);

int main(int argc,char * stringv[])
{
	int count,i;
	double i_1;
	for(count=argc-1;count>0;count--)
		printf("%s ",stringv[count]);
	i=myatoi(stringv[1]);
	printf("%d\n",i);
	i_1=mypow(atof(stringv[1]),atoi(stringv[2]));
	printf("%.1f\n",i_1);
	return 0;
}
int myatoi(char *st)
{
	int i=0;
	
		while((*st)!='\0')
		{
			if(isdigit(*st)==0)
			{
				return 0;
			}
			else 
			{
				i*=10;
				i+=*st-'0';
			}
			st++;
		}
    return i;
}
double mypow(double i,int num)
{
	double anwser;
	if(i==0)
	{
		if(num==0)
		{	
	          printf("undefined\n");
	          return 0;
	    }
		else return 0;
	}
	else 
	{
		if(num>1)
		{
			anwser=i*mypow(i,num-1);
		}
		if(num==1)
		{
			anwser=i;
		}
		if(num==0)
		{
			return 1;
		}
		if(num<0)
		{
			anwser*=1/(mypow(i,-num));
		}
	}
	return anwser;
}