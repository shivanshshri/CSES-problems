#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    vector<int>count;
    int c = 1;
    for(int i=0; i<s.size(); i++){
        if(s[i]==s[i+1]){
            c++;
        }
        else{
            count.push_back(c);
            c = 1;
            
        }
    }
        cout<<*max_element(count.begin(), count.end());
}