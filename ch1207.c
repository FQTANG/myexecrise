#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(void)
{
	int dice,sides,num,count_1,count_2;
	printf("Enter the number of sets; enter q to stop:");

	srand((unsigned int)time(0));	
	while(scanf("%d",&num)!=0&&num>=0)
	{
		int dice_roll[num+1];  
		for(count_1=0;count_1<num;count_1++)
          dice_roll[count_1]=0;
		printf("How many sides and how many dice:");
		scanf("%d %d",&sides,&dice);
		for(count_1=0;count_1<num+1;count_1++)
			for(count_2=1;count_2<dice;count_2++)
				dice_roll[count_1]+=rand()%sides+1;
			printf("Here are %d sets of %d %d-sided throws.\n",num,dice,sides);
		for(count_1=0;count_1<num;count_1++)
			printf("%d ",dice_roll[count_1]);
		printf("\n");
			printf("Enter the number of sets; enter q to stop:");

	}
	return 0;	
}
