#include <iostream>
using namespace std;

int main() {
    long long begin, end, sum = 0;

    cin >> begin >> end;

    for (long long i = begin; i <= end; ++i) {
        if (i % 2 == 0) {
            sum += i;
        }
    }

    cout << "The sum of even values is " << sum << endl;

    return 0;
}
