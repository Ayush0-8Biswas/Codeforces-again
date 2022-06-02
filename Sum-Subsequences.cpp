# include <iostream>
# include <string>
# define endl '\n'

using std::cin; using std::cout; using std::string;

int main() {
    int n;
    int A[7];
    cin >> n;
    while (n--) {
        for (int i = 0; i < 7; i++) {
            cin >> A[i];
        }
        if (A[0] + A[1] == A[2]) {
            cout << A[0] << " " << A[1] << " " << A[3] << endl;
        } else {
            cout << A[0] << " " << A[1] << " " << A[2] << endl;
        }
    }
    return 0;
}