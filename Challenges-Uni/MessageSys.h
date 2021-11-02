#pragma once
#include <iostream>
#include <deque>
#include <ctime>
class MessageSys
{
public:
	MessageSys();
	~MessageSys();
	void SetMessage();
	void GetMessage();
	void GetAnswer();
private:
	int m_index;
	int m_randomIndex;
	std::string m_input;
	std::deque<std::string> m_random;
	std::deque<std::string> m_queue;
};

