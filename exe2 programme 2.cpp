#include <stdio.h>

int isPalindrome(char *str) {
    int len = 0;
    while (str[len] != '\0') {
        len++;
    }

    int i, j;

    // Parcourir les caractères de la chaîne en ignorant les espaces et les tabulations
    for (i = 0, j = len - 1; i < j; i++, j--) {
        while (str[i] == ' ' || str[i] == '\t') {
            i++;
        }
        while (str[j] == ' ' || str[j] == '\t') {
            j--;
        }

        if (str[i] != str[j]) {
            return 0; // La chaîne n'est pas un palindrome
        }
    }

    return 1; // La chaîne est un palindrome
}

int main() {
    char str[1000];

    // Demander à l'utilisateur d'entrer une chaîne
    printf("Entrez une chaine de caracteres : ");
    scanf("%[^\n]s", str); // Lire toute la ligne jusqu'à la nouvelle ligne

    // Vérifier si la chaîne est un palindrome
    if (isPalindrome(str)) {
        printf("La chaine est un palindrome.\n");
    } else {
        printf("La chaine n'est pas un palindrome.\n");
    }
    return 0;
}

