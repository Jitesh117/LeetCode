class Solution {
public:
    vector<int>rowDir = {-1, 1, 0, 0};
    vector<int>colDir = {0, 0, -1, 1};
    int nearestExit(vector<vector<char>>& maze, vector<int>& entrance) 
    {
        queue<pair<int, int>>q;
        q.push({entrance[0], entrance[1]});
        int result = 0;
        maze[entrance[0]][entrance[1]] = '+'; 
        while(!q.empty())
        {
            int size = q.size();
            while(size--)
            {
                int currRow = q.front().first;
                int currCol = q.front().second;
                q.pop();
                for (int i = 0; i < 4; i++)
                {
                    int nrow = currRow + rowDir[i]; 
                    int ncol = currCol + colDir[i];  
                    if (isValidStep(maze, nrow, ncol)) 
                    {
                        maze[nrow][ncol] = '+';
                        if (isAtBorder(maze, nrow, ncol)) return (result + 1); 
                        else q.push({nrow, ncol});
                    }
                }
            }
            result++; 
        }
        return -1;
    }
    bool isAtBorder(vector<vector<char>>&maze, int row, int col)
    {
        if ((row == 0) || (row == maze.size() - 1)) return true;
        if ((col == 0) || (col == maze[0].size() - 1)) return true;
        return false;
    }
    bool isValidStep(vector<vector<char>>&maze, int& row, int& col)
    {
        if (row < 0 || row == maze.size() || col < 0 || col == maze[0].size() || maze[row][col] == '+') return false;
        else return true;
    }
};