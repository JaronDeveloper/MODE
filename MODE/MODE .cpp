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
	std::cout << "Константа не определена MODE" << std::endl;
#endif
	
	if (a == 1) {
#if MODE == 0
		std::cout << "Работаю в режиме тренировки" << std::endl;
#elif MODE == 1
		std::cout << "Работаю в боевом режиме" << std::endl;
		int a, b;
		std::cout << "Введите число 1: ";
		std::cin >> a;
		std::cout << "Введите число 2: ";
		std::cin >> b;
		std::cout << "Результат сложения: " << add(a, b) << std::endl;
#else
		std::cout << "Неизвестный режим. Завершение работы" << std::endl;
#endif
	}

	return 0;
}
