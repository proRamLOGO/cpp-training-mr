#include <iostream>
#include <vector>

using namespace std;

long long int factorial(long long int num) {

    // Time: O(n)
    // Space: O(n)

    if ( num <= 1 )
        return 1;
    
    return num * factorial(num-1);

}

int main() {

    long long int n;
    cin >> n;
    for ( long long int i = 0; i <= n; i++ ) {
        cout << i << "! = " << factorial(i) << endl;
    }

}

// 8 3
// 5 7 -1 3 4 2 11 8

// 100 4
// 4 5 7 10 11 13 15 18 20 21 25 26 27 30 33 34 35 36 37 39 42 43 44 45 46 47 49 51 52 53 54 55 57 64 65 66 67 68 69 70 71 72 74 77 78 79 80 83 84 87 88 89 92 93 94 98 100 102 103 106 110 112 113 114 115 124 126 129 133 135 137 140 144 146 148 149 150 151 154 155 157 159 161 163 164 167 168 169 171 172 174 179 184 186 188 189 191 192 194 200