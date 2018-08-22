#include<stdio.h>
#include<stdlib.h>
int *make_array(int elem,int val);
void show_array(const int arc[],int n);

int main(void)
{
	int *pa;
	int size;
	int value;
	printf("Enter the number of elements:");
	while(scanf("%d",&size)==1&&size>0)
	{
		printf("Enter the initialization value:");
		scanf("%d",&value);
		pa=make_array(size,value);
		if(pa)
		{
			show_array(pa,size);
			free(pa);
		}
			printf("Enter the number of elements(<1 to quit):");
	}
	printf("Done.\n");
	return 0;
}
int *make_array(int elem,int val)
{
	int * array=NULL;
	int count;
	array=(int *)malloc(elem*sizeof(int));
	for(count=0;count<elem;count++)
		array[count]=val;
	return array;
}
void show_array(const int arc[],int n)
{
	int count_num,count_col=0;
	for(count_num=0;count_num<n;count_num++)
	{
		printf("%d ",arc[count_num]);
		count_col++;
		if(count_col%8==0)
		{
			printf("\n");
		}
	}
	return;
}