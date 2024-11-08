#include <iostream>
#include <string>
#include <vector>

void PrimaryArithmetic (int a, int b) {
    int counter = 0;
    int carry = 0;

    while (a > 0 || b > 0) {
        int num1 = a % 10;
        int num2 = b % 10;
    

    int sum = num1 + num2 + carry;

    if (sum >= 10) {
        carry = 1;
        counter++;
    } else {
        carry = 0;
    }

    a /= 10;
    b /= 10;

    }

    if (counter == 0) {
        std::cout << "No carry operation." << std::endl;
    } else {
        std::cout << counter << " carry operations." << std::endl;
    }
}



std::string commonPermutations (std::string a, std::string b) {
   
    std::vector<int> aCount(26,0);
    std::vector<int> bCount(26,0);

    for (char ch : a) {
        aCount[ch - 'a']++;
    }
    for (char ch : b) {
        bCount[ch - 'a']++;
    }


std::string result = "";
for (int i = 0; i < 26; i++) {
    int count = std::min(aCount[i], bCount[i]);
    result += std::string(count, 'a' + i);
}

return result;
}




