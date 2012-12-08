// zadanie 6

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>

bool czyDobrze(int a, int b, int wynik)
{
	if(wynik == a * b)
    	{
      		return true;
    	}
  	else
    	{
      		return false;
    	}
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
  	int wynik , a , b , dobreOdpowiedzi = 0;
    
  	for(int i = 0 ; i < 5 ; i++)
    	{
      		printf("\n");
		a = losuj(1,10);
      		b = losuj(1,10);
      		printf("Ile to jest %d * %d ?\n",a,b);
      		scanf("%d",&wynik);

      		if(czyDobrze(a,b,wynik))
		{
			printf("Bardzo dobrze!, ¦wietnie, Dobra robota!");
			dobreOdpowiedzi++;
		}
		else
		{
			printf("Z³a odpowied¼, Oj, niedobrze, Nastêym razem mo¿e póie Ci lepiej");
		}
      	}
      
     
  	printf("\n");
  	printf("%d dobrych odpowiedzi na 5 pytan \n",dobreOdpowiedzi);

	return 0;
}
