//
// Created by xurshid on 10/14/26.
//

//
// Created by xurshid on 10/14/26.
//
#include <iostream>
using namespace std;

int main() {

    // Declaration
    int n; cin >> n;
    int k = 0;
    int i = 0;

    // Loop
    while ( n > i ) {
        i += 1;
        int x; cin >> x;
        if ( x == 0 ) {
            k -= 1001;
            break;
        }
        if ( x < 0) {
            k += 1;
        }
    }

    // condition
    cout << (  k < 0 ? 0 : k % 2 == 1 ? -1 : 1 );
    return 0;
}