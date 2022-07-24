# include <iostream>
# include <string>
# define endl '\n'

using std::cin; using std::cout; using std::string;

int main() {
    int n; cin >> n;

    while (n--) {
        int p; cin >> p;
        cout << 2 << " " << p - 1 << endl;
    }    

    return 0;
}