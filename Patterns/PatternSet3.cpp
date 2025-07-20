#include<bits/stdc++.h>
using namespace std;

void pattern1(int n){
    int start=1;
    for(int i=0;i<n;i++){
        if(i%2==0) start=1;
        else start=0;
        for(int j=0;j<=i;j++){
            cout<<start<<" ";
            start=1-start;
        }
        cout<<endl;
    }

}

void pattern2(int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
            cout<<j+1;
        }
        for(int j=1;j<=2*(n-i-1);j++){
            cout<<" ";
        }
        for(int j=i;j>=0;j--){
            cout<<j+1;
        }
        cout<<endl;
    }
}

void pattern3(int n){
    int count=1;
    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
            cout<<count<<" ";
            count++;
        }
        cout<<endl;
    }
}

int main(){
    int n;
    cin>>n;

    pattern1(n);
    pattern2(n);
    pattern3(n);
}