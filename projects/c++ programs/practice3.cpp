// Program to check if a number is an Armstrong number
#include <iostream>
using namespace std;

// Function to calculate the power of a number
int power(int num, int exp) {
    int result = 1;
    for (int i = 0; i < exp; i++) { // Fix: Change i <= exp to i < exp
        result *= num;
    }
    return result;
}

// Function to calculate the total digits in a number
int totalDigits(int no) {
    int n = 0;
    while (!(no == 0)) {
        int ld = no % 10;
        n++;
        no = no / 10;
    }
    return n;
}

int main() {
    int k;
    cout << "Enter any number: ";
    cin >> k;

    int l = k;
    int an = 0;
    while (!(l == 0)) {
        int ld = l % 10;
        int p = power(ld, totalDigits(l));
        an += p;
        l = l / 10;
    }

    if (an == k)
        cout << "It's an Armstrong number.";
    else
        cout << "It is not an Armstrong number.";

    return 0;
}
