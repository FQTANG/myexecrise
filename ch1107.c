#include<stdio.h>
#include<string.h>
#include<ctype.h>
int char_get(char * st,int num);
char * mystrncpy(char * s1,char * s2,int n,int s2_length);

int main(void)
{
	const int num=255;
	int s2_num=0;
	int copy_num=0;
	char s1[num];
	char s2[num];
	scanf("%d",&copy_num);
	s2_num=(char_get(s2,num));
	puts(mystrncpy(s1,s2,copy_num,s2_num));
	return 0;
}
int char_get(char * st,int num)
{
	int i=0,i_1=0;
	char ch;
	char * ret_val;
	while(getchar()!='\n');
	while((ch=getchar())!=EOF&&i_1<=num&&i<=num)
	{
			if(ch==' ')
		{
			continue;
		}
		else if(ch=='\n')
			break;
		else
		{*(st+i)=ch;
		     i++;
			 i_1++;
		}	 
	}
	return i_1;
}
char * mystrncpy(char * s1,char * s2,int n,int s2_length)
{
	int count,i=0;
	for(count=0;count<n;count++)
	{
		if(count<=s2_length)		
		{
			*(s1+count)=*(s2);
			s2++;
		}
		else *(s1+count)=0;
	}
	*(s1+n+1)=0;
	return s1;
}