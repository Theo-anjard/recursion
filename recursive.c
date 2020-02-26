#include <stdio.h>
long int factorielle(long int valeur)
{
   if (valeur == 0)
      return 1;
   else
      return valeur * factorielle(valeur - 1);
}
int main()
{
	long int nb;
	printf("Entrez un nombre pour créer sa factorielle : ");
	scanf("%ld/n",&nb);
	printf("%ld\n",factorielle(nb));
return 0;
}
