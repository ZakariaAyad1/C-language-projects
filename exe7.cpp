#include <stdio.h>

int main() {
	
	int i,N,t;
	
	printf("entrer l taille du tableau à trier: ");
	scanf("%d", &N);
	
	int tab[N];
		
	for(i=0; i<N; i++){
		printf("Entrer le %d element du tableau:  ");
		scanf("%d", &tab[i]);
	}
	
	for(int pass=0; pass<N; pass++){

		for(i=0; i<N; i++){
			while(tab[i]>tab[i+1]){
				t=tab[i];
				tab[i]=tab[i+1];
				tab[i+1]=t;
			}
			
		}
	}	
	
	printf("le nouveau tableau trié est:\n");
	for(i=0; i<N; i++){
		printf("%d ", tab[i]);
	}
}
