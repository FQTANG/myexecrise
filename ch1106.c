#include<stdio.h>
#include<string.h>
#include<ctype.h>
int check_char_array(char * ch_array,char ch,int n);
char * char_get(char * st,int num);
int main(void)
{   
    int num=0,count=0;
	scanf("%d",&num);
	char array_char[num];
	char ch_tofound,loop_count='y';
	int founded;
	while(loop_count=='y')
	{
		for(count=0;count<=num;count++)
			array_char[count]=0;
	char_get(array_char,num);
	scanf("%c",&ch_tofound);
	founded=(check_char_array(array_char,ch_tofound,num));
	printf("%d\n",founded);
	puts(array_char);
	while(getchar()!='\n');
	loop_count=getchar();
	}
	return 0;
}
char * char_get(char * st,int num)
{
	int i=0,i_1=0;
	char ch;
	char * ret_val;
	while(getchar()!='\n');
	while((ch=getchar())!=EOF&&i_1<=num&&i<=num)
	{
		if(ch==' ')
		{
			if(i_1==num)
			{
				i_1++;
			}
			continue;
		}
		else if(ch=='\n')
			break;
		else
		{*(st+i)=ch;
		     i++;
			 i_1=num;
		}	 
	}
	ret_val=st;
	
	return ret_val;
}
int check_char_array(char * ch_array,char ch,int n)
{
	char * fou_poi=NULL;
	int i,i_1=0;
	for(i=0;i<=n;i++)
	{
		if(*ch_array==ch)
		{
			fou_poi=ch_array;
			i_1++;
			break;
		}
		else ch_array++;
	}
	return i_1;
}