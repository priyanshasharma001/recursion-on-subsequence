//subset sum
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void subseq(int arr[],int index,int n,int sum){
    if(index==n){
      cout<<sum;
        return;
    }
    //not inlcude
    subseq(arr,index+1,n,sum);
    //include
   
    subseq(arr,index+1,n,sum+arr[index]);
}
int main(){
    int arr[]={1,2,3};
 
    int sum=0;
    subseq(arr,0,3,sum);
    
        cout<<endl;
    }
