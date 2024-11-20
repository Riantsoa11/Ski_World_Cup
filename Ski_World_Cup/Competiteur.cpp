#include <iostream>
#include "Competiteur.h"

using namespace std;

// Constructeur
Competiteur::Competiteur(int numero, string nom, string prenom, int FIS, int WCSL) {
	numeroCompetiteur= numero;
	nomCompetiteur= nom;
	prenomCompetiteur= prenom;
	classementFIS= FIS;
	classementWCSL= WCSL;
}

// Affiche les informations du compétiteur
void Competiteur::afficherInfo() {
	cout << "Numéro de compétiteur: " << numeroCompetiteur << std::endl;
	cout << "Nom: " << nomCompetiteur << std::endl;
	cout << "Prénom: " << prenomCompetiteur << std::endl;
	cout << "Classement FIS: " << classementFIS << std::endl;
	cout << "Classement WCSL: " << classementWCSL << std::endl;
}

//implémentation des getters
int Competiteur::getNumeroCompetiteur()
{
	return numeroCompetiteur;
}


string Competiteur::getNomCompetiteur()
{
	return nomCompetiteur;
}

string Competiteur::getPrenomCompetiteur()
{
	return prenomCompetiteur;
}

int Competiteur::getClassementFIS()
{
	return classementFIS;
}

int Competiteur::getClassementWCSL()
{
	return classementWCSL;
}