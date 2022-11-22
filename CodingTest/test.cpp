#include <iostream>
#include <vector>
#include <algorithm>


using namespace std;

int main()
{
	vector<int> v;
	v.push_back(1);
	v.push_back(2);
	v.push_back(3);

	int op = 0;

	do {
		printf("%d", ++op);
	} while (next_permutation(v.begin(), v.end()));


}