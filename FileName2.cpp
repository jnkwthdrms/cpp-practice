#include <iostream>
#include <vector>

using namespace std;

int main() {
	int n;
	cin >> n;

	vector <int> arr(n);
	double sum = 0;

	for (int i = 0; i < n; ++i) {
		cin >> arr[i];
		sum += arr[i];
	}

	double srednee = sum / n;

	cout << "среднее: " << srednee << endl;
	cout << "больше среднего: ";

	for (int i = 0; i < n; ++i) {
		if (arr[i] > srednee) {
			cout << arr[i] << " ";
		}
	}

	cout << endl;
	return 0;



}
