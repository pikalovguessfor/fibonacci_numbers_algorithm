#include <iostream>								//include directive

long fiboPlus(long f_num, long s_num) {			// function for calculate a fibo-numbers

	long plus_num = f_num + s_num;

	return plus_num;							
}

int main() {									// main function

	long f_num = 0;
	long s_num = 1;

	while (true) {								// infinite loop

		f_num = fiboPlus(f_num, s_num);
		s_num = fiboPlus(f_num, s_num);

		std::cout << f_num << std::endl;
		std::cout << s_num << std::endl;
		
	}											

	return 0;									// return main function, can use a void MAIN, not int
}