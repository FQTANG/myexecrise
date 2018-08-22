#include <stdio.h>
#include <stdlib.h>
#include<string.h>
#include<ctype.h>

struct month
{
	char name[15];
	char acronym[4];
	int days;
}

int main(int argc, char *argv[])
{
	struct month mon[12];
	mon[1]={"January","jan",31};
	mon[2]={"February","feb",28};
	mon[3]={"March","mar",31};
	mon[4]={"April","apr",30};
	mon[5]={"May","may",31};
	mon[6]={"June","jun",30};
	mon[7]={"July","jyl",31};
	mon[8]={"August","aug",31};
	mon[9]={"September","sep",30};
	mon[11]={"November","nov",30};
	mon[10]={"October","oct",31};
	mon[12]={"December","dec",31};		
	char  st[4];
	scanf("%s",st);
	int count,num=0;
    for(count=0;count<12;count++)
	{
		if(strmp(st,mon[count].acronym)==0)
			break;
		num+=mon[count].days;
	}
	printf("%d",num);
	return 0;
}