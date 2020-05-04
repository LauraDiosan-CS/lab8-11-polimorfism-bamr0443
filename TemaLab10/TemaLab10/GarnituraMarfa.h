#pragma once
#include "Garnitura.h"
class GarnituraMarfa :
	public Garnitura
{
private:
	string incarcatura;
public:
	GarnituraMarfa();
	GarnituraMarfa(string Model, string Producator, int NumarVagoane, int NumarDisponibile, int NumarRezervate, string Incarcatura);
	GarnituraMarfa(string linie, char delim);
	GarnituraMarfa(const GarnituraMarfa& gm);

	string GetIncarcatura();
	void SetIncarcatura(string Incarcatura);

	bool operator==(const GarnituraMarfa& g);
	string toString();
	string toStringDelimiter(char delim);
};

