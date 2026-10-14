//
// Created by xurshid on 10/14/26.
//
#include <iostream>
using namespace std;

int main() {
    int pnum; cin >> pnum;
    int multiplication = 1;
    int summation = 0;

    while ( pnum > 0 ) {
        summation += ( pnum % 10 );
        multiplication = multiplication * ( pnum % 10 );
        pnum = pnum / 10;
    }

    cout << ( multiplication - summation);
    return 0;
}