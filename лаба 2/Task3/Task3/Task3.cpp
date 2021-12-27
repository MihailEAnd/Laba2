// Task3.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <D:\universitet\7semestr\пвсиб\лабы\лаба 2\Task1\Task1\Task1.cpp>
#include <D:\universitet\7semestr\пвсиб\лабы\лаба 2\Task2\Task2\Task2.cpp>

int result()
{
    double x;
    std::cin >> x;
    f(x);
    std::cout << f(x);
    return 1;
}


int main()
{
    int k;
    std::cout << "Выберете выполнить задание 1 или задание 2, путём набора 1 или 2!\n";
    std::cin >> k;
    if (k == 1)
    {

       
        std::cout << "Если 1 то попалав область, если 0 то нет.\n";
        Main();
        
    }
    else if (k == 2)
    {
       
        result();
    }
    return k;
}


