#include <stdio.h>
#include<string.h>
#define MAXTITL 40
#define MAXAUTL 40
#define MAXBKS 100
char * s_gets(char *st,int n);
void menu(void);

struct book{
	char title[MAXTITL];
	char author[MAXAUTL];
	float value;
};

void input_order(struct book * library, int count);
void title_order(struct book * library, int count);
void value_order(struct book * library, int count);

int main(void)
{
	struct book library[MAXBKS];
	int count=0;
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
	if(count>0)
	{       
             input_order(library,count);
             title_order(library,count);
             value_order(library,count);            
	}
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
void input_order(struct book * library, int count)
{ 
   int i=0;
   printf("here is the list of your books.\n");
   for(i=0;i<count;i++)
	   printf("%s by %s:$%.2f.\n",(library[i]).title,(library[i]).author,(library[i]).value);
   return;
}
void title_order(struct book * library, int count)
{
	struct book * temp;
	struct book * st[count];
	int i=0;
	for(;i<count;i++)
		st[i]=&library[i];
	int top,seek;
	for(top=0;top<count-1;top++)
		for(seek=top+1;seek<count;seek++)
			if(strcmp(st[top]->title,st[seek]->title)>0)
			{
				temp=st[top];
				st[top]=st[seek];
				st[seek]=temp;
			}
	for(i=0;i<count;i++)
	{
		printf("%s by %s:$%.2f.\n",(*st[i]).title,(*st[i]).author,(*st[i]).value);
	}

}
void value_order(struct book * library, int count)
{
	struct book * temp;
	struct book * st[count];
	int i=0;	
	for(;i<count;i++)
		st[i]=&library[i];
	int top,seek;
	for(top=0;top<count-1;top++)
		for(seek=top+1;seek<count;seek++)
			if(st[top]->value>st[seek]->value)
			{
				temp=st[top];
				st[top]=st[seek];
				st[seek]=temp;
			}
	for(i=0;i<count;i++)
	{
		printf("%s by %s:$%.2f.\n",(*st[i]).title,(*st[i]).author,(*st[i]).value);
	}

}
void menu(void)
{
	printf("1 to input,2 to title,3 to vlaue");
	}
	