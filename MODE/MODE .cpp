#include <iostream>

#define MODE 

int add(int a, int b) {
	return a + b;
}

int main() {
	setlocale(LC_ALL, "Russian");
	int a = 0;

#if defined MODE
	a = 1;
#else
	std::cout << "��������� �� ���������� MODE" << std::endl;
#endif
	
	if (a == 1) {
#if MODE == 0
		std::cout << "������� � ������ ����������" << std::endl;
#elif MODE == 1
		std::cout << "������� � ������ ������" << std::endl;
		int a, b;
		std::cout << "������� ����� 1: ";
		std::cin >> a;
		std::cout << "������� ����� 2: ";
		std::cin >> b;
		std::cout << "��������� ��������: " << add(a, b) << std::endl;
#else
		std::cout << "����������� �����. ���������� ������" << std::endl;
#endif
	}

	return 0;
}
