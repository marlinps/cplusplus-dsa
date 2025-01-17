#include <iostream>
using namespace std;

int main()
{
    int n;
    int f = 1;

    cout << "n : ";
    cin >> n;

    for(int i=1; i<=n; i++){
        f *= i;
    }

    cout << "factorial : "<<f;

    return 0;
}