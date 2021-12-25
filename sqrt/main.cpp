#include "std_lib_facilities.h"

int main()
{
    setlocale(LC_ALL, "Russian");
    int sq_rt = 0;
    int uend = 0;

    do
    {
        cout << "Введи то число, из которого надо найти квадратный корень:" << endl;
        cin >> sq_rt;

        /*
        if (!cin)
        {
            cout << "Input Error!" << endl;
            cin.clear();
            fflush(stdin);
        }
        */

        /*
        if (typeid(string) == typeid(sq_rt))
        {
            cout << "Не верен ввод" << endl;
        }
        */

        if (sq_rt < 0)
        {
            cout << "Не верен ввод" << endl;
        }

        else
        {
            cout << "Ваш ответ: " << sqrt(sq_rt) << endl;
        }

        cout << "Вы хотите продолжить использовать программу (0 -- нет, закончить выполнение программы)?" << endl; //1 -- да, продолжить выполнение программы
        cin >> uend;
        system("CLS");
    }
    
    while (uend != 0);
    //system("pause");
    keep_window_open();
    return 0;
}
