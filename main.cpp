#include <iostream>
#include <list>

using namespace std;

int main(int argc, char const *argv[])
{
	list<int> multiples;

	for(int i = 1; i < 1000; ++i) {
		if(!(i % 3) || !(i % 5)) {
			multiples.push_back(i);
		}
	}

	int count = 0;

	for(auto i : multiples) {
		count += i;
	}

	cout << "The sum of multiples of 3 and 5 less than 1000 is " << count << endl;
	return 0;
}
