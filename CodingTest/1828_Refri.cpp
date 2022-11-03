#include <vector>
#include <iostream>

using namespace std;

int main()
{
	int N;
	vector<int> x;
	vector<int> y;
	vector<int> ref_x;
	vector<int> ref_y;

	scanf("%d", &N);

	for (int i = 0; i < N; i++) {
		int tmp_x = 0;
		int tmp_y = 0;
		cin >> tmp_x >> tmp_y;
		x.push_back(tmp_x);
		y.push_back(tmp_y);
	}

	ref_x.push_back(x[0]);
	ref_y.push_back(y[0]);

	bool op = false;
	for (int i = 1; i < N; i++) {
		op = false;
		for (int k = 0; k < ref_x.size(); k++) {
			if (x[i] <= ref_x[k]) {
				if (y[i] >= ref_x[k] && y[i] <= ref_y[k]) {
					ref_y[k] = y[i];
					op = true;
					break;
				}
				else if (y[i] >= ref_y[k]) {
					op = true;
					break;
				}
			}
			else if (x[i] >= ref_x[k] && x[i] <= ref_y[k]) {
				ref_x[k] = x[i];
				if (y[i] <= ref_y[k]) {
					ref_y[k] = y[i];
				}
				op = true;
				break;
			}
		}
		if (!op) {
			ref_x.push_back(x[i]);
			ref_x.push_back(y[i]);
		}
	}
	

	int size = ref_x.size();
	cout << size << endl;

	return 0;
}