#include <stdio.h>

int main() {
    char ch[100];

    // Demander à l'utilisateur d'entrer une chaîne de caractères
    printf("Entrez une chaine de caracteres : ");
    fgets(ch, sizeof(ch), stdin);

    // Boucle pour parcourir chaque caractère de la chaîne
    for (int i = 0; ch[i] != '\0'; i++) {
        // Vérifier si le caractère est une majuscule (ASCII 65-90)
        if (ch[i] >= 'A' && ch[i] <= 'Z') {
            // Si oui, convertir en minuscule en ajoutant 32
            ch[i] = ch[i] + 32;
        } else if (ch[i] >= 'a' && ch[i] <= 'z') {
            // Si le caractère est une minuscule (ASCII 97-122), convertir en majuscule en soustrayant 32
            ch[i] = ch[i] - 32;
        }
    }

    // Afficher la chaîne résultante
    printf("Apres conversion : %s", ch);

    return 0;
}

