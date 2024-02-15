#include <stdio.h>

int countWords(char *text) {
    int count = 0;
    int isWord = 0; // Indicateur pour savoir si le caractère précédent était une lettre

    // Parcourir chaque caractère de la chaîne
    for (int i = 0; text[i] != '\0'; i++) {
        // Vérifier si le caractère est une lettre (alphabétique)
        if ((text[i] >= 'a' && text[i] <= 'z') || (text[i] >= 'A' && text[i] <= 'Z')) {
            if (!isWord) {
                // Si le caractère précédent n'était pas une lettre, alors on a un nouveau mot
                count++;
                isWord = 1; // Mettre à jour l'indicateur
            }
        } else {
            // Si le caractère n'est pas une lettre, réinitialiser l'indicateur
            isWord = 0;
        }
    }

    return count;
}

int main() {
    char text[1000];

    // Demander à l'utilisateur d'entrer un texte
    printf("Entrez un texte : ");
    scanf("%[^\n]s", text); // Lire toute la ligne jusqu'à la nouvelle ligne

    // Calculer le nombre de mots
    int numWords = countWords(text);

    // Afficher le résultat
    printf("Nombre de mots : %d\n", numWords);

    return 0;
}

