#include <iostream>
using namespace std;

int main()
{
    float a[30]; //���������� ������ �� ���������� ������
    int n;

    cout<< "Enter n: ";
    cin>>n;

    cout<< "Enter array: "; //��� ������ � ������� ������
    for(int i=0;i<n;i++) 
	{
        cin>>a[i];
    }

    float min=a[0]; //��������� �������� ��������

    for(int i=0;i<n;i+=2) 
	{
        if (a[i]<min) //���� ������ ���������� �� ������ ��������
		{
            min=a[i];
        }
    }

    cout
	<< "Minimum on even indices: " << min; //��������� ����������
    return 0;
}
