// Lab_02.1.cpp
// < ������� ���� ��������� >
// ����������� ������ � 2.1.
// ˳��� ��������.
// ������ 18.

#include <iostream>
#include <cmath>

using namespace std;

int main() {

    double a; // ������� ��������

    double z1; // ��������� ���������� 1-�� ������

    double z2; // ��������� ���������� 2-�� ������

    cout << "a= "; cin >> a;



    z1 = ((a + 2) / sqrt(2 * a) -
         a / (sqrt(2 * a) + 2)  +
         2 / (a - sqrt(2 * a))) *
        (sqrt(a) - sqrt(2)) / (a + 2);

    //z2 = 1 / (sqrt(a) + sqrt(2));

    cout << "z1 = " << z1 << endl;
    //cout << "z2 = " << z2 << endl;


    return 0;
}





   