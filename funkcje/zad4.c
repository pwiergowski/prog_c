//zadanie 4.
#include <stdio.h>


char * palindrom(int n)
{
	int dlugosc = 0;
	int tmpN = n;
	while(tmpN > 0)
	{
		tmpN = tmpN / 10;
		dlugosc++;
	}

	printf("dlugość %d \n",dlugosc);	
	
  	char buforInp[dlugosc];
	char buforOut[dlugosc];
  	int i;
  
  	snprintf(buforInp,dlugosc+1,"%d",n);
  
  	for(i = 0 ; i < dlugosc ; i++)
    	{
		printf("inp char at %d = %c \n",i,buforInp[dlugosc - 1 - i]);
      		buforOut[i]=buforInp[dlugosc - 1 - i];
		printf("out char at %d = %c \n",i,buforOut[i]);
    	}

  	sscanf(buforOut,"%d",&i);

  	return &buforOut;
}

int main()
{
  int a;
  printf("podaj liczbę calkowitą\n");
  scanf("%d",&a);
  printf("Podana liczba: %d. Palindrom: %s\n",a,palindrom(a));

  return 0;
}
