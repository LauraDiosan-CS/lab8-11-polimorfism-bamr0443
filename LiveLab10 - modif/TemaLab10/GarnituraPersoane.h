#pragma once
#include "Garnitura.h"
class GarnituraPersoane :
	public Garnitura
{
private:
	int numarLocuri;
public:
	GarnituraPersoane();
	GarnituraPersoane(string Model, string Producator, int NumarVagoane, int NumarLocuri,int NumarDisponibile, int NumarRezervate);
	GarnituraPersoane(string linie, char delim);
	GarnituraPersoane(const GarnituraPersoane& gp);

	int GetNumarLocuri();
	void SetNumarLocuri(int NumarLocuri);

	bool operator==(const GarnituraPersoane& g);
	string toString();
	string toStringDelimiter(char delim);
};

