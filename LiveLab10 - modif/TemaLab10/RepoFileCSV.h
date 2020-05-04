#pragma once
#include "Repo.h"
#include "Garnitura.h"

class RepoFileCSV :
	public Repo
{
protected:
	const char* fileName;

public:
	RepoFileCSV();
	RepoFileCSV(const char* name);
	void loadFromFile();
	void saveToFile();
	~RepoFileCSV();
};

