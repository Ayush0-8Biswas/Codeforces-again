# include <iostream>

using namespace std;

int main() {
    int n, distressed = 0;
    long long stock;
    cin >> n >> stock;

    while (n--) {
        char operation;
        long long amount;
        cin >> operation >> amount;

        if (operation == '+') {
            stock += amount;
        } else {
            if (amount > stock) {
                distressed++;
            } else {
                stock -= amount;
            }
        }
    }
    cout << stock << " " << distressed << endl;
}