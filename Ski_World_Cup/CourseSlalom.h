#ifndef COURSESLALOM_H
#define COURSESLALOM_H

#include "Course.h"
#include "Participation.h"
#include <string>

using namespace std;

class Participation;

class CourseSlalom : public Course
{
public:
	//constructeur pour initialiser la comp�tition avec un nom, une date et les participants
	CourseSlalom(string nom, string date, Participation* participant);

	//Redefinition de la m�thode traitementDossards
	void traitementDossards();

private:
	//Redefinition de la m�thode classesLesParticipants
	void classesLesParticipants();

	//Methode pour attribuer les dossards
	void attribuerDossards();
};

#endif