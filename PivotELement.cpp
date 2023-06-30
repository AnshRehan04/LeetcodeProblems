#include <vector>

int pivotIndex(vector<int>& nums) {
    int totalSum = 0;
    int leftSum = 0;
    
    // Calculate the total sum of all elements
    for (int num : nums) {
        totalSum += num;
    }
    
    // Iterate through the array and check if the left sum is equal to the right sum
    for (int i = 0; i < nums.size(); i++) {
        // Subtract the current element from the total sum
        totalSum -= nums[i];
        
        // If the left sum is equal to the right sum, return the current index
        if (leftSum == totalSum) {
            return i;
        }
        
        // Add the current element to the left sum
        leftSum += nums[i];
    }
    
    // No pivot index found
    return -1;
}
