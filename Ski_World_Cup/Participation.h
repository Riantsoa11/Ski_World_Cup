#ifndef PARTICIPATION_H
#define PARTICIPATION_H

#include <string>
#include "Competiteur.h"

using namespace std;

class Participation
{
	private:
		int numDossard;
		int classement;
		Competiteur* leCompetiteur;

	public:
		//Constructeur
		Participation(int dossard,int classement, Competiteur* competiteur);
		Participation();
		//Getters et setters pour numDossard et classement 
		int getNumDossard();
		void setNumDossard(int dossard);

		int getClassement();
		void setClassement(int classement);

		//Getter pour accéder le competiteur
		Competiteur* getCompetiteur();
		void afficherParticipation();

};

#endif