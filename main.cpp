#include <iostream>
#include <iomanip>
using namespace std;

int sum_of_evens(int begin, int end) {
    int sum = 0;
    for (int i = begin; i <= end; i++) {
        if (i % 2 == 0) {
            sum += i;
        }
    }
    return sum;
}

int main() {
    int begin, end;

    cout << "Enter begin and end values: ";
    cin >> begin >> end;
    
    int result = sum_of_evens(begin, end);

    cout << "The sum of even values is " << result << endl;
    return 0;
}
