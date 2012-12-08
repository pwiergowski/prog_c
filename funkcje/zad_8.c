// zadanie 6

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>

bool sprawdz(int a, int b)
{
	bool koniec = false;
	if(a > b)
    	{
      		printf("Za duzo");
    	}
  	else if(a == b)
    	{
      		printf("gratz zgadles");
		koniec = true;
    	}
	else if(a < b)
	{
		printf("Za malo");
	}
	return koniec;
}

int losuj(int min, int max)
{
	if(max >= min)
	{
    		max -= min;
	}
	else
  	{
		int tmp = 0;
     		tmp = min - max;
		min = max;
      		max = tmp;
    	}
	return max ? (rand() % max + min) : min;
}

int main()
{
  	int wylosowana = losuj(1 , 100);
	int gracz = 0;

	printf("Twoja liczba: ");
	scanf("%d",&gracz);
    
  	while(!sprawdz(gracz , wylosowana))
    	{
      		printf("\nTwoja liczba: ");
		scanf("%d",&gracz);
      	}
     
  	return 0;
}
