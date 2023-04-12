#include <iostream>
#include <map>
using namespace std;
 
int sumOfElements(int arr[], int n){
 
    // Map is used to calculate frequency of elements of array
    map<int, int> m;
    for(int i = 0; i < n; i++){
        if(m.find(arr[i]) != m.end()){
            m[arr[i]]++;
        } else {
            m[arr[i]] = 1;
        }
    }
 
    int sum = 0;
 
    // Traverse the map
    for(auto it = m.begin(); it != m.end(); ++it){
 
        // Calculate the sum of elements
        // having frequencies greater than
        // or equal to the element itself
        if(it->second >= it->first){
            sum += it->first;
        }
    }
 
    return sum;
}