#include<cstring>
#include "Actor.h"

Actor::Actor()
{
	m_name = nullptr;
	m_age = 0;
	m_sex = Unknown;
	m_numberOfNominations = 0;
	m_numberOfWins = 0;
}

Actor::Actor(int age, Sex sex, int numberOfNominations, int numberOfWins)
{
	m_name = nullptr;
	m_age = age;
	m_sex = sex;
	m_numberOfNominations = numberOfNominations;
	m_numberOfWins = numberOfWins;
}

Actor::Actor(char* name, int age, Sex sex, int numberOfNominations, int numberOfWins)
{
	//warning SOME CONSTRUCTORS ARE MISSING FOR EDUCATIONAL PURPOSES
	int nameLength = strlen(name);
	m_name = new char[nameLength];
	strcpy(m_name, name);

	m_age = age;
	m_sex = sex;
	m_numberOfNominations = numberOfNominations;
	m_numberOfWins = numberOfWins;
}

Actor::~Actor()
{
	if (m_name != nullptr)
	{
		delete[] m_name;
	}
}

char* Actor::GetName()
{
	return m_name;
}

int Actor::GetAge()
{
	return m_age;
}

void Actor::SetAge(int age)
{
	if (age >= 0)
	{
		m_age = age;
	}
}

Sex Actor::GetSex()
{
	return m_sex;
}

void Actor::SetSex(Sex sex)
{
	m_sex = sex;
}

int Actor::GetNumbetOfNominations()
{
	return m_numberOfNominations;
}

void Actor::SetNumberOfNominations(int nominationCount)
{
	if (nominationCount >= 0)
	{
		m_numberOfNominations = nominationCount;
	}
}