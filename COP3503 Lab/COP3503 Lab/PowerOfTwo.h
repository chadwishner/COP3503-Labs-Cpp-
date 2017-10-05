#include <iostream>
#include <math.h>


int PowerOfTwo(){
	std::cout << "Input a number to check if it is a power of 2\n";
	int n;
	std::cin >> n;
	bool pow2 = false;

	double m = n;

	if (m == 2 || m == 1){
		pow2 = true;
	}

	for(int i = 0; i <= n/2; i++){
		m = m/2;
		if (m ==2){
			pow2 = true;
			break;
		}
	}

	if (pow2){
		std::cout << n << " is a power of 2!\n";
	}
	else{
		std::cout << n << " is not a power of 2!\n";
	}

	return 0;
}
