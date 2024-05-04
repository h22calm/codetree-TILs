#include <iostream>
using namespace std;
int main() {
    int a=13;
    float b=0.165;
    cout<<fixed;
    
    cout<<a<<" "<<"*"<<" "<<b<<" "<<"="<<" ";
    cout.precision(6);
    cout<<a*b;
    // 여기에 코드를 작성해주세요.
    return 0;
}