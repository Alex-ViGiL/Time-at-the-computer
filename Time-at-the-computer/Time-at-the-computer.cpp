#include <iostream>
#include <windows.h>
using namespace std;

//Сколько нужно портратить часов к 100 уровню 
const int time_to_level_100 = 10000;
//Всего потрачено времени 
int Totaltime = 0;
//Уровень
int Level = 0;


int main()
{
    setlocale(LC_ALL, "rus");

    int time(0), hours(0), minutes(0), second(0);

    cout << "Информация об пользователе " << endl
        << "Имя пользователся : " << "Кармазин Алексей " << endl <<
        "Уровень : " << Level << endl <<
        "Всего времени потрачено : " <<::Totaltime<<endl;

        for (int i = 0;; i++) {

           second = i;

           if (second > 60) {

               second = 0;
               i = 0;
               minutes += 1;
               continue;

           }else if (minutes > 60) {

               i = 0;
               minutes = 0;
               hours += 1;
               continue;

           }

            Sleep(1000);

            cout <<"Сегодня потрачено времени "<<endl<<
                "Часов : " <<hours<<endl<<
                "Минут : "<<minutes<<endl<< 
                "Секунд : "<<second<<endl;

        }
    
}

