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
    for(int i=k;i<n;i++){
        if(arr[i]==arr[k]){
            cnt+=1;
        }
    }
    cout<<cnt<<endl;
    return 0;
 
}
