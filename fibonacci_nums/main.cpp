#include <iostream>								//include directive

#define minusNull -1

long long fiboPlus(long long f_num,long long s_num) {			// function for calculate a fibo-numbers

	long long plus_num = f_num + s_num;

	return plus_num;							
}

int main() {									// main function

	long long f_num = 0;
	long long s_num = 1;

	while (true) {								// infinite loop

		if (f_num <= minusNull or s_num <= minusNull) {

			f_num = 0;
			s_num = 1;

		}

		f_num = fiboPlus(f_num, s_num);
		s_num = fiboPlus(f_num, s_num);

		std::cout << f_num << std::endl;
		std::cout << s_num << std::endl;
		
	}											

	return 0;									// return main function, can use a void MAIN, not int
}