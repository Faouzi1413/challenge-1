#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
int age;
char  sexe, email[50] , nom [20] ;
printf ("veuillez enrter le nom");
scanf ("%s",nom);
printf ("veuillez entrer l'age :");
scanf ("%d", &age);
printf ("veuillez entre le sexe :");
scanf ("%s", sexe);
printf ("veuillez entrer l'adress email");
scanf ("%s", email);

printf ("le nom est : %S \n ",nom);
printf ("l'age est : %d \n",age);
printf ("le sexe est : \n",sexe);
printf ("l'adress email est :\n",email);


return 0 ;
}
