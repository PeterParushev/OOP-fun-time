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

	char* GetName() const;
	int GetAge() const;
	void SetAge(int age);
	Sex GetSex() const;
	void SetSex(Sex sex);
	int GetNumbetOfNominations() const;
	void SetNumberOfNominations(int nominationCount);
	int GetNumberOfWins() const;
	void SetNumberOfWins(int winCount);
};
