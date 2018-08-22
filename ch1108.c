#include<stdio.h>
#include<string.h>
#include<ctype.h>
char *  char_get(char * st);
char * reverse_string(char * st);
char * string_in(char * research_stirng,char * target_string);

int main(void)
{
	char * re_string[255];
	char * tar_string[];
    char_get(re_string);
	char_get(tar_string);
	puts(re_string);
	puts(tar_string);
    printf("%p\n",string_in(re_string,tar_string));	
	puts(reverse_string(re_string));
	return 0;
}

char * char_get(char * st)
{
	int i=0;
	char ch;
	char * ret_val;
	while((ch=getchar())!=EOF)
	{
			if(ch==' ')
		{
			continue;
		}
		else
			if(ch=='\n')
			break;
		else
		{
			*(st+i)=ch;
		     i++;
		}	 
	}
	*(st+i)='\0';
	return st;
}
char * string_in(char * research_stirng,char * target_string)
{
	char * founded_string=NULL;
	int count=0;
	while(*research_stirng!='\0')
	{
		while(*(research_stirng+count)==*(target_string+count))
		{
		count++;
		if(*(target_string+count)=='\0')
		{
			founded_string=research_stirng;
	        break;
		}
		}
		research_stirng++;
	}
	return founded_string;
}
char * reverse_string(char * st)
{
	int i=0,i_1;
	while(*(st+i)!='\0')
	{
		i++;
	}
	char temp[i];
	for(i_1=0;i>=0;i--)
	{
		temp[i]=*(st+i_1);
		i_1++;
	}
	for(i=0;i<-i_1;i_++)
	{
		*(st+i)=temp[i];
	}
	return st;
}