class Solution {
public:
    bool judgeCircle(string moves) {
        int x=0,y=0;
        for(auto i: moves)
        {
            if(i == 'U')
                y++;
            else if(i == 'D')
                y--;
            else if(i == 'L')
                x--;
            else
                x++;
        }
        return x == 0 and y == 0;
    }
};