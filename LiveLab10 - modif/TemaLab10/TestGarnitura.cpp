#include <assert.h>
#include <iostream>

using namespace std;

#include "TestGarnitura.h"
#include "GarnituraMarfa.h"
#include "GarnituraPersoane.h"

void TestGarnitura::testeGarnituraPersoana()
{
	//// Test constructor cu parametri
	//GarnituraPersoane gp1("CiuCiu1", "CFR", 3, 2, 1, 100);
	//assert(gp1.GetModel() == "CiuCiu1");
	//assert(gp1.GetProducator() == "CFR");
	//assert(gp1.GetNumarVagoane() == 3);
	//assert(gp1.GetNumarDisponibile() == 2);
	//assert(gp1.GetNumarRezervate() == 1);
	//assert(gp1.GetNumarLocuri() == 100);

	//// Test constructor pentru citire din fisier
	//GarnituraPersoane gp2("CiuCiu1,CFR,3,2,1,100", ',');
	//assert(gp2.GetModel() == "CiuCiu1");
	//assert(gp2.GetProducator() == "CFR");
	//assert(gp2.GetNumarVagoane() == 3);
	//assert(gp2.GetNumarDisponibile() == 2);
	//assert(gp2.GetNumarRezervate() == 1);
	//assert(gp2.GetNumarLocuri() == 100);

	//// Test operator==
	//assert(gp1 == gp2);

	//// Test toStringDelimiter
	//assert(gp1.toStringDelimiter(',') == "CiuCiu1,CFR,3,2,1,100");

	//cout << "Testele pentru GarnituraPersoane au trecut!" << endl;
}

void TestGarnitura::testeGarnituraMarfa()
{
	//// Test constructor cu parametri
	//GarnituraMarfa gm1("CiuCiu1", "CFR", 3, 2, 1, "cereale");
	//assert(gm1.GetModel() == "CiuCiu1");
	//assert(gm1.GetProducator() == "CFR");
	//assert(gm1.GetNumarVagoane() == 3);
	//assert(gm1.GetNumarDisponibile() == 2);
	//assert(gm1.GetNumarRezervate() == 1);
	//assert(gm1.GetIncarcatura() == "cereale");

	//// Test constructor pentru citire din fisier
	//GarnituraMarfa gm2("CiuCiu1,CFR,3,2,1,cereale", ',');
	//assert(gm2.GetModel() == "CiuCiu1");
	//assert(gm2.GetProducator() == "CFR");
	//assert(gm2.GetNumarVagoane() == 3);
	//assert(gm2.GetNumarDisponibile() == 2);
	//assert(gm2.GetNumarRezervate() == 1);
	//assert(gm2.GetIncarcatura() == "cereale");

	//// Test operator==
	//assert(gm1 == gm2);

	//// Test toStringDelimiter
	//assert(gm1.toStringDelimiter(',') == "CiuCiu1,CFR,3,2,1,cereale");

	//cout << "Testele pentru GarnituraMarfa au trecut!" << endl;
}

TestGarnitura::TestGarnitura()
{
}

void TestGarnitura::teste()
{
	testeGarnituraMarfa();
	testeGarnituraPersoana();
}

TestGarnitura::~TestGarnitura()
{
}
