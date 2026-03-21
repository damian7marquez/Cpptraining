/*
 * PROBLEM: 412. Fizz Buzz
 * LEVEL: Easy
 * * TASK:
 * Given an integer n, return a string array "answer" (1-indexed) where:
 * - answer[i] == "FizzBuzz" if i is divisible by 3 and 5.
 * - answer[i] == "Fizz" if i is divisible by 3.
 * - answer[i] == "Buzz" if i is divisible by 5.
 * - answer[i] == i (as a string) if none of the above conditions are true.
 * * CONSTRAINTS:
 * 1 <= n <= 10,000
 * * HARDWARE LOGIC SUMMARY:
 * This problem tests the ability to use a loop counter (Register) and 
 * conditional branching (If/Else) based on the result of a modulo 
 * operation (ALU Remainder).
 */
#include <iostream>
using std::cout;
int n;

int main() {

for(n <= 1; n <= 100; n++)
{
    if (n % 3 == 0 && n % 5 ==0)
    {
        cout << "FizzBuzz\n";
    }
    else if (n % 3 == 0)
    {
        cout << "Fizz\n";
    }
    else if (n % 5 == 0)
    {
        cout << "Buzz\n";
    }
    else 
    {
        cout << n << "\n";
    }
}

    return 0;
}