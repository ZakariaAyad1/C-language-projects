#include <stdio.h>

int main(){
	
	int N,i,sum;

	printf("entrer la taille du tableau");
	scanf("%d", &N);
	
	
	int tableau[N];
	
	i=0;
	sum=0;
	while(i<N){
		printf("entrer la %d eme valeur", i);
		scanf("%d", &tableau[i]);
	
					
		if (tableau[i] % 2 == 1) {
			sum= sum + tableau[i];
		}	
			
		i= i+1;
	}
	
	printf("la somme des elements impaires est: %d ", sum);
	
	return 0;
}
