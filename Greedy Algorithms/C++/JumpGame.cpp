include <vector>
#include <iostream>
#include <cassert>


 /**
 * @brief This function implements the above algorithm
 * @param array of numbers containing the maximum jump (in steps) from that index
 * @returns bool value whether final index can be reached or not
 */  
bool canJump(const std::vector<int> &nums) {
    auto lastPos = nums.size() - 1;
    for (auto i = nums.size() - 1; i >= 0; i--) {
        if (i + nums[i] >= lastPos) {
            lastPos = i;
        }
    }
    return lastPos == 0;
}


/**
 * @brief Function to test above algorithm
 * @returns void
 */
static void test(){
  // Test 1
  std::vector<int> num1={4,3,1,0,5};
  assert(canJump(num1)==true);
  std::cout<<"Input: ";
  for(auto i: num1){
    std::cout<<i<<" ";
  }
  std::cout<<"Output: true"<<std::endl;
  // Test 2
  std::vector<int> num2={3,2,1,0,4};
  assert(canJump(num2)==false);
  std::cout<<"Input: ";
  for(auto i: num2){
    std::cout<<i<<" ";
  }
  std::cout<<"Output: false"<<std::endl;
}


/**
 * @brief Main function
 * @returns 0 on exit
 */
int main(){
    test();
    return 0;
}