#pragma once

#include <string>

using namespace std;

class Garnitura
{
private:
	string model;
	string producator;
	int numarVagoane;
	int numarDisponibile;
	int numarRezervate;

public:
	Garnitura();
	Garnitura(string Model, string Producator, int NumarVagoane, int NumarDisponibile, int NumarRezervate);
	Garnitura(const Garnitura& g);

	string GetModel();
	void SetModel(string Model);
	string GetProducator();
	void SetProducator(string Producator);
	int GetNumarVagoane();
	void SetNumarVagoane(int NumarVagoane);
	int GetNumarDisponibile();
	void SetNumarDisponibile(int NumarVagoane);
	int GetNumarRezervate();
	void SetNumarRezervate(int NumarVagoane);

	bool operator==(const Garnitura& g);
	string toString();
	string toStringDelimiter(char delim);
};

