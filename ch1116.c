#include<stdio.h>
#include<string.h>
#include<ctype.h>
void enter_menu(void);
void menu(void);
int char_get(char * st);
int first_world_length(char * st);
int put_all(char * st[],int r);
int put_words(char * st[],int r);
int put_ascII(char * st[],int r);
int put_length(char * st[],int r);

int main(int argc,char *argv[])
{
	char st[10][255];
	int r=0,input=0,count=0,count_1=0,count_2=0;
	//enter_menu();
	while((char_get(st[r]))!=0&&r<=10)
	{	
		r++;
	}
	char *ptstr[r];
	for(count=0;count<=r;count++)
		ptstr[count]=st[count];
	if(argc==2)
	{
		printf("%c %c",argv[1][0],argv[1][1]);
			switch(argv[1][0])
			{
				case 'u':
				        for(count_1=0;count_1<=r;count_1++)
				        {
							for(count_2=0;count_2<strlen(st[count_1]);count_2++)
								st[count_1][count_2]=tolower(st[count_1][count_2]);
				        }
						break;
				case 'l':
				        for(count_1=0;count_1<=r;count_1++)
				        {
							for(count_2=0;count_2<strlen(st[count_1]);count_2++)
								st[count_1][count_2]=toupper(st[count_1][count_2]);
				        }
						break;
						default: break;
			}
		}
	while(input!=5)
	{
		menu();
		scanf("%d",&input);
		switch(input)
		{
			case 1:
			       put_all(ptstr,r-1);
                   break;
            case 2:
                    put_ascII(ptstr,r-1);
                    break;
            case 3:
                    put_length(ptstr,r-1);
                    break;
            case 4:
                    put_words(ptstr,r-1);
                     break;
            default:break;          			
		}
	}
	return 0;
}
int char_get(char * st)
{
	int i=0;
	char ch;
	char * ret_val;
	while((ch=getchar())!=EOF)
	{
			if(ch=='\n')
			{
			*(st+i)=ch;
			break;
			}
		else
		{
			*(st+i)=ch;
		     i++;			
		}	 
	}
	*(st+i)='\0';
	return i;
}
void menu(void)
{
	puts("choose option");
	puts("1 to print string in orginal order");
	puts("2 to print string in ASCII collating sequence");
	puts("3 to print string ordered by length");
	puts("4 to print string ordered by first world length");
	puts("5 to quit");
	return;
}
void enter_menu(void)
{
	puts("Enter 10 string.if you want to over the input,enter ctrl+D");
	return;
}
int first_world_length(char * st)
{
	int len_of_f_w=0;
	while(isspace(*st)==0)
		st++;
	while(!isspace(*st))
	{
		len_of_f_w++;
		st++;

	}
	return len_of_f_w;
}
int put_all(char * st[],int r)
{
	int count;
	for(count=0;count<=r;count++)
		puts(st[count]);
	return 0;
}
int put_ascII(char * st[],int r)
{
	char * temp;
	int top,seek;
	for(top=0;top<r-1;top++)
	{
		for(seek=top+1;seek<r;seek++)
		{
			if(strcmp(st[top],st[seek])>0)
			{
				temp=st[top];
				st[top]=st[seek];
				st[seek]=temp;
			}
		}
	}
	for(top=0;top<=r;top++)
	{
		puts(st[top]);
	}
	return 0;
}
int put_length(char * st[],int r)
{
	char * temp;
	int top,seek;
	for(top=0;top<r-1;top++)
	{
		for(seek=top+1;seek<r;seek++)
		{
			if(strlen(st[top])>strlen(st[seek]))
			{
				temp=st[top];
				st[top]=st[seek];
				st[seek]=temp;
			}
		}
	}
	for(top=0;top<=r;top++)
	{
		puts(st[top]);
	}
	return 0;
}
int put_words(char * st[],int r)
{
	char * temp;
	int top,seek;
	for(top=0;top<r-1;top++)
	{
		for(seek=top+1;seek<r;seek++)
		{
			if(first_world_length(st[top])>first_world_length(st[seek]))
			{
				temp=st[top];
				st[top]=st[seek];
				st[seek]=temp;
			}
		}
	}
	for(top=0;top<=r;top++)
	{
		puts(st[top]);
	}
	return 0;
}
