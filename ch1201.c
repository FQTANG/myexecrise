#include<stdio.h>
void critic(void);

int main(void)
{
	static int units;
	printf("how many pounds to a firkin of butter?\n");
	scanf("%d",&units);
	while(units!=56)
	{	critic();
        scanf("%d",&units);}
	printf("you must have looked it up!\n");
	return 0;
}
void critic(void)
{

	printf("No luck,my friend.Try again\n");
	return;
}