#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>
#define MAX 41
int check_word(FILE *fp);

int main(void)
{
	FILE * fp;
	char words[MAX];
	if((fp=fopen("wordy.txt","a+"))==NULL)
	{
		fprintf(stdout,"Can't open wordy.txt file.\n");
		exit(EXIT_FAILURE);
	}
	int num=0;
	num+=check_word(fp);
	puts("Eneter words to add to the file;press the #");
	puts("Key at the begining of a line to terminate.");
	while((fscanf(stdin,"%40s",words)==1)&&(words[0]!='#'))
	{
		fprintf(fp,"%d%s\n",num+1,words);
		num++;
	}
	puts("File contents");
	rewind(fp);
	while(fscanf(fp,"%s",words)==1)
		puts(words);
	puts("Done");
	if(fclose(fp)!=0)
		fprintf(stderr,"Error closing file.\n");
	return 0;
}
int check_word(FILE *fp)
{
	int n=0;
	char ch;
	while((ch=getc(fp))!=EOF)
	{
		if(isdigit(ch))
			n++;
	}
	return n;
}