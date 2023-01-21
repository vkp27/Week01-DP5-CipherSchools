#include<bits/stdc++.h>
using namespace std;

int firstOccurrence(vector<int> &nums, int start, int end, int target){

    if(start > end){
        return -1;
    }
    else if(start == end){
        return (nums[start] == target? 0 : -1);
    }
    else{
        int mid = start + (end - start) / 2;

        if(nums[mid] < target){
            return firstOccurrence(nums, mid + 1, end, target);
        }
        else if(nums[mid] > target){
            return firstOccurrence(nums, start, mid - 1, target);
        }
        else{
            if((mid == 0) && (mid >= 1 && nums[mid - 1] < nums[mid])){
                return mid;
            }
            return firstOccurrence(nums, mid + 1, end, target);
        }

    }
}

int lastOccurrence(vector<int> &nums, int start, int end, int target){

    if(start > end){
        return -1;
    }
    else if(start == end){
        return (nums[start] == target? 0 : -1);
    }
    else{
        int mid = start + (end - start) / 2;

        if(nums[mid] < target){
            return firstOccurrence(nums, mid + 1, end, target);
        }
        else if(nums[mid] > target){
            return firstOccurrence(nums, start, mid - 1, target);
        }
        else{
            if((mid == end) && (mid + 1 <= end && nums[mid] < nums[mid + 1])){
                return mid;
            }
            return lastOccurrence(nums, start, mid - 1, target);
        }

    }

}

vector<int> firstAndLastOccurence(vector<int>&nums, int target){
    int first = firstOccurrence(nums, 0, nums.size() - 1, target);
    int last = lastOccurrence(nums,first ,nums.size() - 1, target);
    return {first, last};
}

int main(){
    return 0;
}