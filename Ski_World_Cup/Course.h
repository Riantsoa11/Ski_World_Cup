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
		//methodes protégée pour classer les participants
		void classesLesParticipants();

	public:
		//Constructeur pour initialiser la compétition avec un nom et une date
		Course(string nom, string date);

		//Methode publique pour intialiser la compétition
		void init();

		// Méthode virtuelle pour le traitement des dossards
		virtual void traitementDossards();

		// Méthode pour ajouter un participant
		void ajouterParticipant(Participation* participation);

		// Méthode pour afficher les participants
		void afficherParticipants();

};
#endif 
