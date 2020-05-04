#include "Garnitura.h"

Garnitura::Garnitura()
{
	model = "";
	producator = "";
	numarVagoane = 0;
	numarDisponibile = 0;
	numarRezervate = 0;
}

Garnitura::Garnitura(string Model, string Producator, int NumarVagoane, int NumarDisponibile, int NumarRezervate)
{
	model = Model;
	producator = Producator;
	numarVagoane = NumarVagoane;
	numarDisponibile = NumarDisponibile;
	numarRezervate = NumarRezervate;
}

Garnitura::Garnitura(const Garnitura& g)
{
	SetModel(g.model);
	SetProducator(g.producator);
	SetNumarVagoane(g.numarVagoane);
	SetNumarDisponibile(g.numarDisponibile);
	SetNumarRezervate(g.numarRezervate);
}


string Garnitura::GetModel()
{
	return model;
}

void Garnitura::SetModel(string Model)
{
	model = Model;
}

string Garnitura::GetProducator()
{
	return producator;
}

void Garnitura::SetProducator(string Producator)
{
	producator = Producator;
}

int Garnitura::GetNumarVagoane()
{
	return numarVagoane;
}

void Garnitura::SetNumarVagoane(int NumarVagoane)
{
	numarVagoane = NumarVagoane;
}

int Garnitura::GetNumarDisponibile()
{
	return numarDisponibile;
}

void Garnitura::SetNumarDisponibile(int NumarDisponibile)
{
	numarDisponibile = NumarDisponibile;
}

int Garnitura::GetNumarRezervate()
{
	return numarRezervate;
}

void Garnitura::SetNumarRezervate(int NumarRezervate)
{
	numarRezervate = NumarRezervate;
}

bool Garnitura::operator==(const Garnitura& g)
{
	return model == g.model && producator == g.producator && numarVagoane == g.numarVagoane
		&& numarDisponibile == g.numarDisponibile && numarRezervate == g.numarRezervate;
}

string Garnitura::toString()
{
	return toStringDelimiter(' ');
}

string Garnitura::toStringDelimiter(char delim)
{
	return model + delim + producator + delim + to_string(numarVagoane) + delim + to_string(numarDisponibile) + delim + to_string(numarRezervate);
}
