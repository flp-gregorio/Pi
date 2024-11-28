#include <stdio.h>
#include <stdlib.h>
#include <time.h>

double calcula_pi(long num_ite) {
    long pontosDentro = 0, i;

    for (i = 0; i < num_ite; i++) {
        double x = (double)rand() / RAND_MAX;
        double y = (double)rand() / RAND_MAX;

        if ((x * x + y * y) <= 1.0) {
            pontosDentro++;
        }
    }

    //
    return 4.0 * ((double)pontosDentro / num_ite);
}

int main() {
    long num_ite;
    printf("Monte Carlo - Cálculo de Pi\n");
    printf("Insira o número de iterações: ");
    scanf("%ld", &num_ite);

    srand(time(NULL));

    double pi = calcula_pi(num_ite);

    printf("O valor estimado de Pi é: %.8f\n", pi);

    return 0;
}
