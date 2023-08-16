#include <iostream>
#include <vector>

int main() {
	std::vector<int> myvector;
	int myint;

	std::cout << "Please enter some integers (enter 0 to end) :\n";

	do {
		std::cin >> myint;
		myvector.push_back(myint);
	} while (myint);

	std::cout << "myvector stores " << myvector.size() << "\n";
	std::cout << typeid(myvector).name() << "\n";
	std::cout << typeid(myvector.size()).name()<< std::endl;
}
