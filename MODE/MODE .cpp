#include <iostream>

#define MODE 1

int add(int a, int b) {
	return a + b;
}

int main() {	
	setlocale(LC_ALL, "Russian");

 #if MODE == 0
	std::cout << "������� � ������ ����������" << std::endl;
  #elif MODE == 1
	std::cout << "������� � ������ ������" << std::endl;
	int a, b;
	std::cout << "������� ����� 1: ";
	std::cin >> a;
	std::cout << "������� ����� 2: ";
	std::cin >> b;
	std::cout << "��������� ��������: " << add(a,b) <<std::endl;
  #else
	std::cout << "����������� �����. ���������� ������" << std::endl;
  #error examination MODE
 #endif

	return 0;
}