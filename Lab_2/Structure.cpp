#include <iostream>
#include "Structure.h"

using namespace std;

void WrongPointers()
{
	Flight flight;
	Movie movie;

	Flight* pointerFlight = &flight;
	Movie* pointerMovie = &movie;
}