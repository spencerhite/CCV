#include <iostream>
#include <array>

using namespace std;

bool luhn(const string& nums){
    int nDigits = nums.size();
    int nSum = 0, second = false;
    for(int i = nDigits - 1; i >= 0; i--){
        int a = nums[i] - '0';
        if(second == true){
            a = a*2;
        }
        nSum += a / 10;
        nSum += a % 10;

        second = !second;
        }
    return (nSum % 10 == 0);
}
int main() {

    string nums = "79927398713";

    if(luhn(nums)){
        cout<<"This is a valid card"<<endl;
    }
    else{
        cout<<"This is not a valid credit card number"<<endl;
    }


}
