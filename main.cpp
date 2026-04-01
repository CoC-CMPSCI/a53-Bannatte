#include <iostream>
using namespace std;

int main() {
    long long begin, end;

    // TODO: prompt user for begin and end values
    // cout << "Enter begin and end values: ";
    cin >> begin >> end;
    long long summation = 0;
    
        
    // TODO: loop from begin to end and accumulate sum of even values
    for (long long i = begin; i <= end; ++i) {
        if (i % 2 == 0) {
            summation += i;
        }
    }

    cout << "The sum of even values is " << summation << endl;
    return 0;
}
