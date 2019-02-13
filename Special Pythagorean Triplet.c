#include <stdio.h>

int main(void)
{
	int birinciSayi,ikinciSayi,ucuncuSayi;
	
		for(birinciSayi = 1;birinciSayi<=1000;birinciSayi++)
		{
			for(ikinciSayi=1;ikinciSayi<=1000;ikinciSayi++)
			{
				for(ucuncuSayi=1;ucuncuSayi<=1000;ucuncuSayi++)
				{
					if(birinciSayi*birinciSayi+ikinciSayi*ikinciSayi == ucuncuSayi*ucuncuSayi)
					{
						if(birinciSayi+ikinciSayi+ucuncuSayi==1000)
						{
							if(birinciSayi<ikinciSayi&&ikinci<ucuncuSayi&&birinciSayi<ucuncuSayi)
              {
              printf("%d-%d-%d\n",birinciSayi,ikinciSayi,ucuncuSayi);
              }
						}
					}
				}
			}
		}
		return -1;
	}
	
