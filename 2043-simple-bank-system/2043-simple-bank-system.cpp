class Bank {
    vector<long long> balance;
public:
    Bank(vector<long long>& balance) {
        this->balance = balance;
    }
    bool isAccountValid(int acc){
        int l = balance.size();
        if(acc>0 && acc <l+1) return true;
        return false;
    }
    
    bool transfer(int account1, int account2, long long money) {
        if(isAccountValid(account1) && isAccountValid(account2) && balance[account1-1] >= money){
            balance[account1-1] -= money;
            balance[account2-1] += money;
            return true;
        }
        return false;
    }
    
    bool deposit(int account, long long money) {
        if(isAccountValid(account)){
            balance[account-1] += money;
            return true;
        }
        return false;
    }
    
    bool withdraw(int account, long long money) {
         if(isAccountValid(account) && balance[account-1] >= money){
             balance[account-1] -= money;
             return true;
         }
        return false;
    }
};
/**
 * Your Bank object will be instantiated and called as such:
 * Bank* obj = new Bank(balance);
 * bool param_1 = obj->transfer(account1,account2,money);
 * bool param_2 = obj->deposit(account,money);
 * bool param_3 = obj->withdraw(account,money);
 */