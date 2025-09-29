#include <stdio.h>
#include <stdlib.h>
#include <string.h>

const char* contem_string(const char *str, const char *str2) {
    if (str == NULL || str2 == NULL) {
        return NULL;
    }

    const char *p1 = str;
    const char *p2 = str2;

    while (*p1 != '\0') {
        const char *inicio = p1;
        p2 = str2;

        while (*p1 != '\0' && *p2 != '\0' && *p1 == *p2) {
            p1++;
            p2++;
        }

        if (*p2 == '\0') {
            return inicio; 
        }

        p1 = inicio + 1; 
    }

    return NULL; 
}

int main(){
    /*
    Exercicio 1
    const char *texto = "O rato roeu a roupa do rei de Roma.";
    const char *string2 = "roupa";  

    if (contem_string(texto, string2)) {
        printf("A string \"%s\" foi encontrada em \"%s\".\n", string2, texto);
    } else {
        printf("A string \"%s\" não foi encontrada em \"%s\".\n", string2, texto);
    }

    
    Exercicio 2
    */

return 0;
}