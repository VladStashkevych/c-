#include "iostream"
#include "cmath"

using namespace std;

int main() {
	int firstNum, secondNum, plus, minus, pomnojity;
	float podilyty;
	cout << "please, write first numeric ";
	cin >> firstNum;
	cout << endl << "please, write second numeric ";
	cin >> secondNum;
		plus = firstNum + secondNum;
		minus = firstNum - secondNum;
		pomnojity = firstNum * secondNum;
		podilyty = firstNum / secondNum;
	cout << endl << "Plus " << firstNum << " + " << secondNum << " is " << plus;
	cout << endl << "Minus " << firstNum << " - " << secondNum << " is " << minus;
	cout << endl << "Pomnojity " << firstNum << " * " << secondNum << " is " << pomnojity;
	cout << endl << "Podilyty " << firstNum << " / " << secondNum << " is " << podilyty << endl;
	system("pause");

	return 0;
}