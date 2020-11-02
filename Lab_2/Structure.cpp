#include <iostream>
#include "Structure.h"

using namespace std;

//TODO: èìåíîâàíèå
//удалила константу

void WrongPointers()
{
	Flight flight;
	Movie movie;

	Flight* pointerFlight = &flight;
	Movie* pointerMovie = &movie;
}