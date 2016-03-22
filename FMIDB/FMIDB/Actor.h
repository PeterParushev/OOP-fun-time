#pragma once
enum Sex
{
	Male,
	Female,
	Unknown
};

class Actor
{
private:
	char* m_name;
	int m_age;
	Sex m_sex;
	int m_numberOfNominations;
	int m_numberOfWins;
public:
	Actor();
	Actor(int age, Sex sex, int numberOfNominations, int numberOfWins);
	Actor(char* name, int age, Sex sex, int numberOfNominations, int numberOfWins);
	~Actor();

	char* GetName();
	int GetAge();
	void SetAge(int age);
	Sex GetSex();
	void SetSex(Sex sex);
	int GetNumbetOfNominations();
	void SetNumberOfNominations(int nominationCount);

	//Implement these
	int GetNumberOfWins();
	void SetNumberOfWins(int winCount);
};
