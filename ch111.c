#include<stdio.h>
char * s_get(char * st,int num);
int main(void)
{   
    int num,i;
	num=10;
	char st[10];
	char * test;
    printf("%p,%p\n",s_get(st,num),st);
	puts(st);
	return 0;
}
char * s_get(char * st,int num)
{
    char * ret_val;
    int	 i=0;
	ret_val=fgets(st,num,stdin);
	if(ret_val!=NULL)
	{
		while(st[i]!='\n'&&st[i]!='\0')
			i++;
		if(st[i]=='\n')
			st[i]=='\0';
		else 
			while(getchar()!='\n')
				continue;
	}
	return ret_val;
}