#include <iostream>
#include <vector>

using namespace std;

// int linearSearch(vector<int> nums, int element) {
int linearSearchL2R(vector<int> &nums, int element) {

    // Time: O(n), Ω(1), Θ(sqrt n)
    // Space: O(1)

    int counter = 0;

    for ( int i = 0 ; i < nums.size() ; i++, counter++ )
        if ( nums[i] == element ) {
            cout << "\nLinear Search L2R took " << counter << " operations\n";
            return i;
        }
    
    cout << "\nLinear Search L2R took " << counter << " operations\n";
    return -1; // LEEMENT DOESNT EXIST

}
// int linearSearch(vector<int> nums, int element) {
int linearSearchR2L(vector<int> &nums, int element) {

    // Time: O(n), Ω(1), Θ(sqrt n)
    // Space: O(1)
    int counter =0 ;
    for ( int i = nums.size()-1 ; i>-1 ; i--, counter++ )
        if ( nums[i] == element ){
            cout << "\nLinear Search R2L took " << counter << " operations\n";
            return i;
        }
    cout << "\nLinear Search R2L took " << counter << " operations\n";
    return -1; // LEEMENT DOESNT EXIST

}

int binarySearch(vector<int> &nums, int element) {

    // Time: O(log2(n))
    // Space: O(1)

    int lo=0, hi=nums.size()-1, counter=0;

    while ( lo<=hi ) {

        int mid = (lo+hi)/2;

        if (nums[mid] == element ){
            cout << "\nBinary Search took " << counter << " operations\n";
            return mid;
        } else if (nums[mid] > element )
            hi = mid-1;
        else
            lo = mid+1;

        ++counter;
    }

    return -1;

}

int main() {

    int n, x;
    cin >> n >> x;
    vector<int> v(n);
    for ( int i = 0 ; i < n ; i++ ) {
        cin >> v[i];
    }

    cout << linearSearchL2R(v,x) << endl;
    cout << linearSearchR2L(v,x) << endl;
    cout << binarySearch(v,x) << endl;

}

// 8 3
// 5 7 -1 3 4 2 11 8

// 100 4
// 4 5 7 10 11 13 15 18 20 21 25 26 27 30 33 34 35 36 37 39 42 43 44 45 46 47 49 51 52 53 54 55 57 64 65 66 67 68 69 70 71 72 74 77 78 79 80 83 84 87 88 89 92 93 94 98 100 102 103 106 110 112 113 114 115 124 126 129 133 135 137 140 144 146 148 149 150 151 154 155 157 159 161 163 164 167 168 169 171 172 174 179 184 186 188 189 191 192 194 200