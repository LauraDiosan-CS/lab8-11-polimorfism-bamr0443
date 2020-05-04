#include "GarnituraMarfa.h"
#include "Utils.h"

GarnituraMarfa::GarnituraMarfa()
	: Garnitura("", "", 0, 0, 0)
{
	incarcatura = "";
}

GarnituraMarfa::GarnituraMarfa(string Model, string Producator, int NumarVagoane, string Incarcatura,int NumarDisponibile, int NumarRezervate)
	: Garnitura(Model, Producator, NumarVagoane, NumarDisponibile, NumarRezervate)
{
	incarcatura = Incarcatura;
}

GarnituraMarfa::GarnituraMarfa(string linie, char delim)
{
	vector<string> tokens = splitLine(linie, delim);
	SetModel(tokens[0]);
	SetProducator(tokens[1]);
	SetNumarVagoane(stoi(tokens[2]));
	SetIncarcatura(tokens[3]);
	SetNumarDisponibile(stoi(tokens[4]));
	SetNumarRezervate(stoi(tokens[5]));
}

GarnituraMarfa::GarnituraMarfa(const GarnituraMarfa& gm)
	: Garnitura(gm)
{
	incarcatura = gm.incarcatura;
}

string GarnituraMarfa::GetIncarcatura()
{
	return incarcatura;
}

void GarnituraMarfa::SetIncarcatura(string Incarcatura)
{
	incarcatura = Incarcatura;
}

bool GarnituraMarfa::operator==(const GarnituraMarfa& g)
{
	return Garnitura::operator==(g) && incarcatura == g.incarcatura;
}

string GarnituraMarfa::toString()
{
	return toStringDelimiter(' ');
}

string GarnituraMarfa::toStringDelimiter(char delim)
{
	return Garnitura::toStringDelimiter(delim) + delim + incarcatura;
}
