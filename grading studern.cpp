#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,r=0,nm=0,s=0,i  ;
    cin>>n;
    int grade[n];
    for(int i=0; i<n; i++){
        
    cin>>grade[i];
    
    }
        
    for(int i=0; i<n; i++){
        
        r = (grade[i]%5)-5;
        r = abs(r);
         nm = r+grade[i];
    
        s = nm-grade[i];
        
        if(grade[i]<38){
            cout<<grade[i]<<endl;
        }
        else{    

        if(s<3){
            cout<<nm<<endl;
        }
        else if(s>=3){
            cout<<grade[i]<<endl;
        }
      } 
    }

    return 0;
    
}
