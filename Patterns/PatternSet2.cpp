#include<bits/stdc++.h>
using namespace std;

// Pattern 1
//     *    
//    ***
//   ***** 
//  ******* 

void pattern1_method1(int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n-i;j++){
            cout<<" ";
        }
        for(int k=0;k<=i;k++){
            cout<<"*";
        }
        for(int l=0;l<i;l++){
            cout<<"*";
        }
        cout<<endl;
    }

}

void pattern1_method2(int n){
    for(int i=0;i<n;i++){
        //space
        for(int j=0;j<n-i-1;j++){
            cout<<" ";
        }
        //stars
        for(int j=0;j<2*i+1;j++){
            cout<<"*";
        }
        cout<<endl;
    }
}

void pattern2(int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<i;j++){
            cout<<" ";
        }
        for(int j=0;j<2*n-(2*i+1);j++){
            cout<<"*";
        }
        cout<<endl;
    }
}

int main(){
    int n;
    cin>>n;
    pattern1_method1(n);
    pattern1_method2(n);
    pattern2(n);
}