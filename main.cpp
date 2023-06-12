#include <QCoreApplication>
#include <QArrayData>
#include <iostream>
#include <windows.h>
#include <array>
#include <algorithm>
#include <time.h>

void rand_num(std::array<int, 10> &mymass)
{
    srand(time(NULL));
    qDebug() << "Елементи масива: ";
    for (int i = 0; i < 10; i++)
    {
        mymass[i] = rand () %20-10;
        std::cout << mymass[i] << " ";
    }
    std::cout << std::endl;
    qDebug() << "Розмір масива: " << mymass.size();
    return;
}


int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    std::array<int, 10> mymass;
    rand_num(mymass);
    int result(0);
    for (auto& element : mymass)
    {
        if (element < 0)
        {
           result = result + element;
        }

    }
     qDebug() << "\nСума від'ємних чисел масива = " << result;


    return a.exec();
}

