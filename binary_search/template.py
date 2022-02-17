
class BinarySearchTemplate:
    left = None
    right = None
    mid = None

    def __init__(self, nums) -> None:
        self.nums = nums

    def findElement(self):
        self.left = 0
        self.right = len(self.nums) - 1

        while self.right - self.left > 2:
            self.updateMid()
            if self.isElementFound():
                return self.mid
            if self.shouldSearchOnLeftOfMid():
                self.right = self.mid - 1
            else:
                self.left = self.mid + 1
        self.updateMid()
        return self.handleThree()

    def updateMid(self):
        self.mid = round(self.left + (self.right - self.left) / 2)

    def handleThree(self):
        pass

    def isElementFound(self):
        pass

    def shouldSearchOnLeftOfMid(self):
        pass

class MySol(BinarySearchTemplate):
    def __init__(self, nums, target) -> None:
        super().__init__(nums)
        self.target = target

    def handleThree(self):

        if self.nums[self.left] == self.target:
            return self.left
        elif self.nums[self.right] == self.target:
            return self.right
        elif self.nums[self.mid] == self.target:
            return self.mid
        else:
            return -1

    def isElementFound(self):
        return self.nums[self.mid] == self.target

    def shouldSearchOnLeftOfMid(self):
        return self.nums[self.mid] > self.target

msol = MySol([1,2], 1)
print(msol.findElement())

# 4  3  2 -1
# 3  2  1 -1
# 1  1 -1 -2
#-1 -1 -2 -3
