#ifndef COURSESLALOM_H
#define COURSESLALOM_H

#include "Course.h"
#include <string>

using namespace std;

class CourseSlalom : public Course
{
public:
	//constructeur pour initialiser la compétition avec un nom, une date et les participants
	CourseSlalom(string nom, string date);

	//Redefinition de la méthode traitementDossards
	void traitementDossards();

private:
	//Redefinition de la méthode classesLesParticipants
	void classesLesParticipants();

	//Methode pour attribuer les dossards
	void attribuerDossards();
};

#endif