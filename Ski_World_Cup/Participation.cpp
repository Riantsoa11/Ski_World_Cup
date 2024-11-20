#include <iostream>
#include "Participation.h"

using namespace std;

// Constructeur
Participation::Participation(int dossard, int classement, Competiteur* competiteur) {
	numDossard = dossard;
	classement = classement;
	leCompetiteur = competiteur;
}

// Getter pour le num�ro de dossard
int Participation::getNumDossard(){
    return numDossard;
}

// Setter pour le num�ro de dossard
void Participation::setNumDossard(int dossard) {
    numDossard = dossard;
}

// Getter pour le classement
int Participation::getClassement() {
	return classement;
}

// Setter pour le classement
void Participation::setClassement(int classement) {
	classement = classement;
}

// Getter pour le comp�titeur
Competiteur* Participation::getCompetiteur() {
	return leCompetiteur;
}

// Affiche les informations de la participation
void Participation::afficherParticipation() {
	cout << "Dossard: " << numDossard << ", Classement: " << classement << ", Competiteur: ";
	leCompetiteur->afficherInfo();
}
