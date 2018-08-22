#include <stdio.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>


struct player_log{
	int player_num;
	struct {char first[20],last[20];};
	int  atbats;
	int  hits;
	int walks;
	int rbi;
};

int main(void)
{
	FILE * fp;
	struct player_log temp;
	struct player_log log[19];
	char * st;
	int initialise_count=0;
	for(;initialise_count<19;initialise_count++)
	{
		log[initialise_count].player_num=initialise_count;
		log[initialise_count].atbats=0;
		log[initialise_count].hits=0;
		log[initialise_count].walks=0;
		log[initialise_count].rbi=0;
	}
	printf("Enter the file name.\n");
	scanf("%s",st);
	if((fp=fopen(st,"r"))==NULL)
	{

		printf("Can't open %s \n",st);

				exit(EXIT_FAILURE);

	}
	initialise_count=0;
	while(fscanf(fp,"%d %s %s %d %d %d %d",&temp.player_num,temp.first,temp.last,&temp.atbats,&temp.hits,
	&temp.walks,&temp.rbi)==7)
	{
		if(temp.player_num>=0&&temp.player_num<=18)
		{
		strncpy(log[temp.player_num].first,temp.first,20);
		strncpy(log[temp.player_num].last,temp.last,20);
		log[temp.player_num].atbats+=temp.atbats;
		log[temp.player_num].hits+=temp.hits;
		log[temp.player_num].walks+=temp.walks;
		log[temp.player_num].rbi+=temp.rbi;
		}		
		initialise_count++;
	}
	fclose(fp);
	float ba[19];
	int index;
	for(index=0;index<=initialise_count;index++)
	{
		if(log[index].atbats!=0)
		ba[index]=((float)log[index].hits/(float)log[index].atbats);
	}
	int count=0;
	for(;count<=initialise_count;count++)
	{
		if(log[count].atbats!=0)
	printf("%d %s %s %d %d %d %d %.3f\n",log[count].player_num,log[count].first,log[count].last,log[count].atbats,
    log[count].hits,log[count].walks,log[count].rbi,ba[count]);
	}
	return 0;
}

