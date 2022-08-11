#include <bits/stdc++.h>
using namespace std;
  
// Function to count the number of
// possible numbers divisible by 3
void findCount(string number)
{
  
    // Calculate the sum
    int sum = 0;
    for (int i = 0; i < number.length(); ++i) {
        sum += number[i] - 48;
    }
  
    // Store the answer
    int count = 0;
  
    // Consider the edge case when
    // the number itself is divisible by 3
    // The count will be added by 1
    if (sum % 3 == 0)
        count++;
  
    // Iterate over the range
    for (int i = 0; i < number.length(); ++i) {
  
        // Decreasing the sum
        int remaining_sum = sum - (number[i] - 48);
  
        // Iterate over the range
        for (int j = 0; j <= 9; ++j) {
  
            // Checking if the new sum
            // is divisible by 3 or not
            if ((remaining_sum + j) % 3 == 0
                && j != number[i] - 48) {
  
                // If yes increment
                // the value of the count
                ++count;
            }
        }
    }
    cout << count;
}
  
// Driver Code
int main()
{
    // Given number
    string number = "235";
  
    findCount(number);
    return 0;
}
