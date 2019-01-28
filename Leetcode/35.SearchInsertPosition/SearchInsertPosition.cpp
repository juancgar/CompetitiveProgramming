 int searchInsert(vector<int>& nums, int target) {
        
    int begin = 0;
    int end = nums.size();
    end > 0 ? end = end-1: end = begin;
    int mid;
      while(begin <= end)
      {
          mid = begin + (end-begin)/2;
          if(nums[mid] == target)
              return mid;
          else if(nums[mid] < target)
          {
              begin = mid+1;
          }
          else
              end = mid-1;
      }
    return begin;
    }