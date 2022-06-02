# include <iostream>
# include <string>
# define endl '\n'

using std::cin; using std::cout; using std::string;

int main() {
    int n; cin >> n;
    while (n--) {
        int a; cin >> a;
        int res = (a/7) * 7;
        if ((res/10)%10 != (a/10)%10) {
            res += 7;
        }
        cout << res << endl;
    }
    return 0;
}