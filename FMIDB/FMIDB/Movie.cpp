#include "Movie.h"
#include "Actor.h"

Movie::Movie()
{
}

Movie::Movie(Actor maleActor, Actor femaleActor, int year, double rating)
{
	m_maleActor = maleActor;
	m_femaleActor = femaleActor;
	m_year = year;
	m_rating = rating;
}


Movie::~Movie()
{
}

Actor Movie::GetMaleActor() const
{
	return m_maleActor;
}

void Movie::SetMaleActor(Actor actor)
{
	m_maleActor = actor;
}

Actor Movie::GetFemaleActor() const
{
	return m_femaleActor;
}

void Movie::SetFemaleActor(Actor actor)
{
	m_femaleActor = actor;
}

int Movie::GetYear() const
{
	return m_year;
}
void Movie::SetYear(int year)
{
	if (year >= 1890)
	{
		m_year = year;
	}
}
double Movie::GetRating() const
{
	return m_rating;
}

void Movie::SetRating(double rating)
{
	if (rating >= 0 && rating <= 1)
	{
		m_rating = rating;
	}
}