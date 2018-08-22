#include<stdio.h>
#include<ctype.h>
#include<stdlib.h>
#include<string.h>
int file_check(char * file,char target);

int main(int argc,char * argv[])
{
	if(argc<=2)
	{
		char * st_stdin;
		char ch_stdin;
		int count_stdin=0;
		while((ch_stdin=getchar())!=EOF)
		{
			*st_stdin=ch_stdin;
			st_stdin++;
			count_stdin++;
		}
		st_stdin-=count_stdin;
		int anwser_stdin=0;
		for(int count_stdin_1=0;count_stdin_1<count_stdin;count_stdin_1++)
		{
			if(*st_stdin==*argv[1])
				anwser_stdin++;
			st_stdin++;
		}
		printf("%d\n",anwser_stdin);
	}
	if(argc>2)
	{
		char * filename[argc-2];
		int count=0;
		for(;count<=argc-2;count++)
			filename[count]=argv[count+2];
		int anwser_file=0;
		for(count=0;count<argc-2;count++)
		{
			anwser_file+=file_check(filename[count],*argv[1]);
		}
		printf("The sum is %d.\n",anwser_file);
	}
	return 0;
}
int file_check(char * file,char target)
{
	int num=0;
	FILE *fp;
	char ch;
	if((fp=fopen(file,"r"))==NULL)
	printf("Can't open %s file.\n",file);
    if(fp!=NULL)
	{
		while((ch=getc(fp))!=EOF)
		{
			if(ch==target)
	     	num++;
		}
		fclose(fp);
	}
	printf("There are %d %c in %s.\n",num,target,file);
	return num;
}