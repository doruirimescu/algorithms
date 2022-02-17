
class Solution:
    hour = [8, 4, 2, 1]
    min_ = [32, 16, 8, 4, 2, 1]
    results = list()

    def back(self, n, elems=list()):
        if sum(elems) == n:
            elems = elems + [0] * (10 - len(elems))
            hh = sum( [self.hour[i] * e for i, e in enumerate(elems[:4]) ] )
            mm = sum( [self.min_[i] * e for i, e in enumerate(elems[4:]) ] )
            if hh <= 12 and mm <= 60:
                self.results.append(str(hh) + ':' + str(mm).zfill(2))
        elif len(elems) < 10:
            self.back(n, elems + [0])
            self.back(n, elems + [1])
        return self.results

s = Solution()
results = s.back(2)
print(results)
