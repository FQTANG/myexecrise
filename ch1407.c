#include <stdio.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>
#define MAXTITL 40
#define MAXAUTL 40
#define MAXBKS 10
char * s_gets(char *st,int n);
void menu(void);

struct book{
	char title[MAXTITL];
	char author[MAXAUTL];
	float value;
	int d_or_s;
};
void change_book( struct book * library, const int count);

int main(void)
{
	struct book library[MAXBKS];
	int count=0;
	int index,filecount;
	FILE * pbooks;
	int size=sizeof(struct book);
	if((pbooks=fopen("book.dat","r+b"))==NULL)
	{
		fputs("Can't open book.dat file\n",stderr);
		exit(1);		
	}
	rewind(pbooks);
	while(count<MAXBKS&&fread(&library[count],size,1,pbooks)==1)
	{
		if(count==0)	
	        puts("Current content of book.dat:");
		printf("%s by %s:$%.2f\n",library[count].title,library[count].author,library[count].value);
		count++;
	}	
	filecount=count;
	int i;
	for(i=0;i<=filecount;i++)
		library[i].d_or_s=1;
	if(count==MAXBKS)
	{
		fputs("The book.dat file is full.",stderr);
		exit(2);
	}
	printf("do you want to change the book information?y to change.\n");
	char chan;
	while(scanf("%c",&chan)==1&&chan=='y')
	{
		change_book(library,count);
		printf("do you want to change the book information?y to change\n");
	}
	while((chan=getchar())!='\n');
	printf("Please enter the book title.\n");
	printf("Press [enter] at the start of a line to stop.\n");
	while(count<MAXBKS&&s_gets(library[count].title,MAXTITL)!=NULL&&library[count].title[0]!='\0')
	{
		printf("Now enter the author.\n");
		s_gets(library[count].author,MAXAUTL);
		printf("Now enter the value.\n");
		scanf("%f",&library[count].value);
		count++;
		while(getchar()!='\n')
			continue;
		if(count<MAXBKS)
			printf("Enter the next title.\n");
	}
		for(i=0;i<=count&&i>=filecount;i++)
		library[i].d_or_s=1;
	fclose(pbooks);
	pbooks=fopen("book.dat","w+b");
	if(count>0)
	{       
       printf("here is the list of your books.\n");
       for(index=0;index<count;index++)
		   if(library[index].d_or_s==1)
	   printf("%s by %s:$%.2f.\n",(library[index]).title,(library[index]).author,(library[index]).value);
       for(i=0;i<count;i++)
	   {   if(library[i].d_or_s!=0)
		   {
			   fwrite(library+i,size,1,pbooks);
		}
	   }	   
	}
	else
		puts("No books?Too bad.\n");
	puts("Bye.\n");
	fclose(pbooks);
	return 0;
}
char * s_gets(char *st,int n)
{
	char * ret_val;
	char * find;
	ret_val=fgets(st,n,stdin);
	if(ret_val)
	{
		find=strchr(st,'\n');
		if(find)
		*find='\0';
	else
		while(getchar()!='\n')
			continue;
	}
	return ret_val;
}
void change_book( struct book * library,const int count)
{
	int index;
	if(count==0)
		return;
	for(index=0;index<count;index++)
	{
		printf("%s by %s:$%.2f %d \n",library[index].title,library[index].author,library[index].value,index+1);
	}
	int num=0;
	char ch;
	printf("which book you want change?(-1 to skip)\n");
	while(scanf("%d",&num)==1&&num>0)
	{
		while(getchar()!='\n');
		printf("do you want to delete the book? y to sure\n");
		if(scanf("%c",&ch)==1&&ch=='y')
		{
			library[num-1].d_or_s=0;
			break;
		}
		while(getchar()!='\n');
	    printf("Please enter the book title.\n");
		s_gets(library[num-1].title,MAXTITL);
        printf("Now enter the author.\n");
		s_gets(library[num-1].author,MAXAUTL);
		printf("Now enter the value. a to quit\n");
		if(scanf("%f",&library[num-1].value)==0)
			break;
		("which book you want change?(-1 to skip)\n");
	}	
	return;
}
