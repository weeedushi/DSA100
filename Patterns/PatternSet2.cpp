#include<bits/stdc++.h>
using namespace std;

// Pattern 1
//     *    
//    ***
//   ***** 
//  ******* 

// Pattern 2
//  ******* 
//   ***** 
//    ***
//     *  

// Pattern 3
//     *    
//    ***
//   ***** 
//  ******* 
//  ******* 
//   ***** 
//    ***
//     *  

void pattern1_method1(int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n-i-1;j++){
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

void pattern3(int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n-i-1;j++){
            cout<<" ";
        }
        for(int j=0;j<2*i+1;j++){
            cout<<"*";
        }
        cout<<endl;
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<i;j++){
            cout<<" ";
        }
        for(int j=0;j<2*n-(2*i+1);j++){
            cout<<"*";
        }
        cout<<endl;
    }
    cout<<"Thankyou everyone"<<endl;
}

void pattern4_method1(int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
            cout<<"*";
        }
        cout<<endl;
    }
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-i-1;j++){
            cout<<"*";
        }
        cout<<endl;
    }
}

void pattern4_method2(int n){
    for(int i=1;i<=2*n-1;i++){
        int stars=i;
        if(i>n) stars=2*n-i;
        for(int j=1;j<=stars;j++){
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
    pattern3(n);
    pattern4_method1(n);
    pattern4_method2(n);
}