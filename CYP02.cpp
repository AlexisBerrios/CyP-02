
#include <stdio.h>
#include <string.h>


void main()
{

	
	int tamanoarch, posicion_pixel, a1=0000, a2=0000;
	char cad1[5];
	strcpy_s(cad1,4, "BM");
	

	scanf_s("%i", &tamanoarch);
	scanf_s("%i", &posicion_pixel);

	
	
	printf("%s%08X%04i%04i%08X", cad1, tamanoarch, a1, a2, posicion_pixel);
	
}

