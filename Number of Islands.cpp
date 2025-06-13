class Solution {
private:
    void bfs(int val1,int val2,vector<vector<int>> &vis,vector<vector<char>>& grid){
        vis[val1][val2]=true;
        queue<pair<int,int>>q;
        q.push(make_pair(val1,val2));
        while(!q.empty()){
            pair<int,int>node=q.front();
            q.pop();
            for(int i=node.first-1;i<=node.first+1;i++){
                if(i>=0 && i<grid.size()){
                    for(int j=node.second-1;j<=node.second+1;j++){
                        if(j>=0 && j<grid[i].size()){
                            if((i==node.first || j==node.second)){
                                if(grid[i][j]=='1' && !vis[i][j]){
                                    vis[i][j]=true;
                                    q.push(make_pair(i,j));
                                }
                            }
                        }
                    }
                }
            }
        }
    }
public:
    int numIslands(vector<vector<char>>& grid) {
        int n=grid.size();
        int m=grid[0].size();
        vector<vector<int>>vis(n,vector<int>(m,false));
        int count=0;
        for(int i=0;i<grid.size();i++){
            for(int j=0;j<grid[i].size();j++){
                if(grid[i][j]=='1' && !vis[i][j]){
                    count++;
                    bfs(i,j,vis,grid);
                }
            }
        }
        return count;
    }
};