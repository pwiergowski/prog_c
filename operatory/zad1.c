#include <stdio.h>

#define L_MIN 60

int main()
{
  int min,h;

  while(1) {
    printf("podaj liczbę minut większą od 0\n");
    scanf("%d",&min);

    if(min<=0)
      break;

    h=min/L_MIN;
    min-=h*L_MIN;
    printf("godzin: %d, minut: %d\n",h,min);
  }
}
