#include <stdio.h>

void cambiar_pos(int *n1, int *n2)
{
    // Cmabia las posiciones de n1 y n2
    int temp = *n1;
    *n1 = *n2;
    *n2 = temp;
}

void bubbleSort(int vector_entrada[], int n)
{
    // revisa cada elemento con el siguiente,
    // intercambiandolos si estan en el orden equivocado
    int i, j;
    for (i=0; i < n-1; i++)
    {
        for (j=0; j < n-i-1; j++)
        {
            if (vector_entrada[j] < vector_entrada[j+1])
            {
                cambiar_pos(&vector_entrada[j], &vector_entrada[j+1]);
            }
        }
    }
}

void printArray(int vector_entrada[], int size)
{
    // imprime el array
    int i;
    for (i=0; i < size; i++)
        printf("%d ", vector_entrada[i]);
    printf("fin del ordenamiento de burbuja. \n");
}

int main()
{
    int vector_entrada[] = {85,26,87,75,66,12,1,5,82,100,4};
    int n = sizeof(vector_entrada)/sizeof(vector_entrada[0]);
    bubbleSort(vector_entrada, n);
    printf("Arreglo ordenado = \n");
    printArray(vector_entrada, n);
    printf("\n");

    // si llega hasta aqui la compilacion fue exitosa
    return 0;
}