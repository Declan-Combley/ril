#include <iostream>
#include <string>

class Solution {
public:
//  TODO: implement negative stuff
    int romanToInt(std::string s) {
        int result = 0;
        
        for(int i = 0; i < s.length(); i++) {
            switch (s[i]) {
                case 'I':
                result = result + 1;
                continue;
                
                case 'V':
                result = result + 5;
                continue;
                
                case 'X':
                result = result + 10;
                continue;
                
                case 'L':
                result = result + 50;
                continue;
                
                case 'C':
                result = result + 100;
                continue;
                
                case 'D':
                result = result + 500;
                continue;
                
                case 'M':
                result = result + 1000;
                continue;
                
                default:
                printf("ERROR: all input must be roman numerals");
                exit(1);
            }
        }

        return result;
    }
};

int main() {
    Solution solution;

    std::string input = "XVVM";

    int result = solution.romanToInt(input);

    std::cout << " result: " << result << "\n";
    return 0;
}


