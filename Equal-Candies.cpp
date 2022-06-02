# include <iostream>
# include <string>
# define endl '\n'

using std::cin; using std::cout; using std::string;

int main() {
    int n; cin >> n;

    while (n--) {
        int x, a, sum = 0, min = 1e7;
        cin >> x;
        for (int i = 0; i < x; i++) {
            cin >> a;
            sum += a;
            if (a < min) min = a;
        }
        cout << sum - x*min << endl;
    } 

    return 0;
}