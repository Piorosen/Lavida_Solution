#include <iostream>

int main(){
	int testCase = 0;
	int input = 0;

	std::cin >> testCase;

	for (int i = 0; i < testCase; i++){
		std::cin >> input;
		if (input%2 == 1 || input == 2){
			std::cout << "NO" << std::endl;
		}else{
			std::cout << 2 << " " << input - 2 << std::endl;
		}
	}
}