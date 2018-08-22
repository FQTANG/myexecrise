#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main(int argc,char * stringv[])
{
	int count;
	for(count=argc-1;count>0;count--)
		printf("%s ",stringv[count]);
	return 0;
}
