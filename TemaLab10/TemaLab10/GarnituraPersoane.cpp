#include "GarnituraPersoane.h"
#include "Utils.h"

GarnituraPersoane::GarnituraPersoane() 
	: Garnitura("", "", 0, 0, 0)
{
	numarLocuri = 0;
}

GarnituraPersoane::GarnituraPersoane(string Model, string Producator, int NumarVagoane, int NumarDisponibile, int NumarRezervate, int NumarLocuri)
	: Garnitura(Model, Producator, NumarVagoane, NumarDisponibile, NumarRezervate)
{
	numarLocuri = NumarLocuri;
}

GarnituraPersoane::GarnituraPersoane(string linie, char delim)
{
	vector<string> tokens = splitLine(linie, delim);
	SetModel(tokens[0]);
	SetProducator(tokens[1]);
	SetNumarVagoane(stoi(tokens[2]));
	SetNumarDisponibile(stoi(tokens[3]));
	SetNumarRezervate(stoi(tokens[4]));

	SetNumarLocuri(stoi(tokens[5]));
}

GarnituraPersoane::GarnituraPersoane(const GarnituraPersoane& gp)
	: Garnitura(gp)
{
	numarLocuri = gp.numarLocuri;
}

int GarnituraPersoane::GetNumarLocuri()
{
	return numarLocuri;
}

void GarnituraPersoane::SetNumarLocuri(int NumarLocuri)
{
	numarLocuri = NumarLocuri;
}

bool GarnituraPersoane::operator==(const GarnituraPersoane& g)
{
	return Garnitura::operator==(g) && numarLocuri == g.numarLocuri;
}

string GarnituraPersoane::toString()
{
	return toStringDelimiter(' ');
}

string GarnituraPersoane::toStringDelimiter(char delim)
{
	return Garnitura::toStringDelimiter(delim) + delim + to_string(numarLocuri);
}
