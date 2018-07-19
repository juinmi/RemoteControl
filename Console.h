#pragma once
#include "string"
#include "vector"
#include "Procedure.h"
using namespace std;

class CConsole
{
public:
	CConsole(void);
	~CConsole(void);

private:
	string m_programFile;
	vector<CProcedure> m_procedures;
};

