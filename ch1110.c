#include<stdio.h>
#include<string.h>
#include<ctype.h>
char *  char_get(char * st);
char * reverse_string(char * st);
char * string_in(char * research_stirng,char * target_string);
char * delete_null(char * st);


int main(void)
{
	char  re_string[255];
	char tar_string[255];
    while((*(char_get(re_string)))!='\0')
	{
	char_get(tar_string);
	puts(re_string);
	puts(tar_string);
    printf("%p\n",string_in(re_string,tar_string));	
	delete_null(re_string);
	puts(re_string);
	reverse_string(re_string);
	puts(re_string);
	}
	return 0;
}

char * char_get(char * st)
{
	int i=0;
	char ch;
	char * ret_val;
	while((ch=getchar())!=EOF)
	{
		
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
	char temp[i-1];
	for(i_1=0;i>=0;i--)
	{
		temp[i-1]=*(st+i_1);
		i_1++;
	}
	for(i=0;i<i_1-1;i++)
	{
		*(st+i)=temp[i];
	}
	return st;
}
char * delete_null(char * st)
{
	int count=0,count_1=0,count_null=0;
		while(*(st+count)!='\0')
	{
		count++;
	}
	char temp[count-1];
	for(count_1=0;count_1<=count;count_1++)
	{
		if(*(st+count_1)==' ')
			count_null++;
		else
			temp[(count_1-count_null)]=*(st+count_1);
	}
	for(count=0;count<=count_1-1;count++)
		*(st+count)=temp[count];
	return st;
}