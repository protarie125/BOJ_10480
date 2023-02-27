#include <iostream>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	std::cin.tie(nullptr);

	int n; cin >> n;
	while (0 < (n--)) {
		int x; cin >> x;
		if (0 == x % 2) {
			cout << x << " is even\n";
		}
		else {
			cout << x << " is odd\n";
		}
	}

	return 0;
}