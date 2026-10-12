#include <iostream>
#include <vector>

using namespace std;

int main() {
int n;
cin >> n;

vector<int> arr(n);
for (int i = 0; i < n; ++i) {
cin >> arr[i];

}

int x;
cin >> x;

int pos = -1;

for (int i = 0; i < n; ++i) {
if (arr[i] == x) {
pos = i + 1;
break;
}
}

if (pos == -1) {
cout << "не найдено" << endl;
}
else {
cout << "позиция: " << pos << endl;

}

return 0;

}
