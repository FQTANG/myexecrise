#include<stdio.h>
#include<ctype.h>
#define OVERTIME 40
#define RATE_1 0.15f
#define RATE_2 0.20f
#define RATE_3 0.25f
#define SALARY_1 8.75f
#define SALARY_2 9.33f
#define SALARY_3 10.00f
#define SALARY_4 11.20f
int main(void)
{
	char i;
	float i_1,i_2;
	int i_3;
	i='6';
    i_3=1;
    a:;	
	printf("**************************************************************************\n");
	printf("Enter the number corrsponding to the desired pay rate or action\n");
	printf("1)8.75/hr                           2)$9.33/hr\n");
	printf("3)10.00/hr                          4)$11.20/hr\n");
	printf("5)quit                                         \n");
	printf("**************************************************************************\n");
	while(i!='5')
	{
    i=getchar();
	if(i_3==1)
	{
	switch(i)
	{
		case('1'):
		        printf("Enter your work time\n");
		        scanf("%f",&i_1);
		        if(i_1>40)
				{
					i_2=1.5*SALARY_1*(i_1-40)+40*SALARY_1;
					if(i_2>=300&i_2<=450)
					{
						i_2-=(300*RATE_1+(i_2-300)*RATE_2);
					}
					if(i_2<300)
					{
					 i_2-=i_2*RATE_2;
					}
					if(i_2>=450)
					{
						i_2-=(300*RATE_1+150*RATE_2+(i_2-450)*RATE_3);
					}
				}
                else
                {
					i_2=i_1*SALARY_1;
					if(i_2>=300&i_2<=450)
					{
						i_2-=(300*RATE_1+(i_2-300)*RATE_2);
					}
					if(i_2<300)
					{
					 i_2-=i_2*RATE_2;
					}
					if(i_2>=450)
					{
						i_2-=(300*RATE_1+150*RATE_2+(i_2-450)*RATE_3);
					}
				}
                printf("%.2f\n",i_2);
				i_3++;
                break;
        case '2':
                printf("Enter your work time\n");
		        scanf("%f",&i_1);
		        if(i_1>40)
				{
					i_2=1.5*SALARY_2*(i_1-40)+40*SALARY_2;
					if(i_2>=300&i_2<=450)
					{
						i_2-=(300*RATE_1+(i_2-300)*RATE_2);
					}
					if(i_2<300)
					{
					 i_2-=i_2*RATE_2;
					}
					if(i_2>=450)
					{
						i_2-=(300*RATE_1+150*RATE_2+(i_2-450)*RATE_3);
					}
				}
                else
                {
					i_2=i_1*SALARY_2;
					if(i_2>=300&i_2<=450)
					{
						i_2-=(300*RATE_1+(i_2-300)*RATE_2);
					}
					if(i_2<300)
					{
					 i_2-=i_2*RATE_2;
					}
					if(i_2>=450)
					{
						i_2-=(300*RATE_1+150*RATE_2+(i_2-450)*RATE_3);
					}
				}
                printf("%.2f\n",i_2);
				i_3++;
                break;
          case '3':
                printf("Enter your work time\n");
		        scanf("%f",&i_1);
		        if(i_1>40)
				{
					i_2=1.5*SALARY_3*(i_1-40)+40*SALARY_3;
					if(i_2>=300&i_2<=450)
					{
						i_2-=(300*RATE_1+(i_2-300)*RATE_2);
					}
					if(i_2<300)
					{
					 i_2-=i_2*RATE_2;
					}
					if(i_2>=450)
					{
						i_2-=(300*RATE_1+150*RATE_2+(i_2-450)*RATE_3);
					}
				}
                else
                {
					i_2=i_1*SALARY_3;
					if(i_2>=300&i_2<=450)
					{
						i_2-=(300*RATE_1+(i_2-300)*RATE_2);
					}
					if(i_2<300)
					{
					 i_2-=i_2*RATE_2;
					}
					if(i_2>=450)
					{
						i_2-=(300*RATE_1+150*RATE_2+(i_2-450)*RATE_3);
					}
				}
                printf("%.2f\n",i_2);
				i_3++;
                break;						
          case '4':
                printf("Enter your work time\n");
		        scanf("%f",&i_1);
		        if(i_1>40)
				{
					i_2=1.5*SALARY_4*(i_1-40)+40*SALARY_4;
					if(i_2>=300&i_2<=450)
					{
						i_2-=(300*RATE_1+(i_2-300)*RATE_2);
					}
					if(i_2<300)
					{
					 i_2-=i_2*RATE_2;
					}
					if(i_2>=450)
					{
						i_2-=(300*RATE_1+150*RATE_2+(i_2-450)*RATE_3);
					}
				}
                else
                {
					i_2=i_1*SALARY_4;
					if(i_2>=300&i_2<=450)
					{
						i_2-=(300*RATE_1+(i_2-300)*RATE_2);
					}
					if(i_2<300)
					{
					 i_2-=i_2*RATE_2;
					}
					if(i_2>=450)
					{
						i_2-=(300*RATE_1+150*RATE_2+(i_2-450)*RATE_3);
					}
				}
                printf("%.2f\n",i_2);
				i_3++;
                break;		                  					
           case  '5':
		          printf("bye\n");
				  break;
				  default:printf("false\n");
				          i_3++;
						  continue;
	}
	}
	else 
	i_3--;
     goto a;	
    }
	
	printf("thank you\n");
 return 0;
}
