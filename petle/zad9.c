// zadanie 9 - mnozenie etiopskie

#include <stdio.h>

void razyDwa(int *x)
{
	*x *= 2;
}

void przezDwa(int *x)
{
	*x /= 2;
}

int multiplyE(int _podstawa , int _razy)
{
	int result = 0;
	int podstawa = _podstawa;
	int razy = _razy;

	while(podstawa >= 1)
	{
		if((podstawa & 1) != 0)
		{
			result += razy;
		}
		przezDwa(&podstawa);
		razyDwa(&razy);
	}
	return result;
}

int main()
{
	int podstawa = 0;
	int razy = 0;
	printf("Podstawa:");
	scanf("%d",&podstawa);
	printf("razy:");
	scanf("%d",&razy);
	printf("\n wynik: %d \n",multiplyE(podstawa,razy));
	return 0;
}
