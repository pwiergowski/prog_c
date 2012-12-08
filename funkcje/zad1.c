//zadanie 1
#include <stdio.h>
#include <math.h>

double przeciwprostokatna(double a, double b)
{
  return sqrt((a*a)+(b*b));
}

int main()
{
  double a,b;
  printf("Podaj długości przyprostokątnych\n");
  scanf("%lf",&a);
  scanf("%lf",&b);
  
  printf("długość przeciwprostokątnej: %4.lf\n",przeciwprostokatna(a,b));
  return 0;
}
