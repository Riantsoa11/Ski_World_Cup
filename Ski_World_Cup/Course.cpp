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
    // Affiche un message d'initialisation de la comp�tition
    cout << "Initialisation de la comp�tition : " << nomCompetition << " - Date : " << dateCompetition << endl;
}

void Course::traitementDossards() {
    // Cette m�thode est virtuelle et devrait �tre red�finie dans les classes d�riv�es (par exemple : CourseSlalom)
    cout << "Traitement des dossards pour la comp�tition." << endl;
}

void Course::ajouterParticipant(Participation* participation) {
    if (nbParticipants < 100) {
        lesParticipants[nbParticipants++] = participation;
    }
    else {
        cout << "La comp�tition est pleine. Impossible d'ajouter plus de participants." << endl;
    }
}

void Course::afficherParticipants() {
    cout << "Liste des participants dans la comp�tition '" << nomCompetition << "' : " << endl;
    for (int i = 0; i < nbParticipants; i++) {
        lesParticipants[i]->afficherParticipation();
    }
}

void Course::classesLesParticipants() {
    // Logique de classement des participants
    // � d�finir selon les r�gles de classement (par exemple : par classement FIS ou WCSL)
    cout << "Classement des participants..." << endl;
    // Ici, la m�thode est prot�g�e et peut �tre red�finie dans une classe d�riv�e.
}
