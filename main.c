#include <stdio.h>
#include "stdlib.h"


struct Train {
    int Ligne;
    int Arret;
    struct Train * next_arret;
}Train;

char nom_arret[50];

struct Train* create_ligne (int ligne, int arret){
    struct Train* t = malloc(sizeof (struct Train));
    t->next_arret = NULL;

    printf("Combien de ligne voulez vous creez: \n");
    scanf("%d", &ligne);

    printf("Combien d'arret par ligne: \n");
    scanf("%d", &arret);

    ligne = Train.Ligne;
    arret = Train.Arret;

    return t;
}

void choix_arret(struct Train* t){

    printf("Ou voulez vous allez: \n");
    fgets(nom_arret, 50, stdin);

    int ligne_Arret;
    printf("Sur quelle ligne ce trouve cette arret: \n");
    scanf("%d", &ligne_Arret);


}



int main() {
    int a = 0;
    int b = 0;

    struct Train* Trajet = create_ligne(a,b);
    choix_arret(Trajet);
    printf("Le trajet le plus optimal pour aller a %s est: Ligne %d ou vous aurez %d d arret", nom_arret, Train.Ligne, Train.Arret );



    return 0;
}
