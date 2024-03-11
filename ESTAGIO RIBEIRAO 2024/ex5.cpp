#include <stdio.h>
#include <string.h>

void inverterString(char *str) {
	
    int cont, fim = strlen(str) - 1;
    char temp;
    
    for (cont = 0; cont < strlen(str)/2; cont++) {
    	
    	temp = str[cont];
        str[cont] = str[fim];
        str[fim] = temp;
        fim--;
    	
	}
    
}

int main() {
	
    char str[100];

    printf("Frase: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0';

    inverterString(str);

    printf("Frase invertida: %s", str);

    return 0;
    
}

