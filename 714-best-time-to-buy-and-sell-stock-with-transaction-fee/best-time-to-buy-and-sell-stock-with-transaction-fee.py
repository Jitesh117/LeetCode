class Solution:
    def maxProfit(self, prices: List[int], fee: int) -> int:
        # You initially have zero money in your hand
        cin_w_shares = -prices[0] # Cash in hand with shares if you bought it on first day
        cin_wo_shares = 0 # Cash in hand without shares if you do not buy any share on first day
        
        for i in range(1,len(prices)):
            # Maximum cash in hand with shares
            # Either 
			# 1. withold prev share in which case your cash in hand will not change, 
            # 2. or assume there was no currently bought share but you want to buy it today - 
			#         In this case: your current cash in hand with shares will be your previous cash 
			#         in hand without shares minus buying price of the share today.
            cin_w_shares = max(cin_w_shares, cin_wo_shares-prices[i]) 
            
            # Maximum cash in hand without shares
            # Either 
			# 1. withold money without shares in which case your cash in hand will not change, 
            # 2. or assume you previously bought the share and you are going to sell that today -
			#         In this case : your current cash in hand without shares will be your previous cash 
			#         in hand with shares plus the current selling price minus transaction fee
            cin_wo_shares = max(cin_wo_shares, cin_w_shares + prices[i]-fee)
            
        # Return cash in hand without shares, as cash in hand with share will always be lower
        return cin_wo_shares 