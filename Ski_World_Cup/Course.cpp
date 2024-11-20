#include "course.h"
#include <iostream>

Course::Course(string nom, string date) {
    nomCompetition = nom;
    dateCompetition = date;
    nbParticipants = 0;

    // Initialisation du tableau de pointeurs
    for (int i = 0; i < 100; i++) {
		lesParticipants[i] = nullptr;
	}
}

void Course::init() {
    // Affiche un message d'initialisation de la compétition
    cout << "Initialisation de la compétition : " << nomCompetition << " - Date : " << dateCompetition << endl;
}

void Course::traitementDossards() {
	// Traite les dossards pour la compétition
    cout << "Traitement des dossards pour la compétition." << endl;
}

void Course::ajouterParticipant(Participation* participation) {
	// Ajoute un participant à la compétition
    if (nbParticipants < 100) {
        lesParticipants[nbParticipants++] = participation;
    }
	// Affiche un message si la compétition est pleine
    else {
        cout << "La compétition est pleine. Impossible d'ajouter plus de participants." << endl;
    }
}

void Course::afficherParticipants() {
	// Affiche la liste des participants
    cout << "Liste des participants dans la compétition '" << nomCompetition << "' : " << endl;
	//Pour chaque participant, affiche les informations de participation
    for (int i = 0; i < nbParticipants; i++) {
        lesParticipants[i]->afficherParticipation();
    }
}

void Course::classesLesParticipants() {
    // À définir selon les règles de classement (par exemple : par classement FIS ou WCSL)
    cout << "Classement des participants..." << endl;
    // Ici, la méthode est protégée et peut être redéfinie dans une classe dérivée.
}
