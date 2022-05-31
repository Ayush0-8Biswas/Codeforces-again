# include <iostream>
# include <string>

using std::cin; using std::cout; using std::string;

int main() {
    int n; cin >> n;
    while (n--) {
        int rating; cin >> rating;
        if (rating < 1400) {
            cout << "Division 4\n";
        } else if (rating < 1600) {
            cout << "Division 3\n";
        } else if (rating < 1900) {
            cout << "Division 2\n";
        } else {
            cout << "Division 1\n";
        }
    }

    return 0;
}