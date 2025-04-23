#include <iostream>

using namespace std;


int main(){
    int n, m = 30001, key;
    cin >> n;
    for(int i = 1; i <= n; ++i) {
        cin >> key;
        if(m >= key && key % 10 == 4)
        m = key;
    }
    cout << m;
}
