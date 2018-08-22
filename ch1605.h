#include <stdio.h>
#include <stdlib.h>

void lucky_draw(int array[],int size,int draw);

int main(void)
{
	int array[10]={1,2,3,4,5,6,7,8,9,10};
	lucky_draw(array,10,5);
	return 0;
}

void lucky_draw(int array[],int size,int draw)
{
	srand(114514);
	int index;
	for(index=0;index<draw;index++)
	{
		int pri_num=0,pri_stat=0;
		while(pri_stat==0)
		{
			pri_num=rand()%size+1;
			if(array[pri_num]!=0)
			{
				printf("%d\n",array[pri_num]);
				array[pri_num]=0;
				pri_stat=1;
			}
			else pri_num=rand()%size+1;
		}
	}
	return;
}