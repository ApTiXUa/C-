#include <iostream>
using namespace std;
int main()
{
    int n,m; //������������ ����� ������ ���� ������.
    cout<<"Enter n for first array:"; //�������� ������ ���� ������ � �����������.
    cin>>n;
    cout<<"Enter m for second array:";
    cin>>m;

    float *a = new float[n]; //���������� �������� ������ �� ��� ������ a � b.
    float *b = new float[m];

    cout<<"Enter elements for first array:"<<endl; //���������� n �������� � ������ ����� a.
    for(int i=0;i<n;i++)
	{
        cin>>a[i];
    }

    cout<<"Enter elements for second array:"<<endl; //���������� m �������� � ������ ����� b.
    for(int i=0;i<m;i++)
	{
        cin>>b[i];
    }

    int sa=0; //����� �������� a[i] ����������� �� int (����� ��������� ������� �������),
    for(int i=0;i<n;i++)
	{
        if(int(a[i])%3!=0) //������������, �� �� ������ 3, � �������� ������� ����� ����� � sa.
            sa++;
    }
    int sb=0; //����� �������� b[i] ����������� �� int (����� ��������� ������� �������),
    for(int i=0;i<m;i++)
	{
        if(int(b[i])%3!=0) //������������, �� �� ������ 3, � �������� ������� ����� ����� � sb.
            sb++;
    }
    
    if(sa>sb)
	{
        cout<<"Array with less elements divisible by 3:"<<endl;
        for(int i=0;i<n;i++)
		{
            cout<<a[i]<<" ";
        }
    }
    else if(sa<sb)
	{
        cout<<"Array with less elements divisible by 3:"<<endl;
        for(int i=0;i<m;i++)
		{ 
            cout<<b[i]<<" ";
        }
    }
    else{
        cout<<"Both arrays have the same amount of numbers not divisible by 3";
    }

    delete[] a;
    delete[] b;
 
    return 0;
}
