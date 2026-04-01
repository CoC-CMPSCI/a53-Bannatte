#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int i, sum = 0;
    int begin = 1;
    int end = 0;

    // TODO: prompt user for begin and end values
    while (begin > end) {
        cout << "Enter begin and end values: ";
        cin >> begin >> end;
    }
    
    // TODO: loop from begin to end and accumulate sum of even values
    for (int i = begin; i <= end; ++i) {
        if (i % 2 == 0) {
            sum += i;
        }
    }

    cout << "The sum of even values is " << sum << endl;
    return 0;
}
