#include<iostream>
using namespace std;

int main(){
    int i,n,j,k;
    
    cin>>n;
    for(i=1; i<=n; i++){
        for(j=n; j>i; j--){
            
            cout<<" ";
        }
        for(k=1; k<=i; k++){
            
            cout<<"#";
        }
        
           cout<<"\n";        
    }
    return 0;
