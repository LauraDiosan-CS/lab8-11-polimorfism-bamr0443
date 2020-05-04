#include "TestRepo.h"
#include <assert.h>
#include <iostream>
using namespace std;
#include "GarnituraPersoane.h"
#include "GarnituraMarfa.h"

#include "Repo.h"
#include "RepoFileCSV.h"

void TestRepo::runCSVTests()
{	
	//// Test loadFromFile
	//RepositoryFileCSV<GarnituraPersoane> repoGarnituriPersoane("testRepoCSV.csv");
	//repoGarnituriPersoane.loadFromFile();
	//assert(repoGarnituriPersoane.size() == 3);

	//// Test Find pe un element citit din fisier
	//GarnituraPersoane gp2("ElectroMocotiva", "PPP", 5, 5, 1, 300);
	//assert(repoGarnituriPersoane.find(gp2) == 2);
	//
	//// Test Add
	//GarnituraPersoane gp1("NewCiuCiu", "CFR", 1,1,1,1000);
	//repoGarnituriPersoane.add(gp1);
	//assert(repoGarnituriPersoane.size() == 4);

	//// Test Salvare In Fisier
	//repoGarnituriPersoane.saveToFile();
	//repoGarnituriPersoane.loadFromFile();
	//assert(repoGarnituriPersoane.size() == 4);

	//// Test Remove
	//repoGarnituriPersoane.remove(gp1);
	//assert(repoGarnituriPersoane.size() == 3);

	//// Salvare pt a aduce fisierul de teste la starea initiala
	//repoGarnituriPersoane.saveToFile();

	//cout << "Testele pentru RepositoryFileCSV<GarnituraPersoane> au trecut!" << endl;
}

void TestRepo::runTXTTests()
{
	//// Test loadFromFile
	//RepositoryFileTXT<GarnituraMarfa> repoGarnituriMarfa("testRepoTXT.txt");
	//repoGarnituriMarfa.loadFromFile();
	//assert(repoGarnituriMarfa.size() == 3);

	//// Test Find pe un element citit din fisier
	//GarnituraMarfa gm2("ElectroMocotiva", "PPP", 5, 5, 1, "carbune");
	//assert(repoGarnituriMarfa.find(gm2) == 1);

	//// Test Add
	//GarnituraMarfa gm1("NewCiuCiu", "CFR", 1, 1, 1, "fier");
	//repoGarnituriMarfa.add(gm1);
	//assert(repoGarnituriMarfa.size() == 4);

	//// Test Salvare In Fisier
	//repoGarnituriMarfa.saveToFile();
	//repoGarnituriMarfa.loadFromFile();
	//assert(repoGarnituriMarfa.size() == 4);

	//// Test Remove
	//repoGarnituriMarfa.remove(gm1);
	//assert(repoGarnituriMarfa.size() == 3);

	//// Salvare pt a aduce fisierul de teste la starea initiala
	//repoGarnituriMarfa.saveToFile();

	//cout << "Testele pentru RepositoryFileTXT<GarnituraMarfa> au trecut!" << endl;
}

void TestRepo::runLiveTests()
{
	Repo* repo = new RepoFileCSV("fisier-111-1.csv");
	Garnitura* g1 = new GarnituraMarfa("KBT8", "Fleishmann", 8, "carbuni", 10, 20);
	Garnitura* g2 = new GarnituraPersoane("A0JK", "Neumann", 10, 200, 4, 30);
	Garnitura* g3 = new GarnituraMarfa("B1xC", "Aron", 11, "benzina", 9, 12);
	Garnitura* g4 = new GarnituraPersoane("DIJ9", "Stora", 9, 150, 5, 28);

	assert(repo->getSize() == 2);
	assert(*(repo->get(0)) == *g2);
	assert(*(repo->get(1)) == *g1);
	repo->add(g3);
	assert(repo->getSize() == 3);
	assert(*(repo->get(0)) == *g2);
	assert(*(repo->get(1)) == *g3);
	assert(*(repo->get(2)) == *g1);
	repo->add(g4);
	assert(repo->getSize() == 4);
	assert(*(repo->get(0)) == *g2);
	assert(*(repo->get(1)) == *g3);
	assert(*(repo->get(2)) == *g4);
	assert(*(repo->get(3)) == *g1);

	cout << "MERGE" << endl;
}

TestRepo::TestRepo()
{
}



void TestRepo::runTests()
{
	runCSVTests();
	runTXTTests();
	runLiveTests();
}


TestRepo::~TestRepo()
{
}
