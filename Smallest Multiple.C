#include "stdio.h"

int main(void)
{
	int sayiDegiskeni=1,donguDegiskeni = 0,flagDegiskeni =1;
	while(flagDegiskeni !=0)
	{
		flagDegiskeni = 0;
		for(donguDegiskeni =1;donguDegiskeni <=20;donguDegiskeni++)
		{
			if(sayiDegiskeni%donguDegiskeni!=0)
			{
				flagDegiskeni =1;
			}
		}
		sayiDegiskeni++;
	}
	printf("%d",sayiDegiskeni);
	return -1;
}
