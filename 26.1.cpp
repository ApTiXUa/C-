#include <iostream>
using namespace std;
int main()
{
    int n,m; //оголошуються змінні розмірів двох масивів.
    cout<<"Enter n for first array:"; //запитуємо розміри обох масивів у користувача.
    cin>>n;
    cout<<"Enter m for second array:";
    cin>>m;

    float *a = new float[n]; //виділяється динамічна пам’ять під два масиви a і b.
    float *b = new float[m];

    cout<<"Enter elements for first array:"<<endl; //зчитуються n елементів у перший масив a.
    for(int i=0;i<n;i++)
	{
        cin>>a[i];
    }

    cout<<"Enter elements for second array:"<<endl; //зчитуються m елементів у другий масив b.
    for(int i=0;i<m;i++)
	{
        cin>>b[i];
    }

    int sa=0; //кожне значення a[i] приводиться до int (тобто обрізається дробова частина),
    for(int i=0;i<n;i++)
	{
        if(int(a[i])%3!=0) //перевіряється, чи не кратне 3, і рахується кількість таких чисел у sa.
            sa++;
    }
    int sb=0; //кожне значення b[i] приводиться до int (тобто обрізається дробова частина),
    for(int i=0;i<m;i++)
	{
        if(int(b[i])%3!=0) //перевіряється, чи не кратне 3, і рахується кількість таких чисел у sb.
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
