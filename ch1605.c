#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void lucky_draw(int array[],int size,int draw);

int main(void)
{
	int array[10]={1,2,3,4,5,6,7,8,9,10};
	int i;
	for(i=0;i<10;i++)
		printf("%d\n",array[i]);
	lucky_draw(array,10,5);
	return 0;
}

void lucky_draw(int array[],int size,int draw)
{
	srand((unsigned int)time(0));
	int index;
	for(index=0;index<draw;index++)
	{
		int pri_num=0,pri_stat=0;
		while(pri_stat==0)
		{
			pri_num=rand()%size;
			if(array[pri_num]!=0)
			{
				printf("%d\n",array[pri_num]);
				array[pri_num]=0;
				pri_stat=1;
			}
			else pri_num=rand()%size;
		}
	}
	return;
}