#include <stdio.h>

int main() {
	int i = 2, j= 3, k= 4;
	
	printf("%d, %d, %d\n", i & j, i | 1,k | j);
	
	/* & : effectue un ET bianire entre chaque bit ici :
		i=2=0b010 et j=3=0b011 donc i&j = 0b010 = 2
	   | : effectue un OU bianire entre chaque bit ici :
	   	k=4=0b100 et j=3=0b011 donc k|j = 0b111 = 7
	*/

	if (i && (j|k))
	
		/*
		Ici on effectue un OU entre deux séquences :
		 renvoi 0 si aucun 1 n'a été rencontré dans les deux séquences
		 renvoi 1 si un 1 a été rencontré dans une séquence 
		 */
		
		printf("ok");

	
	return (0);
}
