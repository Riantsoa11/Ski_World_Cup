#ifndef	COURSE_H
#define	COURSE_H

#include "Participation.h"
#include <string>

using namespace std;

class Course
{
	private:
		string nomCompetition;
		string dateCompetition;

	protected:
		//Tableau de pointeurs pour les participants
		Participation* lesParticipants[100];
		int nbParticipants;
		//methodes prot�g�e pour classer les participants
		void classesLesParticipants();

	public:
		//Constructeur pour initialiser la comp�tition avec un nom et une date
		Course(string nom, string date);

		//Methode publique pour intialiser la comp�tition
		void init();

		// M�thode virtuelle pour le traitement des dossards
		virtual void traitementDossards();

		// M�thode pour ajouter un participant
		void ajouterParticipant(Participation* participation);

		// M�thode pour afficher les participants
		void afficherParticipants();

};
#endif 
