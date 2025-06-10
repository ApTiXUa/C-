#include <iostream>
using namespace std;

void arrb(float *a,int n) //a — вказівник на масив чисел типу float n — розмір масиву;
{
    int m=0; //int(a[i]) — приводить елемент до цілого типу (тобто обрізає дробову частину).
	         // Умова: число парне і стоїть на непарній позиції (індекс непарний).
    for(int i=0;i<n;i++)
	{
        if(int(a[i])%2==0&& i%2!=0)
            m++;
    }
    float *b = new float[m]; //ті самі умови, збереження елементів у b[].

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
    cout<<"Enter n for first array:"; //Зчитування значень;
    cin>>n; 

    float *a = new float[n]; //Виділення пам’яті для масиву a;
   
    for(int i=0;i<n;i++)
	{
        cin>>a[i];
    }
    arrb(a,n); //Передача масиву у функцію arrb();
    delete[] a; //Звільнення пам’яті.


    return 0;
}
