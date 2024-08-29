int main(int argc, char const *argv[])
{
    int tam;
    printf("Vector size: ");
    scanf("%d", &tam);

    if (tam <= 0) 
    {
        printf("Invalid value.");
        return 1;
    }

    int vetor[tam];
    int vetor2[tam];

    for (int i = 0; i < tam; i++)
    {
        printf("Element [%d] : ", i);
        scanf("%d", &vetor[i]);
    }
    

    // Copy contents of sourceVector to destinationVector
    int index = vectorCopy(vetor, vetor2, tam);

    // Print destinationVector to verify the copy
    printf("Contents of destination vector:\n");
    for (int i = 0; i < tam; i++)
    {
        printf("[%d] = %d ;", i, vetor2[i]);
    }
    printf("\n");

    return 0;
}

int vectorCopy(int *vector, int *vector2, int tam)
{
    int *ptr1 = vector;
    int *ptr2 = vector2;

    for (int i = 0; i < tam; i++)
    {
         *ptr2 = *ptr1; // Use pointer arithmetic to copy elements
         ptr1++;
         ptr2++;
    }
    return vector2;
}