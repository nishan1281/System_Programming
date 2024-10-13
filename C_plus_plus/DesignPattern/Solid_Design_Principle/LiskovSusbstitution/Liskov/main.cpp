//
// Created by nisha on 10/13/2024.
//

#include "processUtilityFunction.h"
#include "RectangleFactory.h"

int main()
{
    Rectangle rect = RectangleFactory::create_rectangle(4, 5);
    process(rect);

    Rectangle square = RectangleFactory::create_square(10);
    process(square);

    return 0;
}
