//
// Created by xurshid on 10/14/26.
//

#include <iostream>
using namespace std;

int main() {
    // poornumber declaration
    int poornumber; cin >> poornumber;
    int i = 0;

    // infinite division
    while ( poornumber > 0 ) {
        poornumber = poornumber % 2 == 0 ? poornumber / 2 : poornumber - 1 ;
        i +=1;
    }

    // escape
    cout << i;
    return 0;
}
