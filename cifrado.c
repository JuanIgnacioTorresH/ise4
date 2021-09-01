#include <stdio.h>
#include <ctype.h>
#include <string.h>

int validar(int argc, char *argv[]);
char* cifrar(char *text, char *key);

int main(int argc, char *argv[]) {

    if (validar(argc, argv)) {
        return 1;
    }

    int i= 0;
    int len= strlen (argv[1])+1;
    if (strlen (argv[1]) != 26 ) {
        printf ("Error: key debe tener 26 caracteres");
        return 1;
    }
    while (argv[1][i]!='\0') {
        if ( !isalpha (argv[1][i]) ) {
            printf ("Error: key solo puede tener letras");
            return 1;
        }
        i++;
    }
    i= 0;
    while (argv[1][i]!='\0'){
        for (int a=0; a<len; a+1){
            for (int q= a+1; q<len; q++){
                printf("Error: caracteres de la key no se pueden repetir");
                return 1;
            } 
        }
        i++;
    }

    return 0;
}

int validar(int argc, char *argv[]) {
    
    // TODO
}

char* cifrar(char *text, char *key) {

    // TODO
}