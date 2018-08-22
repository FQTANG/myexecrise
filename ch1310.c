#include<string.h>
#include<ctype.h>
#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	FILE * fp;
	char st[80];
	char ch;
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
	long int num=0;
	printf("Enter position:");
	while(scanf("%ld",&num)==1&&num>=0)
	{
	fseek(fp,num,SEEK_SET);
	while((ch=getc(fp))!='\n')
	{
		putc(ch,stdout);
	}
	printf("\n");
	printf("Enter position:");
	}
	if(fclose(fp)!=0)
		fprintf(stderr,"Error closing file.\n");
	return 0;
}