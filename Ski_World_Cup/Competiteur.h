#ifndef COMPETITEUR_H
#define COMPETITEUR_H

#include <string>
using namespace std;

class Competiteur
{
	private:
		int numeroCompetiteur;
		string nomCompetiteur;
		string prenomCompetiteur;
		int classementFIS;
		int classementWCSL;

	public:
		//Constructeur
		Competiteur(int numero, string nom, string prenom, int FIS, int WCSL);
		void afficherInfo();

		//Getters pour accéder aux attributs privés
		int getNumeroCompetiteur();
		string getNomCompetiteur();
		string getPrenomCompetiteur();
		int getClassementFIS();
		int getClassementWCSL();

};
#endif