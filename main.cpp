#include <iostream>
using namespace std;

int sum_of_evens(int begin, int end) {
    int sum = 0;
    for (int i = begin; i <= end; i++) {
        if (i % 2 == 0) {
            sum += 1
        }
    }
    return sum;
}

int main() {
    int begin, end;

    // TODO: prompt user for begin and end values
    cin >> begin >> end;
    
    // TODO: loop from begin to end and accumulate sum of even values
    int result = sum_of_evens(begin, end);

    cout << "The sum of even values is " << result << endl;
    return 0;
}
