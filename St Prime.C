#include "stdio.h"
int asalBulmaFonksiyonu(int);
int asalKontrol(int);

int main(void)
{
	int girilenSayi;
	printf("Enter a number.");
	scanf("%d",&girilenSayi);
	printf("%d. prime number is %d",girilenSayi,asalBulmaFonksiyonu(girilenSayi));
	return -1;
}

int asalBulmaFonksiyonu(int istenilenAsal)
{

	int donguDegiskeni,alternatifDegisken=0,gonderilecekSayi;
	for(donguDegiskeni=2;alternatifDegisken!=istenilenAsal;donguDegiskeni++)
	{
		if(asalKontrol(donguDegiskeni) == 1)
			alternatifDegisken++;
		gonderilecekSayi = donguDegiskeni;
	}
	return gonderilecekSayi;
}

int asalKontrol(int gonderilenSayi)
{
	int donguDegiskeni,flagDegiskeni=0;
	for(donguDegiskeni =2;donguDegiskeni<=gonderilenSayi/2;donguDegiskeni++)
	{
		if(gonderilenSayi%donguDegiskeni==0)
		flagDegiskeni =1;
	}
	if(flagDegiskeni==1)
	return 0;
	else
	return 1;
}
