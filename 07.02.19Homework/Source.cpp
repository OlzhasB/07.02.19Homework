#include<iostream>
using namespace std;

template<typename T>
int maxArray(T a[], int n, T &max)
{
	/*1.**Напишите шаблон функции, которая осуществляет поиск максимального элемента в массиве. 
	Функция возвращает позицию элемента и его значение. Рекомендации: Воспользуйтесь передачей параметров по ссылке. */
	int index;
	for (int i = 0; i < n; i++)
	{
		if (a[i] > max)
		{
			max = a[i];
			index = i;
		}
	}
	return index;
}

template<typename T>
void zeroArray(T a[], int n)
{
	/*2.**Напишите шаблон функции, которая принимает массив, и выводит на экран позиции нулевых элементов массива.*/
	cout << "Indexes of numbers equal to 0: " << endl;
	for (int i = 0; i < n; i++)
	{
		if (a[i] == 0)
		{
			cout << i << endl;
		}
	}
}

template<typename T>
int XYdegree(T &x, int y)
{
	/*3.	**Напишите шаблон функции, которая принимает x и y и вычисляет x^y. Y – целое число.*/
	x = pow(x, y);
	return x;
}

void task1()
{
	const int n = 10;
	int a[n] = { 0 }, max = 0;
	for (int i = 0; i < n; i++)
	{
		a[i] = 1 + rand() % 20;
		cout << a[i] << "  ";
	}cout << endl;
	cout << "Index of max number is " << maxArray(a, n, max) << endl;
	cout << "Max number is " << max << endl;
	system("pause");
}

void task2()
{
	const int n = 10;
	int a[n] = { 0 };
	for (int i = 0; i < n; i++)
	{
		a[i] = -3 + rand() % 5;
		cout << a[i] << "  ";
	}cout << endl;
	zeroArray(a, n);
	system("pause");
}

void task3()
{
	float x;
	int y;

	cout << "Write any number: ";
	cin >> x;
	cout << "Write the degree: ";
	cin >> y;
	XYdegree(x, y);
	cout << x << endl;
	system("pause");
}

int main()
{
	int fl;
	do {
		int task;
		cout << "The number of task: ";
		cin >> task;
		switch (task)
		{
		case 1:
		{
			task1();
			break;
		}
		case 2:
		{
			task2();
			break;
		}
		case 3:
		{
			task3();
			break;
		}
		}

		cout << "Do you want to continue: 1/0? ";
		cin >> fl;
	} while (fl == 1);
}