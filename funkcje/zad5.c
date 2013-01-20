#include <stdio.h>

void rysujKwadrat(int w , int h)
{
	for(int i = 1; i <= h; i++)
	{
		for(int j = 1; j <= w; j++)
		{
			if(i == 1 || i == h)
			{
				putchar('*');
			}
			else
			{
				if(j == 1 || j == w)
				{
					putchar('*');
				}
				else
				{
					putchar(' ');
				}
			}
		}
		printf("\n");
	}
}

void grot(int h)
{
	for(int x = 1; x <= h: x++)
	{
		for(int i = 1; i <= h; i++)
		{
			for(int j = 1; j <= (h - i)>>1; j++)
			{
				putchar(' ');
			}
			putchar('*');
		}
		printf("\n");
	}

}

void linia(int h)
{

}

void rysujStrzalke(int hG, int hL)
{
	printf("rysuje strzaleke \n");
	if(hG % 2 == 0) hG -= 1;
	grot(hG);


	printf("koniec rysowania \n");			
}

int main()
{
	//rysujKwadrat(5,5);
	rysujStrzalke(5,5);
}
