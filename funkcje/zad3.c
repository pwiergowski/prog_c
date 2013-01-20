//zadanie 3

#include <stdio.h>
#include <stdbool.h>
#include <time.h>

bool czyLiczbaDoskonala(long long x)
{
	double suma_dziel = 0;
	long long i = 1;
  	long long polowaX = x>>1;
  	while(i <= polowaX)
	{
      		if(x % i == 0)
		{
	  		suma_dziel += i;
		}
      		i++;
		if(suma_dziel > x) return false;
    	}
	if(suma_dziel == x)
	{
		return true;
	}
	else
	{
		return false;
	}
}

int main()
{
	long long i;
	long beginTime = time(0);
	
	printf("Rozpoczecie czas: %ld \n",beginTime);

  	printf("Liczby doskonałe od 0 do 100000000\n");

  	for(i = 2 ; i < 100000000 ; i += 2)
    	{	
		bool wynik = czyLiczbaDoskonala(i);	
      		if(wynik)
		{
	  		printf("%lld \n",i);
		}
    	}
  	printf("\n");

	printf("Obliczono w czasie: %ld",time(0)-beginTime);

  	return 0;
}
