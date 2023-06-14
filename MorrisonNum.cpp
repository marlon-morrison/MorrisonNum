#include <iostream>

class Numbers {
    private:
    int number;
    
    public:
    Numbers(int new_number)
        :number(new_number){  
            
    }
    std::string print() {
        int newnum = 0;
        std::string lessThan20[] = {"zero", "one ", "two ", "three ", "four ", "five ", "six ", "seven ", "eight ", "nine ", "ten ", "eleven ", "twelve ", "ththirteen ", "fourteen ", "fifteen ", "sixteen ", "seventeen ", "eighteen ", "nineteen "};

        int nums[] = {};
        std::string beginnum[] = {"twenty ", "thirty ", "forty ", "fifty ", "sixty ", "seventy ", "eighty ", "ninety "};
        int count = 0;
        int countnum = number;

        std::string tho = "thousand ";
        std::string hundred = "hundred ";

        while (countnum != 0) {
            countnum = countnum / 10;
            count++;
        }

        for (int i = 0; i < count; i++) {
            nums[i] = number%10;
            number /= 10;
        }
        if (count == 6) {
            std::cout << lessThan20[nums[5]] << hundred << beginnum[nums[4]-2] << lessThan20[nums[3]] << tho << lessThan20[nums[2]] << hundred << beginnum[nums[1]-2] << lessThan20[nums[0]];
        } else if(count == 5){
            newnum = nums[4]*10;
            newnum = newnum + nums[3];
            if (newnum<19) {
                std::cout << lessThan20[newnum] << tho << lessThan20[nums[2]] << hundred << beginnum[nums[1]-2] << lessThan20[nums[0]];
            } else {
                std::cout << beginnum[nums[4]-2] << lessThan20[nums[3]] << tho << lessThan20[nums[2]] << hundred << beginnum[nums[1]-2] << lessThan20[nums[0]];
            }
        } else if(count == 4){
            std::cout << lessThan20[nums[3]] << tho << lessThan20[nums[2]] << hundred << beginnum[nums[1]-2] << lessThan20[nums[0]];
        } else if(count == 3){
            std::cout << lessThan20[nums[2]] << hundred << beginnum[nums[1]-2] << lessThan20[nums[0]] << "\n";
        } else if(count == 2){
            newnum = nums[1]*10;
            newnum = newnum + nums[0];
            if (newnum<19) {
                std::cout << lessThan20[newnum];
            } else {
                std::cout << beginnum[nums[1]-2] << lessThan20[nums[0]];
            }
        } else if(count == 1){
            std::cout << lessThan20[nums[0]];
        }
        
        
    };
};

int main() {
    int number;
    std::cout << "Enter numders from the range of 0 through 999999.\n";
    std::cin >> number;
    Numbers Numbers(number);
    std::cout << Numbers.print();
}