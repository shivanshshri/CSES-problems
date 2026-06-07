#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int> nums;
    for(int i=1; i<=n; i++){
        nums.push_back(i);
    }

    // approach 1 - unordered set
    unordered_set<int>nums1;
    for(int i=0; i<n-1; i++){
        int ele;
        cin>>ele;
        nums1.insert(ele);
    }
    for(int i=0; i<n; i++){
        if(nums1.find(nums[i])==nums1.end()){
            cout<<nums[i];
        }
    }
    // got accepted

    //approach 2 - trying(brute force) --- had to handle too many edge cases... (slight logical error in code)
    // for(int i=0; i<n-1; i++){
    //     int ele;
    //     cin>>ele;
    //     nums.push_back(ele);
    // }
    // sort(nums.begin(), nums.end());
    // int j = 1;
    // for(int i=0; i<nums.size(); i++){
    //     if(nums[i]!=j){
    //         cout<<j;
    //         break;
    //     }
    //     else{
    //         j++;
    //     }
    // }
}