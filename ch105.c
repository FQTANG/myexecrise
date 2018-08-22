#include<stdio.h>
char * char_get(void)
int main(void)
{
	puts(char_get());	
	return 0;
}
char * char_get(void)
{
	int num;
	scanf("%d",&num);
	char ch[num+1];
	fgets(char_get,num+1,stdin0);
	return * ch;
}