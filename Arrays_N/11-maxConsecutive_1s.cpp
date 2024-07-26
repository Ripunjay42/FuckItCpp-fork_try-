#include<iostream>
#include <bits/stdc++.h>
using namespace std;

int getNumber (vector<int>arr){
    int size = arr.size();
    int maxi = 0;
    int count = 0;
    for(int i=0; i< size; i++)
    {
        if(arr[i] == 1){
            count ++;
            maxi = max(maxi, count);
        }
        else{
            count = 0;
        }
    }
    return maxi;
}

int main()
{
    vector <int> arr{1,1,0,1,1,1,1,0,1};
    int result = getNumber(arr);

    cout << "Max number of consecutive 1's: " << result ;
    return 0;
}