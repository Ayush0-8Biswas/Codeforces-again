# include <iostream>
# include <string>
# define endl '\n'

using std::cin; using std::cout; using std::string;

int main() {
    int n; cin >> n;

    while (n--) {
        int ticket; cin >> ticket;
        int a = 0, b = 0, mask = 100000;
        while (mask) {
            a += ticket%10;
            b += ticket/mask;
            ticket = ticket%mask;
            ticket = ticket/10;
            mask /= 100;
        }
        if (a == b) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }

    return 0;
}