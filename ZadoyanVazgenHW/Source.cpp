#include <iostream>
#include <stdlib.h>
#include <string>
#include <time.h>
#include <iomanip>  // чтобы работал precision
#include <math.h>  // функции модуля числа, синуса, косинуса и прочее здесь
#include <cmath>

float cost, weight1, weight2, konf, pech, iter;

using namespace std; //автоприменение std
using std::cout;
using std::cin;
using std::endl;

//Задача 14
void func14() {
	cout << "Write cost of konf: ";
	cin >> konf;
	cout << "Write cost of pech: ";
	cin >> pech;
	cout << endl;
	cout << "Write weight of konf: ";
	cin >> weight1;
	cout << "Write weight of pech: ";
	cin >> weight2;
	cout << endl;
	cout << "Write iter: ";
	cin >> iter;
	cout << endl;


	
}

int main() {
	//Задача 1 
	/*cout << " *****       " << endl
		<< " *    *      " << endl
		<< " *     *     " << endl
		<< " *    *      " << endl
		<< " *****       " << endl
		<< " *    *      " << endl
		<< " *     *     " << endl
		<< " *    *      " << endl
		<< " *****       " << endl;*/



	//Задача 2
	/*float a, h, P, S;

	cout << "Storona A=";
	cin >> a;
	cout << endl << "Visota H=";
	cin >> h;

	P = 4 * a;
	S = a * h;
	std::cout << "P="<<  P << endl;
	std::cout << "S=" << S << endl;*/

	//Задача 8(E)
	//e^(x−2)+|sin(x)|−x^4⋅cos(1/x) при x=3.6

	/*float x, acount;
	
	cout << "x=3.6"<< endl;

	x = 3.6;

	acount = exp(x - 2) + fabs(sin(x)) - pow(x, 4) * cos(1 / x);
		cout << "acount="<<acount;*/


	//Задача 9 (e)
	/*float N, V1, V2, V3;

	cout << "Mlint: ";
	cin >> N;
	cout << "           " << endl;
	V1 = N / 5;
	V2 = N / 15;
	V3 = N /300;

	cout << "+--------------------+-------------------+-------------------+" << endl
		 << "|         tea        |         table     |         cup       |" << endl
		 << "+--------------------+-------------------+-------------------+" << endl
		 << "|       " << V1
		 << "         |     " << V2
		 << "       |       " << V3
		 << "     |" << endl
		 << "+--------------------+-------------------+-------------------+" << endl;*/


	//Задача 14

	func14();
	cost = iter * (weight1 * konf + weight2 * pech);
	cout << "Cost=" << cost;

	return 0;
}