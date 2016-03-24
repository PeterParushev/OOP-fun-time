#pragma once
#include"Actor.h"
#include "Movie.h"
class Fan
{
	Actor m_favouriteActor;
	Sex m_sex;
	int m_age;
	Movie m_favouriteMovie;
public:
	Fan();
	Fan(int age, Sex sex, Actor favouriteActor, Movie favouriteMovie);
	~Fan();

	Actor GetFavouriteActor() const;
	void SetFavouriteActor(Actor actor);
	Movie GetFavouriteMovie() const;
	void SetFavouriteMovie(Movie movie);
};
