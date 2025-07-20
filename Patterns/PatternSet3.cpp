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

void pattern4(int n){
    for(int i=0;i<n;i++){
        char ch='A';
        for(int j=0;j<=i;j++){
            cout<<ch<<" ";
            ch++;
        }
        cout<<endl;
    }
}

void pattern5(int n){
    for(int i=0;i<n;i++){
        for(char ch='A';ch<'A'+n-i;ch++){
            cout<<ch<<" ";
        }
        cout<<endl;
    }
}

void pattern6(int n){
    for(int i=0;i<n;i++){
        char ch='A'+i;
        for(int j=0;j<=i;j++){
            cout<<ch<<" ";
        }
        cout<<endl;
    }
}

void pattern7(int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n-i-1;j++){
            cout<<" ";
        }
        for(int j=0;j<=i;j++){
            char ch='A'+j;
            cout<<ch;
        }
        for(int j=i;j>0;j--){
            char ch='A'+j-1;
            cout<<ch;
        }
        cout<<endl;
    }
}

void pattern7_method2(int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n-i-1;j++){
            cout<<" ";
        }
        char ch='A';
        int breakpoint= (2*i+1)/2;
        for(int j=1;j<=2*i+1;j++){
            cout<<ch;
            if(j<=breakpoint) ch++;
            else ch--;
        }
        cout<<endl;
    }
}

void pattern8(int n){
    for(int i=0;i<n;i++){
        char ch='A'+n-1-i;
        for(int j=0;j<=i;j++){
            cout<<ch;
            ch++;
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
    pattern4(n);
    pattern5(n);
    pattern6(n);
    pattern7(n);
    pattern7_method2(n);
    pattern8(n);
}