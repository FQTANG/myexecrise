#include<stdio.h>
#include<string.h>
#include<ctype.h>
char * char_get(char * st,int num);
int main(void)
{   
    int num=25;
	char array_char[25]={'a'};
	char_get(array_char,num);
	puts(array_char);
	return 0;
}
char * char_get(char * st,int num)
{
	int i=0,i_1=0;
	char ch;
	char * ret_val;
	while((ch=getchar())!=EOF&&i_1<=1)
	{
		if(ch==0)
		{
			i_1++;
			continue;
		}
		else 
		{*(st+i)=ch;
		     i++;
		}	 
	}
	ret_val=st;
	
	return st;
}