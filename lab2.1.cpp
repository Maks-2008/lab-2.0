// lab_03.cpp
// �����: <��� �������, ���>
// ����������� ������ �2
// ������ 3
// ���������� ������� ����� ���������

#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double a;   // ������� ��������
    double z1;  // ��������� 1-�� ������
    double z2;  // ��������� 2-�� ������

    cout << "a = ";
    cin >> a;

    // ���������� �� ���������
    z1 = (sin(2 * a) + sin(5 * a) - sin(3 * a)) / (cos(a) + 1 - 2 * pow(sin(2 * a), 2));
    z2 = 2 * sin(a);

    // ���� ����������
    cout << "z1 = " << z1 << endl;
    cout << "z2 = " << z2 << endl;

    return 0;
}