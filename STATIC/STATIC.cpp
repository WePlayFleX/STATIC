#include <iostream>

using namespace std;

float getavg(float);

int main()
{
	float data = 1, avg;

	while (data != 0)
	{
		cout << "Enter number: ";
		cin >> data;
		avg = getavg(data);
		cout << "Mean: " << avg << endl;
	}

	system("pause");
	return 0;
}

float getavg(float newdata)
{
	static float total = 0;
	static int count = 0;
	count++;
	total += newdata;

	return total / count;
}