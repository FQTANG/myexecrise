#include <stdio.h>
#include<string.h>
#define MAXTITL 40
#define MAXAUTL 40
#define MAXBKS 100
char * s_gets(char *st,int n);

struct person_information{
	int num;
	struct{char first[20],middle[20], family[20]};
};
void printstructpointer(struct person_information * pi);
void printstructvalue(struct person_information  pi_v);


int main(void)
{
	struct person_information pi[5]={{100000000,{"Dribble","MIKE","francis"}},
		{100000001,{"Scrooge","Mc","Duck"}},
		{123456789,{"Rick",'\0',.family="Pocello"}},
		{987654321,{"Chris",'\0',.family="Sale"}},
		{321166470,{"David",'\0',.family="price"}},		
	};
	printstructpointer(pi);
	int i;
	for(i=0;i<5;i++)
	{		
	printstructvalue(pi[i]);
	}
	return 0;
}
void printstructpointer(struct person_information * pi)
{
	int i;
	for(i=0;i<5;i++)
	{
	 if((pi[i].middle[0])!='\0')
	 printf("%d %s %s %c.\n",pi[i].num,pi[i].first,pi[i].family,pi[i].middle[0]);
     else printf("%d %s %s\n",pi[i].num,pi[i].first,pi[i].family);
	}
	return;
}
void printstructvalue(struct person_information  pi_v)
	{
		 if((pi_v.middle[0])!='\0')
	 printf("%d %s %s %c.\n",pi_v.num,pi_v.first,pi_v.family,pi_v.middle[0]);
     else printf("%d %s %s\n",pi_v.num,pi_v.first,pi_v.family);
		return;
	}