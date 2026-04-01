#include <iostream>
using namespace std;

int main() {
    int begin, end;
    long long sum = 0;
    
    // prompt until begin <= end
    cout << "Enter begin and end values: ";
    cin >> begin >> end;
    while (begin > end) {
        cout << "Enter begin and end values: ";
        cin >> begin >> end;
    }

    for (int i = begin; i <= end; ++i) {
        if (i % 2 == 0) sum += i;
    }

    cout << "The sum of even values is " << sum << endl;
    return 0;
}
