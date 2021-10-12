/* Exercice 4 */

#include <stdio.h>


int main() {

	int i, j, k, l;
	i = j = k= l = 0;
	while(i < 9) {
		printf("i++=%d, ++j=%d, k--=%d, --l=%d\n",i++, ++j, k--, --l);
		
		/* x++ ou x-- : renvoi x puis effectue l'opération d'inc/decrémentation
		   ++x ou --x : effectue l'opération d'inc/décrémentation puis renvoi x */
		
		/* Ainsi les valeurs de i et k affichées ne sont pas celles actuellement stockées dans les variables i et k ce sont les anciennes */
		
		/* alors que les valeurs de j et l sont les valeurs actualisées */
		
		/* mais dans tous les cas l'opération est bien effectuée sur la variable */
		
	}
	printf ("i=%d, j=%d, k=%d, l=%d\n", i, j, k, l);
	
	return (0);
	
}
