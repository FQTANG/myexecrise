#include<stdio.h>
#include<limits.h>

char * get_st(char * st);
int bin_sttonum(char * st);
void show_bstr(const char *);
char * itobs(int n,char *ps);
void execrise2(int num,int num1);

int main(void)
{
	char  st[255];
	char st1[255];
	get_st(st);
	get_st(st1);
	int num=0,num_1=0;
	num=bin_sttonum(st);
	num_1=bin_sttonum(st1);
	printf("%d %d\n",num,num_1);
	puts(st);
	puts(st1);
	execrise2(num,num_1);
	return 0;
}
void execrise2(int num,int num1)
{
	int display=0;
	char st[255];
	display=num|num1;
	itobs(display,st);
	show_bstr(st);
	display=num&num1;
	itobs(display,st);
	show_bstr(st);
	display=num^num1;
	itobs(display,st);
	show_bstr(st);
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
char * itobs(int n,char *ps)
{
	int i;
	const static int size =CHAR_BIT*sizeof(int);
	for(i=size-1;i>=0;i--,n>>=1)
		ps[i]=(01&n)+'0';
	ps[size]='\0';
	return ps;
}
void show_bstr(const char * str)
{
	int i=0;
	while(str[i])
	{
		putchar(str[i]);
		if(++i%4==0&&str[i])
			putchar(' ');
	}
	printf("\n");
}
