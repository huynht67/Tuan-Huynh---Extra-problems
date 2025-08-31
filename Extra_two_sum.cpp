#include <iostream>
#include <vector>
using namespace std;

vector<int> twoSum(vector<int>& nums, int target) {
        for(int i = 0; i < nums.size(); i++){
            for(int j = i+1; j < nums.size(); j++){
                if(nums[j] == target - nums[i]){
                    return{i,j};
                }
            }
        }
    return {};
}
int main() {

    int n, target;
    cout << "Enter the amount of numbers in array: ";
    cin >> n;

    cout << "Enter the numbers: " << endl;
    vector<int> nums(n);
    for(int i =0; i < n; i++){
        cin >> nums[i];
    }

    cout << "Enter the target number: ";
    cin >> target;

    vector<int> result = twoSum(nums, target);

    if (!result.empty()){
        cout << "Indices are: " << nums[result[0]] << " and " << nums[result[1]] << endl;
    }
    else {
        cout << "No indices found" << endl;
    }


    return 0;
}