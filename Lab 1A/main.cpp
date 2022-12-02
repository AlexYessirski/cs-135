#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    /*
    Name: ALex Yeh, 5008110544, CS 135, LAB 1A
    Description: LAB 1A
    Input: EXPECTED_PROGRAM_INPUT
    Output: EXPECTED_PROGRAM_OUTPUT
*/

    /* 
    I joined this course last Thursday so I am a bit behind. I wrote the code for this assignment
    using internet tutorials; the output seems to check out but I don't know if I should be writing the
    formulas using specific code. I just wanted to inform you.
    */

    /* 5 + 2 */
    int a = 5;
    int b = 2;
    int sum = a + b;
    cout << a << " + " << b << " = " << sum;

    cout << "\n"; 

    /* 5 - 2 */
    int c = 5;
    int d = 2;
    int difference = c - d;
    cout << c << " - " << d << " = " << difference;

    cout << "\n"; 

    /* 5 * 2 */
    int e = 5;
    int f = 2;
    int product = e * f;
    cout << e << " * " << f << " = " << product;

    cout << "\n"; 

    /* 5 * 2 */
    int g = 5;
    int h = 2;
    int quotient = g/h;
    cout << g << " / " << h << " = " << quotient;

    cout << "\n";

    /* 5 % 2 */
    int i = 5;
    int j = 2;
    int percent = i%j;
    cout << i << " % " << j << " = " << percent;

    cout << "\n";

    /* 5.0 / 2.0 */
    const double k = 5.0;
    const double l = 2.0;
    const double quotienta = k/l;
    cout << fixed << setprecision(1) << k << " / " << l << " = " << quotienta;
    return 0;
}