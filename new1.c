#include<stdio.h>
int main(void)
{
	int n,n_space,n_up,n_down;
	char ch;
	scanf("%c",&ch);
	for(n=0;n<5;n++)
	{
			for(n_space=0;n_space<=5-n;n_space++)
			{
				printf(" ");
			}
	        for(n_up=0;n_up<=n;n_up++)
			{
			printf("%c",ch+n_up);			
			}
			for(n_down=n-1;n_down>=0;--n_down)
			{
				printf("%c",ch+n_down);
	        }	
			printf("\n");
	}

 return 0;
}
