# include <iostream>
# include <string>
# define endl '\n'

using std::cin; using std::cout; using std::string;

int main() {
    int n; cin >> n;

    while (n--) {
        string s; cin >> s;
        int* occurence = (int*)calloc(26, sizeof(int));
        for (const char c:s) {
            occurence[c - 'a']++;
        }
        int sum = 0;
        for (int i = 0; i < 26; i++) {
            sum += occurence[i] > 1 ? 2 : occurence[i];
        }
        cout << sum / 2 << endl;
    }    

    return 0;
}