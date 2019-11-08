// 7-11-19.cpp
// Given a list of numbers and a number k, return whether any two numbers from the list add up to k.
// For example, given [10, 15, 3, 8,12, 13, 21] and k of 17, return true since 10 + 7 is 17.
// Aaked by : Google (Easy)
// author : Kaushik
// date : 07/11/19

#include <iostream>
#include <cstdlib>

using namespace std;

bool addUp(int arr[], int size, int k);

int main() {
    cout << "Enter the size of the array\n";
    int size = 0;
    cin >> size;
    if (size <= 0) {
        cout <<"Size is 0 or negative";
        return EXIT_SUCCESS;    
    }
    int arr[size];
    cout << "Enter the elements of the array";
    for (int i = 0; i< size; i++) {
        cin >> arr[i];
    }
    int  k = 0;
    cout <<"Enter the value k that the list should add up to\n";
    cin >> k;
    string res = addUp(arr,size,k) ? "TRUE" : "FALSE";

    cout <<"Did add up ? "<<res<<endl;
    

    return EXIT_SUCCESS;
}

bool addUp(int arr[], int size, int k) 
{
    bool didAddUp = false;
    for (int i = 0; i< size - 1; i++) {
        for (int j = i+1; j< size; j++) {
            if (k == arr[i] + arr[j]) {
                didAddUp = true;
                return didAddUp;
            }
        }
    }
    return didAddUp;
}