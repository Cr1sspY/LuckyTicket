#include <iostream>

using namespace std;

int main()
{
    int TickNum, var, dig = 0, zero, half = 1, left, right, left_sum = 0, right_sum = 0;

    cout << "Enter your ticket number: ";
    cin >> TickNum;
    var = TickNum; // ������� ����� ������ � ���������� var

    while (var > 0){ // ���� ���������� ���������� ���� � ������
        var /= 10;
        dig++; // ��� ����������-�������. � �� ��������� ���������� ����
    }

    if (dig % 2 == 0) { // ����, ���� ���� ������ ����������
        zero = dig / 2; // � ��� ���������� ��������� ���������� �����

        while (zero > 0){ // ����, ����� �������� ����� � ������ (10, 100, 1000 � ��)
            half = half * 10; // ���� ������������ ��� �����
            zero--;
        }

        left = TickNum / half; // �������� ����� �����
        right = TickNum % half; // � ������
    }

    else { // ����, ���� ���� �������� ����������
        zero = dig / 2;

        while (zero > 0){ // ����, ����� �������� ����� � ������ (10, 100, 1000 � ��)
            half = half * 10; // ���� ������������ ��� �����
            zero--;
        }

        left = TickNum / half / 10; // �������� ����� �����
        right = TickNum % half; // � ������
    }

    while (left > 0) { // �������� ����� ����� �����
        left_sum = left_sum + left % 10;
        left /= 10;
    }

    while (right > 0) { // �������� ����� ������ �����
        right_sum = right_sum + right % 10;
        right /= 10;
    }

    if (left_sum == right_sum) { // ���������� �����
        cout << "Lucky 38!!!";
    }

    else {
        cout << "Unlucky, Guys :c";
    }

    return 0;
}
