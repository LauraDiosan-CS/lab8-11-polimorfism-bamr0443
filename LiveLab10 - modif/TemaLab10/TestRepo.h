#pragma once
#include "RepositoryFile.h"
#include "RepositoryFileCSV.h"
#include "RepositoryFileTXT.h"
//#include "Zbor.h"
//#include "Bilet.h"
#include "User.h"

class TestRepo
{private:
	void runCSVTests();
	void runTXTTests();
	void runLiveTests();

public:
	TestRepo();
	void runTests();
	~TestRepo();
};

