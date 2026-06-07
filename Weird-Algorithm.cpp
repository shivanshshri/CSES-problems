#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<long long>nums;
    long long n;
    cin>>n;
    nums.push_back(n);
    while(n!=1){
        if(n%2==0){
            n = n/2;
        }
        else{
            n = (n*3) + 1;
        }
        nums.push_back(n);
    }
    for(int i=0 ; i<nums.size(); i++){
        cout<<nums[i]<<" ";
    }
}

//Initial Error - Runtime Error and Wrong Answer
// Fix 1 - Took n as long long
// Fix 2 -  Vector as long long too