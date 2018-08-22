#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main(void)
{
	char ch;
	int word=0,lower=0,digit=0,upper=0,punct=0;
    while(getchar()==EOF);
	while((ch=getchar())!=EOF)
	{
		if(isspace(ch)||ispunct(ch))
			word++;
		if(islower(ch))
			lower++;
		if(isupper(ch))
			upper++;
		if(isdigit(ch))
			digit++;
		if(ispunct(ch))
			punct++;
	}
	printf("%d %d %d %d %d",word,lower,upper,punct,digit);
	return 0;
}
