#include "Fan.h"

Fan::Fan()
{
	m_age = 0;
	m_sex = Unknown;
	m_favouriteActor = Actor();
}

Fan::~Fan()
{
}

Fan::Fan(int age, Sex sex, Actor favouriteActor)
{
	m_age = age;
	m_sex = sex;
	m_favouriteActor = favouriteActor;
}

Actor Fan::GetFavouriteActor()
{
	return m_favouriteActor;
}

void Fan::SetFavouriteActor(Actor actor)
{
	m_favouriteActor = actor;
}