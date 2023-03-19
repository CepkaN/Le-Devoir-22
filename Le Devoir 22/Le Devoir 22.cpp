#include<iostream>
#include<cstdlib>
#include<ctime>

template<typename T>
void riemp(T bloc[], const int cif) {
	srand(time(NULL));
	for (int i = 0; i < cif; i++)
		bloc[i] = rand() % 15;
}
template<typename T>
void aff(T bloc[], const int cif) {
	std::cout << '[';
	for (int i = 0; i < cif; i++)
		std::cout << bloc[i] << ", ";
	std::cout << "\b\b ]\n";
}
void p_swap(int* pb, int cif) {
	for (int i = 0; i < cif; i += 2) {
		int tmp = *(pb+i);
		*(pb + i) = *(pb + i + 1);
		*(pb + i + 1) = tmp;
	}
}
void func(int *num, int st) {
	int y = *num;
	for (int i = 1; i < st; i++)
		*num =*num * y;
}
int main() {
	setlocale(LC_ALL, "Russian");
	// ������ 1.
	std::cout << "������ 1.\n������ : \n";
	const int dix = 10;
	int mass[dix];
	riemp(mass, dix);
	aff(mass, dix);
	std::cout << '\n';
	int* pmass = mass;
	p_swap(pmass, dix);
	aff(mass, dix);
	// ������ 2.
	std::cout << "\n\n������ 2.\n������� ����� � ��� ������� : ";
	int numero, deg;
	std::cin >> numero >> deg;
	func(&numero, deg);
	std::cout << numero;

	return 0;
}