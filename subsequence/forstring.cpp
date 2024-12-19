//generate all subsequence
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void subseq(string &s,int index,int n,vector<string>&ans,string &temp){
    if(index==n){
        ans.push_back(temp);
        return;
    }
    //not inlcude
    subseq(s,index+1,n,ans,temp);
    //include
    temp.push_back(s[index]);
    subseq(s,index+1,n,ans,temp);
    temp.pop_back();
}
int main(){
    string s="abc";
    vector<string>ans;
    string temp;
    subseq(s,0,3,ans,temp);
    //print value;
    for(int i=0;i<ans.size();i++){
        //as j can vary for 1 to n so we take variable j size
       
            cout<<ans[i]<<endl;
        }
        
    }
