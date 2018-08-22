#include <stdio.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>
char * s_gets(char *st,int n);
void menu(void);

struct seat{
	int seat_num;
	int seat_res;
	struct {char first[20];char last[20];};
};
void show_num_seat(struct seat * plane,const int n);
void delete_seat(struct seat * plane,const int n);
void show_list_seat(struct seat * plane,const int n);
void show_alpha_seat(struct seat * plane,const int n);
void assign_seat(struct seat * plane,const int n);


int main(void)
{
	struct seat plane[12];
	char select;
	int index=0;
	for(;index<12;index++)
	{
		plane[index].seat_num=index+1;
		plane[index].seat_res=0;
	}
	menu();
	while(scanf("%c",&select)==1&&select!='f')
	{
		switch(select)
		{
			case 'a':show_num_seat(plane,12);
			         break;
			case 'b':show_list_seat(plane,12);
			         break;
			case 'c':show_alpha_seat(plane,12);
                    break;
            case 'd':assign_seat(plane,12);
                     break;
          	case 'e':delete_seat(plane,12);
                     break;
            case 'f':break;
            default:menu();
                    break; 			
		}
	}
	return 0;
}

void show_num_seat(struct seat * plane,const int n)
{
	int index=0;
	for(;index<n;index++)
	{
		if(plane[index].seat_res==0)
			printf("%d\n",plane[index].seat_num);
	}
	return;
}
void show_list_seat(struct seat * plane,const int n)
{
	int index=0;
	for(;index<n;index++)
	{
		if(plane[index].seat_res==1)
			printf("%d %s %s \n",plane[index].seat_num,plane[index].first,plane[index].last);
	}
	return;
}

void show_alpha_seat(struct seat * plane,const int n)
{
	struct seat * temp;
	struct seat * display[n];
	int index=0,top,seek,i=0;
	while(i<12)
	{
			if(plane[i].seat_res==1)
			{	
		      display[index]=&plane[i];
			  index++;
			}
			i++;
	}
	if(index==0)
	{
		printf("All seat is empty.\n");
		return;
	}
	for(top==0;top<index-1;top++)
		for(seek=top+1;top<index;seek++)
			if(strcmp((*display[top]).first,(*display[seek]).first)>0)
			{
				temp=display[top];
			    display[top]=display[seek];
                display[seek]=temp;
			}
	for(top=0;top<index;top++)
	{
		printf("%d %s %s \n",(*display[top]).seat_num,(*display[top]).first,(*display[top]).last);
	}
    return;
}
void assign_seat(struct seat * plane,const int n)
{
	char ch;
	while((ch=getchar())!='\n');
	show_num_seat(plane,n);
	printf("Enter num which you want to assign(-1 to quit)\n");
	int i=0;
	while(scanf("%d",&i)==1&&i>=0)
	{
		while((ch=getchar())!='\n');
		printf("Enter your first name\n");
		s_gets(plane[i-1].first,20);
		printf("Enter your last name\n");
		s_gets(plane[i-1].last,20);
		plane[i-1].seat_res=1;
		show_num_seat(plane,n);
		while((ch=getchar())!='\n');
		printf("Enter num which you want to assign(-1 to quit)");
	}
	return;
}

void delete_seat(struct seat * plane,const int n)
{
	show_list_seat(plane,n);
	printf("Enter number you want to cancel\n");
	int i=0;
	while(scanf("%d",&i)==1&&i>0)
	{
		plane[i-1].seat_res=0;
		printf("Enter number you want to cancel\n");
	}
	return;
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
void menu(void)
{
	puts("To choose a function,enter its letter label:");
	puts("a)Show number of empty seats");
	puts("b)Show list of empty seats");
	puts("c)Show alphabertical list of seats");
	puts("d)Assign a customer to a seat assignment");
	puts("e)Delate a seat assignment");
	puts("f)Quit");
}