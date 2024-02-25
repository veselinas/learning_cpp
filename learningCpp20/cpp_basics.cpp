#include <iostream> // input/output
#include <iomanip> // e.g. formatting
#include <cstdint> // ensure int variables are correctly sized for your application accross platforms
#include <math.h> // diff from cmath??
#include <string>
//#include <fmt/core.h> // formatting similar to python; TO DO: check how to download
using namespace std;
// using std::cout is an alternative 


// exactly one main fuction - where the program execution begins
int main() {
    int n{ 0 }, m{ 0 }; // int, long, long long or Open Source e.g. BinNumber
    // int n{ 12.5 }; -> narrowing conversions -> compiling error; data loss
    // ++c (increase c first and use then) vs c++ (use c first and increase then)
    cout << setprecision(2) << fixed; // fixed point format; setprecision is just formatting, value in memory remains unchanged
    // sticky settings - applied until changed
    double d{ 12.8437 }; // float, double, long double
    // representation error 13.02 vs 13.0199999999....
    // cout << fmt::format( '{} is float and {} is int\n', d, n );

    cout << "m before loop " << m << "\n";
    for (; n < 10; n++, m--) {
        cout << setw( 4 ) << n << setw( 20 ) << pow(d, n) << '\n'; // setw only applies to the statement next to it
    }
    cout << "m after loop " << m << "\n";

    string s{ "MyNewString" }; // ' used for characters, "" used for strings
    cout << sizeof( s ) << " vs. " << s.length() << '\n'; // sizeof is not lenght
    cout << sizeof( m ) << '\n';
    string s_empty;
    if (s_empty.empty()) cout << "String is empty\n"; // other operations include: starts_with(char), ends_with(char), +, etc. 
    
    if ( n == 0 ); // empty statement
    else if( n < 10 ){
        cout << "n < 10\n";
    }
    else {
        cout << "n >= 10\n";
    }
    int i{ 0 };
    int sum_i{ 0 };

    // add do{} to execute the statement at least one
    while (cin >> i) { // Ctrl + Z to interrupt on Windows, Ctrl + D otherwise
        sum_i += i;
    }
    cout << "sum_i/m is " << static_cast<double>(sum_i)/m << '\n'; // int/int is an integer division; cast operator

    switch (n) {
    case 10:
        n++;
        [[fallthrough]]
    case 11:
        cout << "We enter this statement and compiler shouldn't complain because of fallthrough\n";
    default:
        n = 10;
    }


    return 0;
}