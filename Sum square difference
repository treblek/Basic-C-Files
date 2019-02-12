#include "stdio.h"
int karelerinToplami(int,int);
int toplamlarinKaresi(int,int);
int ustAlmaFonksiyonu(int);
int main(void)
{
	int ilkSayi,ikinciSayi;
	printf("First Number");
	scanf("%d",&ilkSayi);
	printf("Second Number");
	scanf("%d",&ikinciSayi);
	int farkSonuc=karelerinToplami(ilkSayi,ikinciSayi)-toplamlarinKaresi(ilkSayi,ikinciSayi);
	printf("%d",farkSonuc);
	return -1;
}

int karelerinToplami(int ilkSayi,int ikinciSayi)
{
	int donguDegiskeni,alternatifDegisken=0;
	for(donguDegiskeni = ilkSayi;donguDegiskeni<=ikinciSayi;donguDegiskeni++)
	{
		alternatifDegisken +=ustAlmaFonksiyonu(donguDegiskeni);
	}
	return alternatifDegisken;
}
int toplamlarinKaresi(int ilkSayi,int ikinciSayi)
{
	int donguDegiskeni,alternatifDegisken=0;
	for(donguDegiskeni=ilkSayi;donguDegiskeni<=ikinciSayi;donguDegiskeni++)
	{
		alternatifDegisken +=donguDegiskeni;
	}
	return ustAlmaFonksiyonu(alternatifDegisken);
}
int ustAlmaFonksiyonu(int gonderilenSayi)
{
	return gonderilenSayi*gonderilenSayi;
	/*int donguDegiskeni,gonderilecekSayi=1;
	for(donguDegiskeni = 2;donguDegiskeni<=gonderilenSayi;donguDegiskeni++)
	{
		gonderilecekSayi*=donguDegiskeni;
	}*/
}
