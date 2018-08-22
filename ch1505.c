#include<stdio.h>
#include<limits.h>
char * itobs(int n,char *);
void show_bstr(const char *);

int main(void)
{
	char bin_str[CHAR_BIT*sizeof(unsigned int)+1];
	unsigned int num,num_1=0;
	int bit;
	const int i=8*sizeof(unsigned int);
	scanf("%d %d",&num,&bit);
	itobs(num,bin_str);
	show_bstr(bin_str);
	num_1=num;
	num_1>>=i-bit;
	itobs(num_1,bin_str);
	show_bstr(bin_str);
	num<<=bit;
	num|=num_1;
	printf("%u\n",num);
	itobs(num,bin_str);
	show_bstr(bin_str);
	return 0;
}

char * itobs(int n,char *ps)
{
	int i;
	const static int size =CHAR_BIT*sizeof(unsigned int);
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
	putchar('\n');
}