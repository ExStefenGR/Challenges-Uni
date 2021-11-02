#include "MessageSys.h"

MessageSys::MessageSys()
{
	m_random = {"Ask later","So it shall be","Yes", "No","Maybe"}; //Magic 8-ball?
	m_randomIndex = 0;
	m_queue = {};
	m_input = {};
	m_index = 0;
}

MessageSys::~MessageSys()
{
	m_queue.clear();
}

void MessageSys::SetMessage()
{
	std::cout << "Say something: " << std::endl;
	std::cin >> m_input;
	m_queue.push_back(m_input);
}

void MessageSys::GetMessage()
{
	std::cout << "Which Message ID to retrieve?: " << std::endl;
	std::cin >> m_index;
	std::cout << std::endl << m_queue[m_index] << std::endl;
}

void MessageSys::GetAnswer()
{
	std::srand((int)time(0)); //use current time as seed for random generator
	m_randomIndex = std::rand() % 5+1;
	std::cout << m_random[m_randomIndex] << std::endl;
}
