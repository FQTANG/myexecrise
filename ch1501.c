#include<stdio.h>
#include<limits.h>

char * get_st(char * st);
int bin_sttonum(char * st);

int main(void)
{
	char  st[255];
	get_st(st);
	int num=0;
	num=bin_sttonum(st);
	printf("%d\n",num);
	puts(st);
	return 0;
}
int bin_sttonum( char * st)
{
	int num=0;
	const int mask=01;
	char * rt=st;
	while(*rt!='\0')
	{
		if(*rt=='0')
		{
			num<<=1;
			rt++;
		}
		else
		{
         if (*rt=='1')
		 {
			 num<<=1;
			 num|=mask;
             rt++;			 
		 }
         else break	;	 
		}
	}
		printf("%d\n",num);
	return num;
}
char * get_st( char * st)
{
	char * rt;
	char ch;
	int num=0;
	rt=st;
	while((ch=getchar())!='\n')
	{
		if(ch=='1'||ch=='0')
		{
			*rt=ch;
			rt++;
			num++;
		}
	}
	rt[num]='\0';
	return rt-num;
}