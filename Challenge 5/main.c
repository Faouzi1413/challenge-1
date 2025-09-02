#include <stdio.h>
#include <stdlib.h>



int main()
{
float C ;

printf ("veuillez donner le temperateur en celsius :\n");
scanf ("%f", &C);

if ( C < 0 )
printf ("l'ettat de l'eau a cette temperateur solide .\n");
else if ( C <= 0 && C < 100 )
printf ("l'etat de l'eau a cette temperateur liquide. \n");
else 
printf ("l'etat de l'eau a cette temprateur gaz . \n");

	
	return 0;
}