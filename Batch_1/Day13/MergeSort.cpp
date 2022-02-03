#include<iostream>
#include<vector>

using namespace std;


void merge( vector<int> &v, int s1, int e1, int s2, int e2 ) {

    // Time: O(n)
    // Space: O(n)

    int ns = e2-s1+1;
    vector<int> merger(ns);

    int i=s1, j=s2, k=0;

    while ( i<=e1 && j<=e2  ) {

        if ( v[i] < v[j] ) {
            merger[k] = v[i];
            i++;
        } else {
            merger[k] = v[j];
            j++;
        }
        k++;

    }

    // either i>e1 i.e. array 1 utilized and array 2 might be still left.
    //     or j>e2 i.e. array 2 utilized and array 1 might be still left.
    //     or both
    
    while ( j<=e2  ) {
        merger[k] = v[j];
        j++, k++;
    }

    while ( i<=e1  ) {
        merger[k] = v[i];
        i++, k++;
    }
    
    for ( int k = 0 ; k < ns ; k++ ) 
        v[s1+k] = merger[k] ;

}


void mergeSort( vector<int> &v, int st, int end ) {


    // Time: O(n*log2(n))
    // Space: O(n) // Call Stack + Merger Array

    if ( st==end ) {
        return ;//
    }

    int mid = (st+end)/2;

    mergeSort(v,st,mid);
    mergeSort(v,mid+1,end);

    merge(v, st,mid, mid+1,end );
}

int main() {

    int n;
    cin >> n;
    vector<int> v(n);

    // for ( int i:v ) cout << i << " "; cout << endl;

    // INTERVIEW
    // for ( int i:v ) {
    //     cout << i << " "; 
    // }
    // cout << endl;
    
    for ( int &i:v )   
        cin >> i;
    
    // for ( int i:v ) cout << i << " "; cout << endl;

    mergeSort(v,0,n-1);    
    // CP
    for ( int i:v ) cout << i << " "; cout << endl;



}
