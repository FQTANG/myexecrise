#include <stdio.h>
#include <stdlib.h>
#include<string.h>
#include<ctype.h>

struct month{
	char name[15];
	char acronym[4];
	int days;
};

int main(int argc, char *argv[])
{
	struct month mon[12]={
	{"January","jan",31},
	{"February","feb",28},
	{"March","mar",31},
	{"April","apr",30},
	{"May","may",31},
	{"June","jun",30},
	{"July","jyl",31},
	{"August","aug",31},
	{"September","sep",30},
	{"October","oct",31},
	{"November","nov",30},
	{"December","dec",31},};	
	int year,month_i,days1;
	scanf("%d.%d.%d",&year,&month_i,&days1);
	int count,num=0;
	if((year%100!=0&&year%4==0)||(year%400==0))
	    mon[1].days=29;
    for(count=0;count<12;count++)
	{
		if(count==month_i-1)
			break;
		num+=mon[count].days;
	}
	printf("%d\n",num+days1);
	return 0;
}