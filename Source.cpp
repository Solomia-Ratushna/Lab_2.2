#include <iostream>
#include <cmath>


using namespace std;
int main()
{
	double a; // ������� ��������
	//double z1; // ��������� ���������� 1-�� ������
	double z2; // ��������� ���������� 2-�� ������
	double Pi = 4 * atan(1.);


	cout << "a=";  cin >> a;

	//z1 = cos(a) + sin(a) + cos(3 * a) + sin(3 * a);
	z2 = 2 * sqrt(2) * cos(a) * sin(Pi / 4 + 2 * a);


	//cout << "z1 = " << z1 << endl;
	cout << "z2 = " << z2 << endl;


	return 0;
}