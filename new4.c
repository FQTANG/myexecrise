#include<stdio.h>
#include<stdbool.h>
#include<ctype.h>
void menu(void); //to print menu
long get_long(void); // to check input
bool bad_limit(long begin,long end,long low,long high); //to check limit
void seacher(long upper_num,long lower_num); //to seach the number
char get_first(void);
int main(void)
{
	const long MIN=-10000000L;
	const long MAX=+10000000L;
	long start; //upper limit
	long stop;//lower limit
    menu();
	printf("upper:");
	start=get_long();
	printf("lower:");
	stop=get_long();
	while(start!=0||stop!=0)
	{
		if(bad_limit(start,stop,MIN,MAX))
			printf("Please try again.\n");
		else
			seacher(start,stop);
			printf("upper:");
	        start=get_long();
	        printf("lower:");
	        stop=get_long();
	}
	printf("Done\n");
 return 0;
}
void menu(void)
{
	printf("This is a program to guess number\n");
	printf("integers in a range.\nthe lower bound should not "
	       "be less than -1000000 and\nthe upper bound"
		   "should not be more than +10000000\n");	
	printf("Now pick a number and enter limit\n");
	return;
}
void seacher(long upper_num,long lower_num)
{
	char b_or_l,input;
	long upper,lower,guess_num;
	upper=upper_num;
	lower=lower_num;
	guess_num=(upper_num+lower_num)/2;
	printf("%ld is you wanted?\n",guess_num);
	while(input!='y')
	{		
	    input=get_first();
		if(input=='y')
			break;
		printf("guess number is bigger or less than your pick?\n");
		printf("please enter your anwser \n");
		b_or_l=get_first();
		switch(b_or_l)
		{
		case 'l':
		upper=(upper+lower)/2;
		lower=lower;
		guess_num=(upper+lower)/2;		
	    printf("%ld is you wanted?\n",guess_num);
		break;
		case 'b':
		lower=(upper+lower)/2;
		upper=upper;
		guess_num=(upper+lower)/2;
        printf("%ld is you wanted?\n",guess_num);
		default:break;		
 	}
	}
	printf("%ld is you wanted\n",guess_num);
	return;
}
bool bad_limit(long begin,long end,long low,long high)
{
	bool not_good=false;
	if(begin>end)
	{
		printf("%ld isn't smaller than %ld\n",begin,end);
		not_good=true;
	}
	if(begin<low||end<low)
    {
	    printf("value must be %ld or greater\n",low);
	    not_good=true;
	}
	if(begin>high||low>high)
	{
		printf("value must be %ld or less\n",high);
		not_good=true;
	}
	return not_good;
}
long get_long(void)
{
	long input;
	char ch;
	while(scanf("%ld",&input)!=1)
	{
		while((ch=getchar())!='\n')
			putchar(ch);
		printf("is not integer.\nPlease enter");
		printf("integer value");
	}
	return input;
}
char get_first(void)
{
	int ch=0;
	ch=getchar();
	while(!isalpha(ch=getchar()))
		continue;
	return ch;
}
