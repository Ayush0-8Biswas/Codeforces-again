# include <iostream>
# include <string>
# define endl '\n'

using std::cin; using std::cout; using std::string;

int main() {
    int n; cin >> n;

    while (n--) {
        int x; cin >> x;
        string s; cin >> s;
        for (int i = 0; i < x; i++) {
            if (s[i] == 'U') {
                cout << 'D';
            } else if (s[i] == 'D') {
                cout << 'U';
            } else {
                cout << s[i];
            }
        }
        cout << endl;
    }

    return 0;
}