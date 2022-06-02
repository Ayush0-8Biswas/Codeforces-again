# include <iostream>
# include <string>
# define endl '\n'

using std::cin; using std::cout; using std::string;

int main() {
    int n; cin >> n;

    while (n--) {
        string s; cin >> s;
        char c; cin >> c;
        int size = s.length();
        for (int i = 0; i < size; i += 2) {
            if (s[i] == c) {
                cout << "YES" << endl;
                goto here;            
            }
        }
        cout << "NO" << endl;
        here:;
    }

    return 0;
}