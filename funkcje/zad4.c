//zadanie 4.
#include <stdio.h>
#include <string.h>

void odwracanie(int n , char * buforOut)
{
  	char buforInp[10];
	int dlugosc = 0;
  	int i;
  
  	snprintf(buforInp,10+1,"%d",n);
	dlugosc = strlen(buforInp);  

  	for(i = 0 ; i < dlugosc ; i++)
   	{
      		buforOut[i]=buforInp[dlugosc - 1 - i];
    	}
}

int main()
{
	int a;
	char buforOut[10];
  	printf("Podaj liczbę calkowitą:");
  	scanf("%d",&a);
	odwracanie(a , buforOut);
  	printf("Podana liczba: %d. odwrotnosc: %s\n",a,buforOut);

  	return 0;
}
