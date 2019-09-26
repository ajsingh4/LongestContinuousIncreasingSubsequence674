//
//  main.cpp
//  LongestContinuousIncreasingSubsequence674
//
//  Created by Aj Gill on 9/25/19.
//  Copyright © 2019 Aj Gill. All rights reserved.
//

#include <iostream>
#include <vector>

using namespace std;

int findLengthOfLCIS(vector<int>& nums) {
    int length = 0;
    for(int beginPtr = 0; beginPtr < nums.size(); beginPtr++){
        //Start the window from the begin pointer each time, minimum count is 1
        int count = 1, endPtr = beginPtr;
        //Check if the next number is larger, if so increment count
        while(endPtr+1 < nums.size() && nums[endPtr+1] > nums[endPtr]){
            endPtr++;
            count++;
        }
        //Compare count with length
        length = max(count, length);
    }
    return length;
}

int main() {
    vector<int> nums = {1,3,5,4,7};
    int length = findLengthOfLCIS(nums);
    cout << "The longest increasing and continous subarray is of size " << length << "\n";
}
