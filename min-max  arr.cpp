#include<iostream>
using namespace std;
int main(){
    int i,n,max,min;
    cin>>n;
    int a[n];
    for(i=0; i<n; i++){
        cin>>a[i];
    }
    max=a[0];
    min=a[0];
    for(i=0; i<n; i++){
        if(a[i]>max){
            max=a[i];}
    
    if(a[i]<min){
        min=a[i];
    }}
     cout<<"maximum: "<<max<<endl;
    cout<<"minimum: "<<min<<endl;
    return 0;
    
}
