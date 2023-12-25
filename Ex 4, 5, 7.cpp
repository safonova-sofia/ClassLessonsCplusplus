#include <iostream>
#include <vector>

/*Объявить и заполнить двумерный динамический массив случайными числами от 10 до 50. Показать его на экран. 
Для заполнения и показа на экран написать отдельные функции. 
(подсказка: функции должны принимать три параметра – указатель на динамический массив, количество строк, количество столбцов). 
Количество строк и столбцов выбирает пользователь. */


// 4 задание
void toFullArray(int** array, int row, int column) {
	srand(time(NULL));
	for (int i = 0; i < row; i++) {
		for (int j = 0; j < column; j++) {
			array[i][j] = 10 + rand() % 50;
		}
	}
};

void toSnowArray(int** array, int row, int column) {
	for (int i = 0; i < row; i++) {
		for (int j = 0; j < column; j++) {
			std::cout << array[i][j] << " ";
		}
		std::cout << std::endl;
	}
};

void Task4() {
	const int ROW_ARRAY = 10;
	const int COLUMN_ARRAY = 10;
	int** array = new int* [ROW_ARRAY];

	//Создание массива
	for (int i = 0; i < ROW_ARRAY; i++) {
		array[i] = new int[COLUMN_ARRAY];
	}

	//Заполнение
	toFullArray(array, ROW_ARRAY, COLUMN_ARRAY);

	std::cout << std::endl;

	//Вывод
	toSnowArray(array, ROW_ARRAY, COLUMN_ARRAY);

	for (int i = 0; i < ROW_ARRAY; i++) {
		delete[] array[i];
	}
	delete[] array;
};



// 5 задание
int doAddition(int a, int b) {
	return a + b;
};

int doSubtraction(int a, int b) {
	return a - b;
};

int doMultiplication(int a, int b) {
	return a * b;
};

int doDivision(int a, int b) {
	return a / b;
};

void Task5() {
	int var1 = 0;
	int var2 = 0;
	char varOperator = 0;

	std::cout << "Введите первую переменную" << std::endl;
	std::cin >> var1;
	std::cout << "Введите вторую переменную" << std::endl;
	std::cin >> var2;
	std::cout << "Введите оператор" << std::endl;
	std::cin >> varOperator;

	int (*fcnPtr)(int, int) = nullptr;
	int fcnOutput = NULL;

	while (varOperator == '+' || varOperator == '-' || varOperator == '/' || varOperator == '*') {
		switch (varOperator) {
		case '+':
			fcnPtr = doAddition;
			fcnOutput = fcnPtr(var1, var2);
			std::cout << fcnOutput << std::endl;

			std::cout << "Вновь введите первую переменную" << std::endl;
			std::cin >> var1;
			std::cout << "Вновь введите вторую переменную" << std::endl;
			std::cin >> var2;
			std::cout << "Вновь введите оператор" << std::endl;
			std::cin >> varOperator;
			break;
		case '-':
			fcnPtr = doSubtraction;
			fcnOutput = fcnPtr(var1, var2);
			std::cout << fcnOutput << std::endl;

			std::cout << "Вновь введите первую переменную" << std::endl;
			std::cin >> var1;
			std::cout << "Вновь введите вторую переменную" << std::endl;
			std::cin >> var2;
			std::cout << "Вновь введите оператор" << std::endl;
			std::cin >> varOperator;
			break;
		case '*':
			fcnPtr = doMultiplication;
			fcnOutput = fcnPtr(var1, var2);
			std::cout << fcnOutput << std::endl;

			std::cout << "Вновь введите первую переменную" << std::endl;
			std::cin >> var1;
			std::cout << "Вновь введите вторую переменную" << std::endl;
			std::cin >> var2;
			std::cout << "Вновь введите оператор" << std::endl;
			std::cin >> varOperator;
			break;
		case '/':
			fcnPtr = doDivision;
			fcnOutput = fcnPtr(var1, var2);
			std::cout << fcnOutput << std::endl;

			std::cout << "Вновь введите первую переменную" << std::endl;
			std::cin >> var1;
			std::cout << "Вновь введите вторую переменную" << std::endl;
			std::cin >> var2;
			std::cout << "Вновь введите оператор" << std::endl;
			std::cin >> varOperator;
			break;
		default:
			break;
		}
	}
	std::cout << "Конец!" << std::endl; // только при вводе 32, т.к. формат char автоматически переводит в символы
};



// 7 задание
void Task7(std::vector<int>& nums) {
	int count = 0;
	int answer = 0;

	for (int num : nums) {
		if (count == 0) {
			answer = num;
		}

		if (num == answer) {
			count++;
		}
		else {
			count--;
		}
	}

	std::cout << answer << std::endl;;
};


int main() {
	setlocale(LC_ALL, "RU");

	/* Task 4 */
	/* Объявить и заполнить двумерный динамический массив случайными числами от 10 до 50.
	Показать его на экран. Для заполнения и показа на экран написать отдельные функции. 
	(подсказка: функции должны принимать три параметра – указатель на динамический массив, количество строк, количество столбцов). Количество строк и столбцов выбирает пользователь. */
	std::cout << "Result of 4 task" << std::endl;
	Task4();
	std::cout << std::endl;	

	/* Task 5 */
	/* Решите задачу, используя один указатель на функцию. Разработайте четыре функции над двумя целыми параметрами, соответствующие арифметическим операциям (+, -, *, /). 
	В основной программе задавайте два целых параметра и символьный знак операции до тех пор, пока не будет введен пробел в качестве знака операции. В выходных данных выводите значения функций.  */
	std::cout << "Result of 5 task" << std::endl;
	Task5();
	std::cout << std::endl;

	/* Task 7 */
	/* https://leetcode.com/problems/find-lucky-integer-in-an-array/ */
	std::cout << "Result of 7 task" << std::endl;
	std::vector<int> vectorArray = { 1,2,2,3,3,3 };
	Task7(vectorArray);
	std::cout << std::endl;
	return 0;
}