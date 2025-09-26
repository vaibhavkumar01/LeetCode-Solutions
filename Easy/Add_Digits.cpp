#include <iostream>
using namespace std;

class Solution {
public:
    int addDigits(int num) {
        while(num>9)        // To get result in single digit
        {
        int ans = 0, rem;
        while(num!=0)
        {
            rem = num % 10;
            num /= 10;
            ans = ans + rem;
        }
        cout << "Sum of digits: " << ans << endl;       // print intermediate sum
            num = ans;      // update num
        }
        return num;
    }
};

int main(){
    int n;

    cout << "Enter a number: ";
    cin >> n;       // user input

    Solution s;
    cout << "Single-digit sum: " << s.addDigits(n) << endl;

    return 0;
}