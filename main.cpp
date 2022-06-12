#include <iostream>
#include <string>

enum RomanNumerals {
    I =    1,
    V =    5,
    X =   10,
    L =   50,
    C =  100,
    D =  500,
    M = 1000
};


class Solution {
public:
    int romanToInt(std::string s) {
        RomanNumerals rm;
        
        bool odd = 0;
        int result = 0;
        
        int size = s.length();
        
        int nums[size];

        for(int i = 0; i < size; i++) {
            switch (s[i]) 
            {
                case 'I':
                nums[i] = I;
                continue;
                
                case 'V':
                nums[i] = V;
                continue;
                
                case 'X':
                nums[i] = X;
                continue;
                
                case 'L':
                nums[i] = L;
                continue;
                
                case 'C':
                nums[i] = C;
                continue;
                
                case 'D':
                nums[i] = D;
                continue;
                
                case 'M':
                nums[i] = M;
                continue;
                
                default:
                printf("ERROR: Invalid input");
                exit(1);
            }
        }

        int i = 0;
                
        while(i < size) {
            if(nums[i + 1] > M) {
                result += nums[i];
                i++;
            } else if(nums[i] < nums[i + 1]) {
                result += nums[i + 1] - nums[i];
                i += 2;
            } else {
                result += nums[i];
                i++;
            }
        }
        
        return result;
    }
};

int main(int argc, char **argv) {
    Solution solution;

    if(argc == 1) {
        printf("ERROR: no input \n");
        exit(1);
    } 
    
    int result = solution.romanToInt(argv[1]);

    std::cout << "Result: " << result << "\n";
    
    return 0;
}


