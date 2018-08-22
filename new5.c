#include<stdio.h>
#include<ctype.h>
int alpha_count(char ch);
int main(void)
{
	char ch;
	int view;
	ch='a';
	view=0;
	while((ch=getchar())!=EOF)
	{
		view=alpha_count(ch);
		printf("%d",view);
		if(ch='n')
			printf("\n");
	}
	return 0;
}
int alpha_count(char ch)
{ 
    int count_al;
	count_al=0;
	if(ch='n')
			printf("\n");
	else{	
	if(isalpha(ch)!=0)
    {
		count_al=ch;
		if(count_al>=65&&count_al<=90)
		{
			count_al-=64;
		}
		else count_al-=96;
	}
    else count_al=-1;
	}
	return count_al;
}