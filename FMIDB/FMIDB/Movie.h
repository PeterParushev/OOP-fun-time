#pragma once
#include "Actor.h"

class Movie
{
private:
	Actor m_maleActor;
	Actor m_femaleActor;
	int m_year;
	double m_rating;
public:
	Movie();
	~Movie();

	Actor GetMaleActor() const;
	void SetMaleActor(Actor actor);
	Actor GetFemaleActor() const;
	void SetFemaleActor(Actor actor);
	int GetYear() const;
	void SetYear(int year);
	double GetRating() const;
	void SetRating(double rating);
};

