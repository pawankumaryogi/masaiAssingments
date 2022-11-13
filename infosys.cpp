#include<bits/stdc++.h>

using namespace std;

int main()
{
  vector<vector<int>> p = {{5 ,24} ,{ 39 ,60} , {15, 28} ,{ 27, 40 }, {50 ,90}};
  
  vector<int> ansList;
//   sort(p.begin(),p.end());

  for(int i=0; i<p.size(); i++)
  {
    int count =0;
    int b = p[i][1];
    cout<<b<<endl;
   for(int j=1; i<p.size(); j++) 
      {
        
          if(b < p[j][0])
             { 

                b=p[j][1];
                cout<<b<<endl;
                count++;
                
             }
      }
      ansList.push_back(count);
  }
   for(int i=0; i<ansList.size(); i++)
       cout<<ansList[i]<<endl;


       cout<<"ddfdfdf"<<endl;



    return 0;
}
