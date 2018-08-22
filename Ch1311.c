#include<string.h>
#include<ctype.h>
#include<stdio.h>
#include<stdlib.h>


int main(void)
{
	FILE * fp;
	char st[80],st_check[255],st_compare[255];
	char ch;
	printf("Enter filename.\n");
	scanf("%s",st);
	printf("Enter string.\n");
    scanf("%s",st_check);
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
	while((fgets(st_compare,255,fp))!=NULL)
	{
		if(strstr(st_compare,st_check)!=NULL)
			puts(st_compare);
	}
	
	if(fclose(fp)!=0)
		fprintf(stderr,"Error closing file.\n");
	return 0;
}