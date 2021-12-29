#Leetcode 46. Permutations solution
class Solution:
    result = list()
    def back(self, nums, perm = list()):
        if len(perm) == len(nums):
            self.result.append(perm)

        for e in nums:
            if e not in perm:
                self.back(nums, perm + [e])

    def permute(self, nums: List[int]) -> List[List[int]]:
        self.result.clear()
        self.back(nums)
        return self.result
