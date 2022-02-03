#include<iostream>
#include<vector>

using namespace std;

void merge(vector<int> &v, int s1, int e1, int s2, int e2) {

    // Time:  O(n)
    // Space: O(n)

    int ns = (e2-s1)+1;
    vector<int> merger(ns);

    int i = s1, j = s2, k = 0;

    // while ( !(j>e2  || i>e1) )  {
    while ( j<=e2 && i<=e1 )  {

        if ( v[i] < v[j] ) {
            merger[k] = v[i];
            i++;
        } else {
            merger[k] = v[j];
            j++;
        }
        k++;

    }

    // if you are here then
    // either j>e2 i.e. array2 is consumed and array1 might be pending.
    //     or i>e1 i.e. array1 is consumed and array2 might be pending.

    while ( i<=e1 ) {
        merger[k] = v[i];
        i++, k++;
    }

    while ( j<=e2 ) {
        merger[k] = v[j];
        j++, k++;
    }

    // merger

    for ( int i = 0 ; i < ns ; i++ ) {
        v[s1+i] = merger[i];
    }


}

void mergeSort(vector<int> &v, int s, int e) {

    if ( s==e )
        return;

    int mid = (s+e)/2;

    mergeSort(v,s,mid);
    mergeSort(v,mid+1,e);

    merge(v, s,mid, mid+1,e );


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
