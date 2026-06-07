for(int i=1; i<=n; i++){
        nums.push_back(i);
    }

    approach 1 - unordered set
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