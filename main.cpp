// 1952. Užduotis
#include <iostream>
using namespace std;
void Sprendimas(int n);


int main() {

    int n;
    cin >> n;
    Sprendimas(n);


    return 0;
}
void Sprendimas(int n) {
    int rez;
    for(int i=1; i<=n; i++)
    {
        if(n % i == 0) {
            rez++; }
    }
    if(rez==3)
        cout <<"True";
    else cout <<"False";
}