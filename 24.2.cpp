#include <iostream>
using namespace std;

int main()
{
    int a, b, c, *pmin, *pmax;
    
    cout<<"Enter a,b,c"; //���������� ��� �����
    cin>>a >>b >>c;

    pmin = &a; // �������� �������, �� a � �����
    if(*pmin>b) // ���� b ����� � ������� ��������
        pmin = &b;
    if(*pmin>c) // ���� c ����� �� �������� ����� � ���������
        pmin = &c;

    pmax = &a; // �������� �������, �� a � ��������
    if(*pmax<b) // ���� b ����� � ���������
        pmax = &b;
    if(*pmax<c) // ���� c �� ����� � ���������
        pmax = &c;

    cout<<"Max: "<<*pmax <<" Address of max:"<<pmax <<endl;
    cout<<"Min: "<<*pmin <<" Address of min:"<<pmin <<endl;
    return 0;
}
