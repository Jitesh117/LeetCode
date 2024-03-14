class Solution:
    def numSubarraysWithSum(self, nums: List[int], goal: int) -> int:
        pri={0:1}
        res=0
        summ=0
        for i in nums:
            summ+=i
            res+=pri.get(summ-goal,0)
            pri[summ]=pri.get(summ,0)+1
        return res