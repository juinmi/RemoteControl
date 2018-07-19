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

	string GetProgramFlie() {return m_programFile;}

private:
	string m_programFile;
	vector<CProcedure> m_procedures;
};

