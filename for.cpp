#include <iostream>
using namespace std;

int main(){
    int n;
  
    cout << "n: ";
    cin >> n;

    for(int i=1; i<=n; i++){//TODO: possible for(int i=1; i<=n || j ; i+2), sesuai dengan kebutuhan
        cout << i <<" ";
    }

    cout << endl;
    return 0;

}