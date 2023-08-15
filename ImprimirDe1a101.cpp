// Programa que escribe los numeros del 1 al 101

#include <iostream>
using namespace std;

int paso1(int i);
int paso2(int i);

int paso1(int i) {
	if (i == 0) return 0; 
		int num = 1 + paso2(i - 1);
		cout << num << ", ";
		return num;
}

int paso2(int i) {
	if (i == 0) return 0;
		int num = 1 + paso1(i - 1);
		cout << num << ", ";
		return num;
}


int main() {

	int i = 101;

	paso2(i);

	cout << "\n";

	paso1(i);

	return 0;
}


