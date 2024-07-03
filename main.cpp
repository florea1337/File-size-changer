#include <iostream>
#include <string>
#include <cmath>

using namespace std;

// Large static data to increase the file size
const char largeData[80 * 1024 * 1024] = { 'x' };  // 80 MB array initialized with 'a'


int main()
{
    cout << "Hello World !!";
    cout << "Dummy data value: " << largeData[0] << endl;

    return 0;
}
