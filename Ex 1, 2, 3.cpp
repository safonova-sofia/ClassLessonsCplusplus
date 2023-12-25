#include <iostream>

double* array_storage(int length_array1) {
	double* array = new double[length_array1];
	return array;
}

void array_el(double* array, int length_array1) {
	for (int i=0; i < length_array1; i++) {
		array[i] = rand();
	}
}

void array_elshow(double* array, int length_array1) {
	for (int i = 0; i < length_array1; i++) {
		std::cout << array[i] << "  ";
	}
	std::cout << std::endl;
}

void delete_storagedouble(double* array1) {
	delete[] array1;
	array1 = 0;

	std::cout << "Stotage is empty" << std::endl;
}

void delete_storageint(int* array1) {
	delete[] array1;
	array1 = 0;

	std::cout << "Stotage is empty" << std::endl;
}

void int_array_el(int* array) {
	for (int i = 0; i < 12; i++) {
		array[i] = rand();
	}
}

void int_array_elshow(int* array) {
	for (int i = 0; i < 12; i++) {
		std::cout << array[i] << "  ";
	}
	std::cout << std::endl;
}

void swap_el(int* array) {
	for (int i = 0; i < 11; i=i+2) {
		int k = 0;
		k = array[i];
		array[i] = array[i + 1];
		array[i + 1] = k;
	}
}


int main() {

	//Task 1

	long int value1 = 1234567;
	float const value2 = 45.45667;
	char value3 = 122;
	unsigned int value4 = 64234459;
	double value5 = 1653.328743;


	const float* const ptr_floatconst = &value2;

	typedef long int* ptr_longinttype;
	ptr_longinttype ptr_lc = &value1;

	double* ptr_double;

	const short int* ptr_shortint;

	typedef const float* const ptr_floatconst_type;
	ptr_floatconst_type ptr_fc = &value2;

	typedef char* prt_char_type;
	prt_char_type prt_c = &value3;

	double* const ptr_doubleconst = &value5;

	typedef const unsigned int* ptr_unsignedint_type;
	ptr_unsignedint_type ptr_ui = &value4;




	//Task 2

	int length_array1;

	std::cout << "Task 2" << std::endl << std::endl;

	std::cout << "Enter the number of elements in array (to finish enter 9999): " << std::endl;
	std::cin >> length_array1;

	while (length_array1 != 9999) {
		double* array1 = array_storage(length_array1);
		array_el(array1, length_array1);
		array_elshow(array1, length_array1);
		delete_storagedouble(array1);

		std::cout << "Enter the number of elements in array (to finish enter 9999): " << std::endl;
		std::cin >> length_array1;
	}




	//Task 3
	std::cout << "Task 3" << std::endl << std::endl;

	int* array2 = new int[12];
	int_array_el(array2);
	std::cout << "First array:" << std::endl;
	int_array_elshow(array2);

	swap_el(array2);

	std::cout << "Changed array:" << std::endl;
	int_array_elshow(array2);


	delete_storageint(array2);


	return 0;
}
