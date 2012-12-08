//zadanie 3

#include <stdio.h>
#include <stdbool.h>

bool czyLiczbaDoskonala(int x)
{
	double suma_dziel = 0;
	int i = 1;
  
  	while(i <= x/2)
	{
      		if(x%i==0)
		{
	  		suma_dziel+=i;
		}
      		i++;
    	}
     
  	if(x == suma_dziel)
    	{
      		return true;
    	}
      	return false;
}

int main()
{
	int i;

  	printf("Liczby doskonałe od 0 do 1000\n");

  	for(i=0 ; i < 1000 ; i++)
    	{
      		if(czyLiczbaDoskonala(i))
		{
	  		printf("%d ",i);
		}
    	}
  	printf("\n");
  	return 0;
}
