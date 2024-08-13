#include <stdio.h>  // funções de entrada/saída
#include <math.h>    // funções matemáticas
#include <stdlib.h> // funções de uso geral
#include <string.h> // funções para uso de strings
#include <stdbool.h>

int main() 
{
    int valorx, resultado;
    
    // NOTAS 100, 50, 10, 5, 1
    int notas[5] = { 100, 50, 10, 5, 1 };
    
    printf("Digite o valor: ");
    scanf("%d", &valorx);

    // Verifica se o valor é válido
    if (valorx < 0) {
        printf("Valor inválido. Por favor, digite um valor não negativo.\n");
        return 1;
    }
    
    printf("Notas do troco:\n");

    // Calcula o número de cada nota
    for (int i = 0; i < 5; i++)
    {
        resultado = valorx / notas[i];  // Calcula o número de notas i
        if (resultado > 0) {
            printf("Nota %d: %d\n", notas[i], resultado);
            valorx %= notas[i];  // Atualiza o valor restante
        }
    }

}