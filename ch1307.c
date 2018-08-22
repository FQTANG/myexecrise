#include<stdio.h>
#include<stdlib.h>
char * getchar_file(char* str,FILE * file);

int main(void)
{
	char st[80],st2[80];
	char temp[40];
	FILE *fp,*fp1;
	unsigned long count=0;
	printf("Enter filename\n");
	scanf("%s",st);
	if(st==NULL)
	{
		printf("Usage:count filename\n");
		exit(EXIT_FAILURE);
	}
	if((fp=fopen(st,"r"))==NULL)
	{
		printf("Can't open %s \n",st);
				exit(EXIT_FAILURE);
	}
	printf("Enter filename\n");
	scanf("%s",st2);
	if(st2==NULL)
	{
		printf("Usage:count filename\n");
		exit(EXIT_FAILURE);
	}
	if((fp1=fopen(st2,"r"))==NULL)
	{
		printf("Can't open %s \n",st2);
				exit(EXIT_FAILURE);
	}
	while(1)
	{
		getchar_file(temp,fp);
		printf("%s",temp);
		getchar_file(temp,fp1);
		printf("%s",temp);
		if(feof(fp)==1&&feof(fp1)==1)
			break;
	}
	return 0;
}
char * getchar_file(char* str,FILE * file)
{
	char * ret_val;
	fgets(str,40,file);
	while((*str)!='\0')
	{
		if(*str=='\n')
		{	
	       *(str)=='\0';
		    break;
		}
		str++;
	}
	return ret_val	;
}