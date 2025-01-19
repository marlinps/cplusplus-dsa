#include <iostream>
using namespace std;

//TODO: Sum of all numbers from 1 to N which are divisible by 3

int main(){
    int n;
    int sum = 0;

    cout << "n : ";
    cin  >> n;

    for(int i=1; i<=n; i++){
        if(i%3 != 0){
            sum +=  i;
        }
    }

    cout <<"sum : "<<sum;
    return 0;
}