//zadanie 2

#include <stdio.h>

int silnia(int n)
{
	int wynik=1;

	if(n == 0)
    	{
      		return 1;
    	}
  	else
    	{
      		for(int i = 1 ; i < n+1 ; i++)
		{
	  		wynik *= i;
		}
      		return wynik;
    	}
	return 0;
}

int main()
{
	for(int i = 0 ; i < 10 ; i++)
	{	
		printf("silnia %d jest rowna %d\n",i,silnia(i));
	}
	return 0;
}
