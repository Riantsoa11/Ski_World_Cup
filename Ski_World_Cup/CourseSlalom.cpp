#include "CourseSlalom.h"
#include "Course.h"
#include <iostream>

using namespace std;

CourseSlalom::CourseSlalom(string nom, string date) : Course(nom, date) {
    // Initialisation sp�cifique � la course de Slalom, si n�cessaire
}

void CourseSlalom::traitementDossards() {
    // Appliquer le classement des participants en utilisant la m�thode priv�e
    classesLesParticipants();

    // Appeler la m�thode d'attribution des dossards
    attribuerDossards();

    // Afficher la liste des participants apr�s attribution des dossards
    afficherParticipants();
}

void CourseSlalom::attribuerDossards() {
    // Cette m�thode attribue les dossards aux participants
    for (int i = 0; i < nbParticipants; i++) {
        lesParticipants[i]->setNumDossard(i + 1); // Dossard assign� dans l'ordre du classement
    }
    cout << "Dossards attribu�s aux participants de la course de Slalom." << endl;
}

void CourseSlalom::classesLesParticipants() {
    // Tri manuel des participants en fonction de leur classement WCSL
    for (int i = 0; i < nbParticipants - 1; i++) {
        int minIndex = i;

        // Trouver l'indice du participant avec le plus petit classement WCSL � partir de i
        for (int j = i + 1; j < nbParticipants; j++) { 
            if (lesParticipants[j]->getCompetiteur()->getClassementWCSL() < lesParticipants[minIndex]->getCompetiteur()->getClassementWCSL()) {
            }
        }

        // �changer les participants si minIndex a chang�
        if (minIndex != i) {
            Participation* temp = lesParticipants[i];
            lesParticipants[i] = lesParticipants[minIndex];
            lesParticipants[minIndex] = temp;
        }
    }

    cout << "Participants class�s selon le classement WCSL pour la course de Slalom." << endl;
}
