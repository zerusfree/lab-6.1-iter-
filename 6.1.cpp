#include<iostream>
#include<time.h>
#include<iomanip>

using namespace std;
void Create(int mas[], const int n, const int Low, const int High)
{
	for (int i = 0; i < n; i++)
	{
		mas[i] = Low + rand() % (High - Low + 1);
	}
}

void Print(int mas[], const int n)
{
	cout << "a[ ";
	for (int i = 0; i < n; i++)
	{
		cout << mas[i] << " ";
	}
	cout << "]" << endl;
}

int Sum(int mas[], const int n)
{
	int s = 0;
	for (int i = 0; i < n; i++)
	{
		if (mas[i] < 0 || (mas[i] % 2) != 0)
			s += mas[i];
	}
	return s;
}

int K(int mas[], const int n)
{
	int kilk = 0;
	for (int i = 0; i < n; i++)
	{
		if (mas[i] < 0 || (mas[i] % 2) != 0)
			kilk += 1;
	}
	return kilk;

}
int Zam(int mas[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		if (mas[i] < 0 || (mas[i] % 2) != 0)
			mas[i] = 0;
	}
	return *mas;
}


int main()
{
	srand((unsigned)time(NULL));
	const int k = 24;
	int a[k];

	int Low = -15;
	int High = 50;
	Create(a, k, Low, High);
	Print(a, k);
	cout << "Sum = " << Sum(a, k) << endl;
	cout << "k = " << K(a, k) << endl;

	Zam(a, k);
	Print(a, k);

	return 0;
}
