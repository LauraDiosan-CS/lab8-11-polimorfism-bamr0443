#include "RepoFileCSV.h"
#include "GarnituraMarfa.h"
#include "GarnituraPersoane.h"
#include <fstream>


RepoFileCSV::RepoFileCSV()
{
}

RepoFileCSV::RepoFileCSV(const char* name)
{
	fileName = name;
	loadFromFile();
}

void RepoFileCSV::loadFromFile()
{
	string line;
	elem.clear(); // goleste vector ca sa nu primim elemente duplicate daca facem 2 loads
	ifstream f(fileName);
	while (getline(f, line)) {
		if (line.substr(0, 2) == "GM")
		{
			line = line.erase(0, 3); // stergem "GM " (GM + spatiu == 3 caractere)
			GarnituraMarfa *gm = new GarnituraMarfa(line, ',');
			add(gm);
		}
		else if (line.substr(0, 2) == "GP")
		{
			line = line.erase(0, 3); // stergem "GM " (GM + spatiu == 3 caractere)
			GarnituraPersoane *gp = new GarnituraPersoane(line, ',');
			add(gp);
		}
	}
}

void RepoFileCSV::saveToFile()
{
	ofstream f(fileName);
	for (Garnitura* crt : elem) {
		f << crt->toStringDelimiter(',') << endl;
	}
}

RepoFileCSV::~RepoFileCSV()
{
}
