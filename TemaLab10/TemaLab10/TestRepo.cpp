#include "TestRepo.h"
#include <assert.h>
#include <iostream>
using namespace std;
#include "GarnituraPersoane.h"
#include "GarnituraMarfa.h"

void TestRepo::runCSVTests()
{	
	// Test loadFromFile
	RepositoryFileCSV<GarnituraPersoane> repoGarnituriPersoane("testRepoCSV.csv");
	repoGarnituriPersoane.loadFromFile();
	assert(repoGarnituriPersoane.size() == 3);

	// Test Find pe un element citit din fisier
	GarnituraPersoane gp2("ElectroMocotiva", "PPP", 5, 5, 1, 300);
	assert(repoGarnituriPersoane.find(gp2) == 2);
	
	// Test Add
	GarnituraPersoane gp1("NewCiuCiu", "CFR", 1,1,1,1000);
	repoGarnituriPersoane.add(gp1);
	assert(repoGarnituriPersoane.size() == 4);

	// Test Salvare In Fisier
	repoGarnituriPersoane.saveToFile();
	repoGarnituriPersoane.loadFromFile();
	assert(repoGarnituriPersoane.size() == 4);

	// Test Remove
	repoGarnituriPersoane.remove(gp1);
	assert(repoGarnituriPersoane.size() == 3);

	// Salvare pt a aduce fisierul de teste la starea initiala
	repoGarnituriPersoane.saveToFile();

	cout << "Testele pentru RepositoryFileCSV<GarnituraPersoane> au trecut!" << endl;
}

void TestRepo::runTXTTests()
{
	// Test loadFromFile
	RepositoryFileTXT<GarnituraMarfa> repoGarnituriMarfa("testRepoTXT.txt");
	repoGarnituriMarfa.loadFromFile();
	assert(repoGarnituriMarfa.size() == 3);

	// Test Find pe un element citit din fisier
	GarnituraMarfa gm2("ElectroMocotiva", "PPP", 5, 5, 1, "carbune");
	assert(repoGarnituriMarfa.find(gm2) == 1);

	// Test Add
	GarnituraMarfa gm1("NewCiuCiu", "CFR", 1, 1, 1, "fier");
	repoGarnituriMarfa.add(gm1);
	assert(repoGarnituriMarfa.size() == 4);

	// Test Salvare In Fisier
	repoGarnituriMarfa.saveToFile();
	repoGarnituriMarfa.loadFromFile();
	assert(repoGarnituriMarfa.size() == 4);

	// Test Remove
	repoGarnituriMarfa.remove(gm1);
	assert(repoGarnituriMarfa.size() == 3);

	// Salvare pt a aduce fisierul de teste la starea initiala
	repoGarnituriMarfa.saveToFile();

	cout << "Testele pentru RepositoryFileTXT<GarnituraMarfa> au trecut!" << endl;
}

TestRepo::TestRepo()
{
}



void TestRepo::runTests()
{
	runCSVTests();
	runTXTTests();
}


TestRepo::~TestRepo()
{
}
