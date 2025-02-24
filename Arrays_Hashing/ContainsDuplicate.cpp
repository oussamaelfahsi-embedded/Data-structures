/*Situation
 * Given an integer array nums, return true if any value appears more than once in the array, otherwise 
 * return False.
 *
 * Example 01 : 
 * Input: nums = [1, 2, 3, 3]
 * Output: true
 *
 * Example 02 :
 * Input: nums = [1, 2, 3, 4]
 * Output: false
 *
 * */

#include <iostream>
#include <vector>
#include <algorithms>


class  Solution{
	public:
		// Solution 01 : Brute Force  
		bool BruteForceSol_hasDuplicate( vector<int>& nums ){
			for(int i = 0 ; i<nums.size() ; i++  ){
			for(int j = i+1 ; j<nums.size ; j++ ){
				if(nums[i] == nums[j] ){
				return true;
				}
			}	
			}	
			return false;
		}

		// Solution 02 : Sorting 
		bool SortSol_hasDuplicate( vector<int>& nums  ){
		std::sort( nums.begin() , nums.end()   );
		for(int i = 0 ; i < nums.size() ; i++ ){
		    if(nums[i] == nums[i+1] ) {
			return true;
		    }
		}
		return false;
		}

		// 

}


