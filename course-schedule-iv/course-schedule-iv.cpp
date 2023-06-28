class Solution {
public:
    vector<bool> checkIfPrerequisite(int numCourses, vector<vector<int>>& prerequisites, vector<vector<int>>& queries) 
	{
		 //final vector that will contain the ans and to be returned from the function
		 vector<bool>ans;
		 
		 //to apply the bfs topological sort or kanh's algorihm we will have the indeg vector<int>
		 vector<int>indeg(numCourses,0);
		 
	     //first we will need to create the greaph according to the prerequsites
	     //the graph will be directed because the prerequsite's are given
		 unordered_map<int,vector<int>>adj;
		 for(int i=0;i<(prerequisites.size());i++)
		 {
		 	  int u = prerequisites[i][0];
		 	  int v = prerequisites[i][1];
		 	  
		 	  //for having the course v we have the course u as prerequisite
		 	  //first we will take u and then we will take v
		 	  //u-->v
  		      adj[u].push_back(v);
  		      indeg[v]++;
		 }

         queue<int>q;
		 //we will have the queue and push all the nodes having indeg == 0
		 for(int i=0;i<indeg.size();i++)
		 {
		 	if(indeg[i] == 0)
		 	{
		 	    q.push(i);	
		    }
		 }
		 
		 //we will maintain a map for holding the ancestor's correspoinding to all the nodes
		 unordered_map<int,unordered_set<int>>mp;
		 
		 while(!q.empty())
		 {
              int node = q.front();
              q.pop();
              
              //getting all the ancestor of the parent node and the node itself
              for(auto nbr : adj[node])
              {
                  for(auto ancestors : mp[node])
                  {
         	            mp[nbr].insert(ancestors); 
			      }	
			      mp[nbr].insert(node);
			  }
 
              //we will remve the node as the indeg of the node is 0
              //decrease all the indeg of the nbr as we are removing the node
              for(auto nbr : adj[node])
              {
              	   indeg[nbr]--;
              	   if(indeg[nbr] == 0)
              	   {
              	      q.push(nbr);	 
                   }
			  }
		 }
		 
		 for(int i=0;i<queries.size();i++)
		 {
		 	  int u = queries[i][0];
		 	  int v = queries[i][1];
		 	  
		 	  if(mp[v].find(u)!=mp[v].end())
		 	  {
		 	  	 ans.push_back(true);
              }
              else
              {
              	  ans.push_back(false);
			  }
		 }
         for(auto it = mp.begin() ; it != mp.end() ; it++)
         {
             cout<<it->first<<" ->";
             for(auto val : it->second)
             {
                 cout<<val<<" ";
             }
             cout<<endl;
         }
		 return ans;
    }
};