#include <stdlib.h>
#include <complex.h>
#include <assert.h>

/**
   Ajouter la fonction de comparaison du tri ici
*/

int compare (const void * a, const void * b){
  if (carg((double complex)(*(double complex*)a)) > carg((double complex)(*(double complex*)b)))
    return 1 ;
  return -1 ;
}

const int TAILLE = 100;

int main(void)
{
    /* initialisation du tableau */
    double complex tableau[TAILLE];
    srand48(123456);
    for(int i = 0; i < TAILLE; i++) {
        tableau[i] = drand48() + (drand48() * 1.0i);
    }

    /**
       Mettre le code d'appel de qsort ici
    */
    qsort (tableau, TAILLE, sizeof(double complex), compare);
    /**
       Vérification du tri
    */
    for(int i = 0; i < TAILLE - 1; i++) {
        assert(carg(tableau[i]) <= carg(tableau[i+1]));
    }

    return EXIT_SUCCESS;
}
