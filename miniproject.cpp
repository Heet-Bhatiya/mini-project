#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;


int gcd(int a, int b) {
    if (b == 0)
        return a;
    else
        return gcd(b, a % b);
}


int lcm(int a, int b) {
    return (a * b) / gcd(a, b);
}


int gcdOfVector(vector<int> &numbers) {
    int result = numbers[0];
    for (int i = 1; i < numbers.size(); i++) {
        result = gcd(result, numbers[i]);
    }
    return result;
}


int lcmOfVector(vector<int> &numbers) {
    int result = lcm(numbers[0], numbers[1]);
    for (int i = 2; i < numbers.size(); i++) {
        result = lcm(result, numbers[i]);
    }
    return result;
}

int main() {
    vector<int> numbers;
    int num;
    cout << "Enter integers (type -1 to stop): ";
    while (cin >> num && num != -1) {
        numbers.push_back(num);
    }
    int gcdVal = gcdOfVector(numbers);
    int lcmVal = lcmOfVector(numbers);
    cout << "GCD = " << gcdVal << endl;
    cout << "LCM = " << lcmVal << endl;
    return 0;
}
