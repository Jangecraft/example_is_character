#include <stdio.h>
#include <conio.h>
#include <stdbool.h>

int main()
{
	char name[100];
	printf("Name : ");
	scanf("%s",name);
	
	//65-90 //97-122
	bool is_str = 1;
	int i = 0;
	char n = '0';
	while(n != NULL)
	{
		n = name[i];
		
		if(n == 0 || (n>=65 && n<=90) || (n>=97 && n<=122))
		{
			is_str = 1;
		}
		else
		{
			is_str = 0;
			break;
		}
		
		i++;
	}
	
	if(is_str)
	{
		printf("- pass\n");
	}
	else
	{
		printf("- not pass\n");
	}
	
	getch();
	return(0);
}
