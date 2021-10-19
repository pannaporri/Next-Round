#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,k;
    cin>>n>>k;
    int cnt=k;
    int arr[n];
    for(int i=0;i<n;i++){
        int a;
        cin>>a;
        arr[i]=a;
    }
    if(k==1 && arr[0]==0){
        cout<<0<<endl;
    }
    else if(k>1 && k<n && arr[k]!=0){
        for(int i=k;i<n;i++){
        if(arr[i]==arr[k]){
            cnt+=1;
        }
    }
    cout<<cnt<<endl;
    }
    else if(k==n && arr[k-1]==0){
        for(int i=0;i<n-1;i++){
            if(arr[i]>0){
                cnt+=1;
            }
        }
    }
    else if(k==n && arr[k-1]!=0){
        cout<<n<<endl;
    }
    return 0;
 
}
