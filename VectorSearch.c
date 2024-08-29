#include <stdio.h>

int searchValue(int vetor[], int tam, int valSearched) 
{
    int *srcVet = vetor; // Initialize pointer to the start of the array
    for (int i = 0; i < tam; i++)
    {   
        if (valSearched == *srcVet) { // Dereference the pointer to get the value
            return i; // Return the index if value is found
        }
        srcVet++; // Move the pointer to the next element
    }
    return -1; // Return -1 if the value is not found
}

int main(int argc, char const *argv[])
{
    int tam, procura;
    printf("Vector size: ");
    scanf("%d", &tam);

    if (tam <= 0) 
    {
        printf("Invalid value.");
        return 1;
    }

    int vetor[tam];

    for (int i = 0; i < tam; i++)
    {
        printf("Element [%d] : ", i);
        scanf("%d", &vetor[i]);
    }
    
    printf("Searched value: ");
    scanf("%d", &procura);
    
    int index = searchValue(vetor, tam, procura);
    if (index != -1) {
        printf("Value found at index %d\n", index);
    } else {
        printf("Value not found\n");
    }
    return 0;
}