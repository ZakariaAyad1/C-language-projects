#include <stdio.h>

int main () {
	int N1, N2, sum, i, j;

//remplissage du tableau 1
	printf("Entrer la taille de premier tableau: ");
	scanf("%d", &N1);
	int tab1[N1];

	for(i=1; i<N1+1;i++)	{
		printf("Entrer le %d 'eme valeur de ce tableau 1: ", i);	
		scanf("%d", &tab1[i]);
	}
	
	printf("\n");
//remplissage du tableau 
	printf("Entrer la taille de deuxieme tableau: ");
	scanf("%d", &N2);
	int tab2[N2];

	for(i=1; i<N2+1;i++)	{
		printf("Entrer le %d 'eme valeur de ce tableau 2: ", i);	
		scanf("%d", &tab2[i]);
	}
	printf("\n");
	
//calcule du somme shrtoumph
 	sum = 0;
	for(i=1; i<N1+1;i++){
		for(j=1; j<N2+1;j++){
			sum = sum +tab1[i]*tab2[j];
		}
	}
	
	printf("Le Schtroumpf est= %d", sum);



}
