#include<stdio.h>
#include<limits.h>

int show_opern(int num,int num_1);

int main(void)
{
	int num,num_1,num_2=0;
	scanf("%d %d",&num,&num_1);
	num_2=show_opern(num,num_1);
	printf("%d\n",num_2);
	return 0;
}

int show_opern(int num,int num_1)
{
	char ps[CHAR_BIT*sizeof(int)+1];
	int i;
	const static int size =CHAR_BIT*sizeof(int);
	for(i=size-1;i>=0;i--,num>>=1)
		ps[i]=(01&num)+'0';
	ps[size]='\0';
	int i_1=0,i_2=0;
	for(i=0;i<size;i++)
	{
		if(ps[i]=='1')
		i_1++;
	}
	if(ps[(size-num_1)]=='1')
			i_2++;
	puts(ps);
	printf("%d\n",i_1);
	return i_2;
}