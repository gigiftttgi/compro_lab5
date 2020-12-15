#include<iostream>
using namespace std;

int main(){
    int even,odd,i=1;
    while(i!=0)
    {
        cout << "Enter an integer: ";
        cin >> i;
        if (i%2==0&&i!=0)
            even++;
        else
            odd++;
    }
    odd=odd-2;
    cout << "#Even numbers = "<<even;
    cout << "\n#Odd numbers = "<<odd;
    return 0;
}
