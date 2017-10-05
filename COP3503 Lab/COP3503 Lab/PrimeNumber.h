#include <iostream>

int PrimeNumber (){

	std::cout << "Input a number to check if it is prime 2\n";
	int n;
	std::cin >> n;
	int k = 0;

	for (int i = 1; i<= n; i++){
		if (n % i == 0){
			std::cout << i << ",";
			k++;
		}
	}
	std::cout << "\n";
	if (k == 2 || n == 1) std::cout << "Prime!\n";
	else std::cout << "Not Prime!\n";
	return 0;
}
