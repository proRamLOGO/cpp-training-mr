#include<iostream>
#include<vector>

using namespace std;

// int linearSearch(vector<int> nums) {
int linearSearch_R2L(vector<int> &nums, int element) {

    // for ( int i = nums.size() - 1; i >= 0 ; i-- )
    // for ( int i:nums )
    //     cout << i << ' ';
    // cout << endl;

    int counter = 0;
    for ( int i = nums.size() - 1; i > -1 ; i--, counter++ )
        if ( nums[i]==element ) {
            cout << "\nLinear Search l2r ran: " << counter << endl;
            return i;
        }
    
    // ELEMENT NOT FOUNT
    cout << "\nLinear Search r2l ran: " << counter << endl;
    return -1;

}

int linearSearch_L2R(vector<int> &nums, int element) {

    int counter = 0;
    for ( int i = 0; i < nums.size() ; i++, counter++ )
        if ( nums[i]==element ){
            cout << "\nLinear Search l2r ran: " << counter << endl;
            return i;
        }
    
    // ELEMENT NOT FOUNT
    cout << "\nLinear Search l2r ran: " << counter << endl;
    return -1;

}


int binarySearch(vector<int> &nums, int element) {

    int lo=0, hi=nums.size()-1, counter = 0;

    while ( lo <= hi  ) {
        
        int mid = (lo+hi)/2;

        if ( nums[mid] == element ) {
            cout << "\nBinary Search ran: " << counter << endl;
            return mid;
        } else if ( nums[mid] > element )
            hi = mid-1;// Discard Right Side
        else
            lo = mid+1;// Discard Left Side
        
        counter++;
    }   

    cout << "\nBinary Search ran: " << counter << endl;
    // ELEMENT NOT FOUNT
    return -1;

}

int main() {

    int n, x;
    cin >> n >> x;
    vector<int> v(n);
    for ( int i = 0; i < n; i++ ) cin >> v[i];
    
    cout << "Element " << x << " found at index : " << linearSearch_R2L(v,x) << endl ;
    cout << "Element " << x << " found at index : " << linearSearch_L2R(v,x) << endl ;
    cout << "Element " << x << " found at index : " << binarySearch(v,x) << endl ;

}
100
4 5 7 10 11 13 15 18 20 21 25 26 27 30 33 34 35 36 37 39 42 43 44 45 46 47 49 51 52 53 54 55 57 64 65 66 67 68 69 70 71 72 74 77 78 79 80 83 84 87 88 89 92 93 94 98 100 102 103 106 110 112 113 114 115 124 126 129 133 135 137 140 144 146 148 149 150 151 154 155 157 159 161 163 164 167 168 169 171 172 174 179 184 186 188 189 191 192 194 200