// Task1.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>




bool isInArea(double x, double y)
{
    bool g = true;
    if (x >= 0 && y >= 0)
        g = true;
    else if (x < 0 && y > 0)
        g = true;
    else if (x < 0 && y < 0)
        g = true;
    else if (x > 0 && y < 0)
        g = false;

    if (g == true)
        printf("1");
    else
        printf("0");

    return g;
}

int Main()
{
    bool g;
    double x, y;
    std::cin >> x;
    std::cin >> y;
    g = isInArea(x, y);
    return g;
}

