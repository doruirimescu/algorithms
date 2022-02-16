#include <vector>
using namespace std;
/*
    * If index is at a duplicate position, move it to last repeating position
    * End establishes until when the index can go.
    */
void moveIndexToLastDuplicate(vector<int>& nums, int& index, int end = 1)
{
    if (index < 0 or index >= nums.size())
    {
        return;
    }
    int curr = nums[index];

    bool was_index_incremented = false;
    while (index <= nums.size() - end and nums[index] == curr)
    {
        was_index_incremented = true;
        index++;
    }
    if (was_index_incremented)
    {
        index--;
    }
}
