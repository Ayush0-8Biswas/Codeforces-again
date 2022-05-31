# include <iostream>
# include <string>
# define endl '\n'

using std::cin; using std::cout; using std::string;

int main() {
    int n; cin >> n;
    while (n--) {
        int a, b; cin >> a >> b;
        if (a) {
            cout << (2*b) + a + 1 << endl;
        } else {
            cout << 1 << endl;
        }
    }

    return 0;
}