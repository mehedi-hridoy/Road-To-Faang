#include<bits/stdc++.h>
using namespace std;

vector<int> decimalToBinary(int n) {

    vector<int> binary;

    if(n == 0) {

        binary.push_back(0);

        return binary;
    }

    while(n != 0) {

        binary.push_back(n % 2);

        n /= 2;
    }

    reverse(binary.begin(), binary.end());

    return binary;
}

int binaryToDecimal(vector<int>& binary) {

    int decimal = 0;

    int power = 0;

    for(int i = binary.size() - 1; i >= 0; i--) {

        decimal += binary[i] * pow(2, power);

        power++;
    }

    return decimal;
}

vector<int> addBinary(vector<int>& a, vector<int>& b) {

    vector<int> result;

    int i = a.size() - 1;
    int j = b.size() - 1;

    int carry = 0;

    while(i >= 0 || j >= 0 || carry) {

        int sum = carry;

        if(i >= 0) {
            sum += a[i];
            i--;
        }

        if(j >= 0) {
            sum += b[j];
            j--;
        }

        result.push_back(sum % 2);

        carry = sum / 2;
    }

    reverse(result.begin(), result.end());

    return result;
}

int main() {

    int x, y;
    cin >> x >> y;

    vector<int> binary1 = decimalToBinary(x);

    vector<int> binary2 = decimalToBinary(y);

    vector<int> binarySum = addBinary(binary1, binary2);

    cout << "Binary Sum: ";

    for(int bit : binarySum) {
        cout << bit;
    }

    cout << endl;

    int decimalAnswer = binaryToDecimal(binarySum);

    cout << "Decimal Sum: " << decimalAnswer << endl;
}