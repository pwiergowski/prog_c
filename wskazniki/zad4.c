#include <stdio.h>

void getValues(int *tab)
{
  printf("Podaj 10 liczb\n");
  
  for(int i=0;i<10;i++)
    {
      scanf("%d",&tab[i]);
    }
}
	
int substract(int *tab)
{
  int min, max=0;
  
  for(int i=0;i<10;i++)
    {
      if(tab[i]>max)
	max=tab[i];
    }

  min=max;

  for(int i=0;i<10;i++)
    {
      if(tab[i]<min)
	min=tab[i];
    }

  return (max-min);

}

int main()
{
  int tab[10];
  int *point=tab;

  getValues(point);
  printf("Wynik: %d\n",substract(point));
 
}
