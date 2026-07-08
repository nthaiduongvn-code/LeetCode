#include <bits/stdc++.h>
using namespace std;
long long sumAndMultiply (int n){
    int sum = 0;
    long long kq1 = 0;
    long long kq = 0;
    int temp;
    while (n >0){
        temp = n % 10;
        if (temp !=0){
            kq1 = kq1*10 + temp;
            sum+= temp;
        }
        n/=10; 
    }
    while (kq1> 0 ){
        kq = kq*10 + kq1 % 10;
        kq1 /= 10;
    }

    return kq * sum;
}
int main(){
    int n;
    cin >> n;
    cout << sumAndMultiply(n);

}