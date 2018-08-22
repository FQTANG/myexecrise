#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	char st[80];
	int ch;
	FILE *fp;
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
	while((ch=getc(fp))!=EOF)
	{
		putc(ch,stdout);
		count++;
	}
	fclose(fp);
	printf("\n");
	printf("File %s has %lu characters\n",st,count);
	return 0;
}