#pragma once
#include"Actor.h"

class Fan
{
private:
	Actor m_favouriteActor;
	Sex m_sex;
	int m_age;
public:
	Fan();
	Fan(int age, Sex sex, Actor favouriteActor);
	~Fan();

	Actor GetFavouriteActor();
	void SetFavouriteActor(Actor actor);
};
