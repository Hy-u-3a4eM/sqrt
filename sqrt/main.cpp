#include "std_lib_facilities.h"

int main()
{
    setlocale(LC_ALL, "Russian");
    int sq_rt = 0;
    int uend = 0;

    do
    {
        cout << "����� �� �����, �� �������� ���� ����� ���������� ������:" << endl;
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
            cout << "�� ����� ����" << endl;
        }
        */

        if (sq_rt < 0)
        {
            cout << "�� ����� ����" << endl;
        }

        else
        {
            cout << "��� �����: " << sqrt(sq_rt) << endl;
        }

        cout << "�� ������ ���������� ������������ ��������� (0 -- ���, ��������� ���������� ���������)?" << endl; //1 -- ��, ���������� ���������� ���������
        cin >> uend;
        system("CLS");
    }
    
    while (uend != 0);
    //system("pause");
    keep_window_open();
    return 0;
}
