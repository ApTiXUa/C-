#include <iostream>
using namespace std;

void arrb(float *a,int n) //a � �������� �� ����� ����� ���� float n � ����� ������;
{
    int m=0; //int(a[i]) � ��������� ������� �� ������ ���� (����� ����� ������� �������).
	         // �����: ����� ����� � ����� �� ������� ������� (������ ��������).
    for(int i=0;i<n;i++)
	{
        if(int(a[i])%2==0&& i%2!=0)
            m++;
    }
    float *b = new float[m]; //� ��� �����, ���������� �������� � b[].

    int in=0;
    for(int i=0;i<n;i++)
	{
        if(int(a[i])%2==0&& i%2==1)
		{
            b[in++]=a[i];
        }
    }
    for(int i=0;i<m;i++)
	{
        cout<<b[i]<<" ";
    }
    delete[] b;
}
int main()
{
    int n,m;
    cout<<"Enter n for first array:"; //���������� �������;
    cin>>n; 

    float *a = new float[n]; //�������� ����� ��� ������ a;
   
    for(int i=0;i<n;i++)
	{
        cin>>a[i];
    }
    arrb(a,n); //�������� ������ � ������� arrb();
    delete[] a; //��������� �����.


    return 0;
}
