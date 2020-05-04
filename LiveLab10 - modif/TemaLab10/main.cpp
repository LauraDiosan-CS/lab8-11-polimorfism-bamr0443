#include <iostream>
#include "TestGarnitura.h"
#include "TestRepo.h"

using namespace std;

int main()
{
	TestGarnitura testGarnitura;
	testGarnitura.teste();

	TestRepo testRepo;
	testRepo.runTests();


	return 0;
}