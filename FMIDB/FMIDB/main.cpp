using namespace std;
#include<iostream>
#include "Actor.h"
#include "Movie.h"
#include "Fan.h"

void printActor(Actor actor)
{
	cout << actor.GetAge() << " " << actor.GetNumbetOfNominations() << " " << actor.GetNumberOfWins() << endl;
}

int main()
{
	Actor anon = Actor();
	printActor(anon);

	Actor kevinHeart = Actor(33, Male, 0, 0);
	printActor(kevinHeart);

	Actor scarlet = Actor(30, Female, 0, 0);

	Movie rideAlong = Movie(kevinHeart, scarlet, 2005, 0.89);

	Fan petar = Fan(22, Male, scarlet, rideAlong);
	return 0;
}