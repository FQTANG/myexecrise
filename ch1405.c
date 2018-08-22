#include <stdio.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>
#define CSIZE 4
struct names{
	char first[20];
	char family[20];
};
struct student{
	struct names name;
	float grade[3];
	float average;
};
void get_information(struct student * class);
void calculate_average(struct student *class);
void print_student(struct student *class);
void print_final_average(struct student * class);

int main(void)
{
	struct student class4[CSIZE];
	get_information(class4);
	calculate_average(class4);
	print_student(class4);
	print_final_average(class4);
}
void get_information(struct student * class)
{
	int i;
	for(i=0;i<4;i++)
	{
		printf("Now enter student Name:\n");
		scanf("%s %s",&(class[i].name.first),&(class[i].name.family));
	}
	for(i=0;i<4;i++)
	{
		printf("Now enter grade:\n");
		printf("%s %s\n",class[i].name.first,class[i].name.family);
		scanf("%f %f %f",&(class[i].grade[0]),&(class[i].grade[1]),&(class[i].grade[2]));
	}
	return;
}
void calculate_average(struct student *class)
{
	int i;
	for(i=0;i<4;i++)
	class[i].average=(class[i].grade[0]+class[i].grade[1]+class[i].grade[2])/3;
	return;
}
void print_student(struct student *class)
{
	int i;
	for(i=0;i<4;i++)
	{
		printf("%s %s\n",class[i].name.first,class[i].name.family);
		printf("%.2f %.2f %.2f\n",class[i].grade[0],class[i].grade[1],class[i].grade[2]);
		printf("%.2f\n",class[i].average);
	}
	return;
}
void print_final_average(struct student * class)
{
	int i;
	float temp=0;
	for(i=0;i<4;i++)
	{
		temp+=class[i].average;
	}
	printf(" final %.2f\n",temp/4);
}