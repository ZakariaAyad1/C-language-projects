#include <stdio.h>

int main(){
	
	int max, min, i, N;
	float avg;
	
	printf("Entrer la longueur du tableau \n");
	scanf("%d", &N);
	
	int tableau[N];
	max=0;
	min=0;
	avg=0;
	i=0;
	
	while(i<N){
		printf("entrer le %d eme element",i);
		scanf("%d", &tableau[i]);
		
		avg = avg + tableau[i];
		
		if(max<tableau[i]){
			max = tableau[i];}
		
		if(min>tableau[i]){
			min = tableau [i];}
	i++;
		
	}
	
	avg = avg/N;
	printf("le max est: %d le min est: %d la moyenne est %f", max, min, avg);
	
	return 0;
}
