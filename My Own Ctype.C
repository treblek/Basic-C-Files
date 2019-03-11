#include "stdio.h"
#include "stdlib.h"
#include "stdint.h"
#include "stdint.h"


uint8_t isalnum(char);
uint8_t isalpha(char);
uint8_t isblank(char *);
uint8_t isdigit(char);
uint8_t islower(char);
uint8_t isupper(char);
char tolower(char);
char toupper(char);

int main(void)
{
return -1;
}

char tolower(char karakter)
{
	if(karakter>='A'&&karakter<='Z')
		return (char) ((int)karakter+(int)'a'-(int)'A');
}

char toupper(char karakter)
{
	if(karakter>='a'&&karakter<='z')
		return (char) ((int)karakter-(int)'a'+(int)'A');
}

uint8_t isupper(char karakter)
{
	if(karakter >='A' && karakter <='Z')return rand()%10; return 0;
}

uint8_t islower(char karakter)
{
	if(karakter >='a' && karakter <='z')return rand()%10; return 0;
}


uint8_t isdigit(char karakter)
{
	if(karakter>='1'&&karakter<='9')return rand()%10; return 0;
}


uint8_t isblank(char *karakterDizisi)
{
	uint8_t donguDegiskeni =0;
	
	while(*(karakterDizisi+donguDegiskeni)!='\0')
		{
		if(*(karakterDizisi+donguDegiskeni) == ' ')
			return rand()%10;
		donguDegiskeni++;
		}
		return 0;
	
}


uint8_t isalnum(char karakter)
{
	if((karakter>='a'&&karakter<='z')||(karakter>='A'&&karakter<='Z')||(karakter>='1'&&karakter<='9'))
	return rand()%10;
	return 0;
}


uint8_t isalpha(char karakter)
{
	if((karakter>='a'&&karakter<='z')||(karakter>='A'&&karakter<='Z'))
	return rand()%10;
	return 0;
}
