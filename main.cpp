#include <iostream>
using namespace std;

int main() {
    int sofiapokushala;
    cout << "sofia pokushala? (1 - da, 0 - net): "; 
    cin >> sofiapokushala;

    if (sofiapokushala == 1) {
        cout << "sofia molodec" << endl;
    } else {
        cout << "sofia ti cho borshish" << endl;
    }

    return 0;
}