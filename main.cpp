#include <iostream>
#include <conio.h>

using namespace std;

/*
check - �������� ������������ �������� ����
*/
bool check(float number1,float number2)
{
    if (((number1 == -4) && (number2 ==0))||((number2 == -4) && (number1 ==0))) {
        return true;
    } else {
        return false;
    }
}

namespace MyNameSpace {
	bool check(float ,float );
	float number1;

	bool check(float number1,float number2)
    {
        if (((number1 == 5) && (number2 ==7))||((number2 == 5) && (number1 ==7))) {
            return true;
        } else {
            return false;
        }
    }
}


/*
main - ���� � ���������
*/
int main()
{
    setlocale(LC_CTYPE,"Russian");
    float number1 = 0;
    float number2 = 0;

    cout << "������ ���������:\r\n" << endl;

    cout << " 2 * x^2 + 3 * x     x - x^2" << endl;
    cout << "----------------- = ---------" << endl;
    cout << "    3 - x             x - 3\r\n" << endl;

    while (!MyNameSpace::check(number1, number2)) {
        cout << "������� 1-e �����: " ;
        cin >> number1;
        cout << "������� 2-e �����: " ;
        cin >> number2;
        if (!MyNameSpace::check(number1, number2)) {
            cout << "�����������, ���������� ��� ���!\r\n" << endl;
        }
    }

    cout << "\r\n���������!" << endl;
    cout << "����������! ������� Enter" << endl;
    getch();
    return 0;
}

