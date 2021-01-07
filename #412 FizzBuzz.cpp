// This is an extremely simple problem that just focuses on order of checking using if/else if or switch statements
// Whenever we have a number that is divisble by only 3, we 
class Solution {
public:
    vector<string> fizzBuzz(int n) {
        vector<string> result;
        // Given the range n, use a for loop to iterate through the values from 1 to n (inclusive)
        for(int i = 1; i <= n; i++)
        {
            // The first condition is if it's divisible by both 3 and 5. If so, we push FizzBuzz into the vector
            if(i % 3 == 0 && i % 5 == 0)
            {
                result.push_back("FizzBuzz");
            }
            // If it is only divisible by 3 and not 5, then push Fizz into the vector
            else if(i % 3 == 0)
            {
                result.push_back("Fizz");
            }
            // If it is only divisible by 5 and not 3, then push Buzz into the vector
            else if(i % 5 == 0)
            {
                result.push_back("Buzz");
            }
            // If it is neither divisble by 3 nor divisible by 5, push the integer into the vector
            else
            {
                result.push_back(to_string(i));
            }
        }
        // Return result vector
        return result;
    }
};
