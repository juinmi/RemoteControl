#pragma once
#include "string"
using namespace std;


class CProcedure
{
public:
	CProcedure(void);
	~CProcedure(void);

	void SetTime(int time) { m_time = time; }
	int GetTime() { return m_time; }

	void SetRelay(short relay) { m_relay = relay; }
	short GetRelay() { return m_relay; }

	void SetMessage(string message) { m_message = message; }
	string GetMessage() { return m_message; }

	void SetIndex(int index) { m_index = index; }
	int GetIndex() { return m_index; }

private:
	int m_time;
	short m_relay;
	string m_message;
	int m_index;
};

