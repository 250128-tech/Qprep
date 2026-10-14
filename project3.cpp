//
// Created by xurshid on 10/14/26.
//
#include <iostream>
using namespace std;

int main() {
    int i = 1;
    int k = 0;
    int counter = 0;
    int n; cin >> n;
    while ( n > 0 ) {
        k += i * ( n % 10 );
        n = n / 10;
        i *= -1;
        counter += 1;
    } cout << ( counter % 2 == 1 ? k : k * ( -1 ));
    return 0;
}