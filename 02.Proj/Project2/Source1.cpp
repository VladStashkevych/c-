#include "iostream"
#include "cmath"

using namespace std;

int main() {
	int side_A, side_B, Square, Perimeter;
	cout << "Please, input side A - ";
	cin >> side_A;
	cout << endl << "Please, input side B - ";
	cin >> side_B;
	Square = side_A * side_B;
	Perimeter = 2 * (side_A + side_B);
	cout << endl << "Square of rectargle with side " << side_A << " and " << side_B << " is " << Square << endl;
	cout << endl << "Perimeter of rectargle with side " << side_A << " and " << side_B << " is " << Perimeter << endl << endl;
	system("pause");

	return 0;
}
