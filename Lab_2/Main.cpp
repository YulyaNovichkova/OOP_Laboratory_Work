#include <iostream>
#include "Function.h"

int main()
{
    //DemoSort();

    //DemoRectangle();
    //DemoFlight();
    //DemoMovie();
    //DemoTime();

    //DemoReadAndWriteRectangles();

    //DemoDynamicFlights();

    //Rectangle* rectangle = MakeRectangle(12, 15, "Green");
    //Rectangle* copiedRectangle = CopyRectangle(*rectangle);

    //Flight* flight = MakeFlight("Moscow", "Tomsk", 240);
    //Flight* copiedFlight = CopyFlight(*flight);

    //Movie* movie = MakeMovie("The Shawshank Redemption", "Drama", 1994, 142, 9.1);
    //Movie* copiedMovie = CopyMovie(*movie);

    //Time* clock = MakeTime(16, 53, 28);
    //Time* copiedClock = CopyTime(*clock);

    Color colors[6] = { Red, Blue, Yellow, Red, Yellow, Green };
    cout << CountColor(colors, 6, Purple);

    return 0;
}
