#pragma once
#include <string>

using namespace std;

struct Date
{
    int year;
    int month;
    int day;
};

class Student
{
public:
    string lastName; //Фамилия
    string firstName; //Имя
    Date dateBirth; //Дата рождения
    string faculty; //Факультет
    string group; //Группа
    int stage; //Курс
    int mark[5];
    bool study; //Учится?
    void SetAge(int age); //Установка занчения возраста
    int GetAge(); //Получение значения возраста
private:
    int age; //Возраст
    double Cmark(int mark[5])
    {
        double cmark = 0;
        for (int i = 0; i < 5; i++)
        {
            cmark += mark[i];
        }
        cmark /= 5;
        return cmark;
    }
};

void Student::SetAge(int age)
{
    if (age <= 10  || age > 80) {
        throw -1;
    } else {
        this->age = age;
    }
}

int Student::GetAge()
{
    return age;
}