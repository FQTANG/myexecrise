#include "mylibrary.h"

struct names{
	char first[40];
	char last[40];
};
int mycomp(const void *p1,const void * p2);

int main(void)
{
	struct names player[9]={
	[0].first="Willson",[0].last="Contreras",
	[1].first="Anthony",[1].last="Rizzo",
	[2].first="Javier",[2].last="Baez",
	[3].first="Addison",[3].last="Russell",
	[4].first="Kris",[4].last="Bryant",
	[5].first="kyle",[5].last="Schwarber",
	[6].first="Albert",[6].last="Almora",
	[7].first="Jason",[7].last="Heyward",
	[8].first="Ben",[8].last="Zobrist"
	};
	int index=0;
	for(;index<9;index++)
		printf("%s %s\n",player[index].first,player[index].last);
	printf("after\n");
	qsort(player,9,sizeof(struct names),mycomp);
	for(index=0;index<9;index++)
		printf("%s %s\n",player[index].first,player[index].last);
	return 0;
}
int mycomp(const void *p1,const void * p2)
{
	const struct names *ps1=p1;
	const struct names *ps2=p2;
	int ret_val;
	ret_val=strcmp(ps1->last,ps2->last);
	if(ret_val!=0)
		return ret_val;
	else
		return strcmp(ps1->first,ps2->first);
}