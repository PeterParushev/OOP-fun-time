#include "Fan.h"
#include "Actor.h"

Fan::Fan()
{
	m_age = 0;
	m_sex = Unknown;
	m_favouriteActor = Actor();
	m_favouriteMovie = Movie();
}

Fan::~Fan()
{
}

Fan::Fan(int age, Sex sex, Actor favouriteActor, Movie favouriteMovie)
{
	m_age = age;
	m_sex = sex;
	m_favouriteActor = favouriteActor;
	m_favouriteMovie = favouriteMovie;
}

Actor Fan::GetFavouriteActor() const
{
	return m_favouriteActor;
}

void Fan::SetFavouriteActor(Actor actor)
{
	m_favouriteActor = actor;
}
