#include <bits/stdc++.h>
using namespace std;

stack<int> tumpukan;

int fibo(int n){
    if(n==1){
        return 0;
    } else if(n==2 || n==3){
        return 1;
    } else{
        return(fibo(n-1)+fibo(n-2));
    }
}

int main(){


    int n;
    cout << "Masukkan nilai n: ";
    cin >> n;
    for(int i=1; i<=n; i++){
        tumpukan.push(fibo(i));
    }

    while (!tumpukan.empty()) {
        cout << tumpukan.top() <<" ";
        tumpukan.pop();
    }

    return 0;
}