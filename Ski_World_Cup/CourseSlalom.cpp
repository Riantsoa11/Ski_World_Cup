#include "CourseSlalom.h"
#include "Course.h"
#include <iostream>

using namespace std;

CourseSlalom::CourseSlalom(string nom, string date, Participation* participants) : Course(nom, date) {
    // Réinitialiser lesParticipants
    nbParticipants = 0;
    for (int i = 0; i < 100; i++) {
        lesParticipants[i] = nullptr;
    }

    // Ajouter le participant passé en argument
    if (participants != nullptr) {
        lesParticipants[nbParticipants++] = participants;
    }
}



void CourseSlalom::traitementDossards() {
    // Appliquer le classement des participants en utilisant la méthode privée
    classesLesParticipants();

    // Appeler la méthode d'attribution des dossards
    attribuerDossards();

    // Afficher la liste des participants après attribution des dossards
    afficherParticipants();
}

void CourseSlalom::attribuerDossards() {
	// Attribuer les dossards aux participants
	for (int i = 0; i < nbParticipants; i++) {
		lesParticipants[i]->setNumDossard(i + 1);
	}
	cout << "Dossards attribués aux participants pour la course de Slalom." << endl;

}

void CourseSlalom::classesLesParticipants() {
    // Tri manuel des participants en fonction de leur classement WCSL
    for (int i = 0; i < nbParticipants - 1; i++) {
        int minIndex = i;

        // Trouver l'indice du participant avec le plus petit classement WCSL à partir de i
        for (int j = i + 1; j < nbParticipants; j++) { 
            if (lesParticipants[j]->getCompetiteur()->getClassementWCSL() < lesParticipants[minIndex]->getCompetiteur()->getClassementWCSL()) {
            }
        }

        // Échanger les participants si minIndex a changé
        if (minIndex != i) {
            Participation* temp = lesParticipants[i];
            lesParticipants[i] = lesParticipants[minIndex];
            lesParticipants[minIndex] = temp;
        }
    }

    cout << "Participants classés selon le classement WCSL pour la course de Slalom." << endl;
}
