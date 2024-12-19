//generate all subsequence
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void subseq(int arr[],int index,int n,vector<vector<int>>&ans,vector<int>temp){
    if(index==n){
        ans.push_back(temp);
        return;
    }
    //not inlcude
    subseq(arr,index+1,n,ans,temp);
    //include
    temp.push_back(arr[index]);
    subseq(arr,index+1,n,ans,temp);
}
int main(){
    int arr[]={1,2,3};
    vector<vector<int>>ans;
    vector<int>temp;
    subseq(arr,0,3,ans,temp);
    //print value;
    for(int i=0;i<ans.size();i++){
        //as j can vary for 1 to n so we take variable j size
        for(int j=0;j<ans[i].size();j++){
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
    }
}