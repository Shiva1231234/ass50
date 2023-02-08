Question =1
/*
#include <iostream>
#include <unordered_map>
using namespace std;
  
// Driver code
int main()
{
  // Declaring umap to be of 
  // <string, int> type key 
  // will be of STRING type 
  // and mapped VALUE will
  // be of int type
  unordered_map<string, int> umap;
  
  // inserting values by using [] operator
  umap["GeeksforGeeks"] = 10;
  umap["Practice"] = 20;
  umap["Contribute"] = 30;
  
  // Traversing an unordered map
  for (auto x : umap)
    cout << x.first << " " << 
            x.second << endl;
}*/
Question =2
/*
#include<bits/stdc++.h>
using namespace std;
void solve(string s)
{
    unordered_map<string,int> mp;  // to store occurrences of word
    string t="",ans="";
    // traversing from back makes sure that we get the word which repeats first as ans
    for(int i=s.length()-1;i>=0;i--)
    {
        // if char present , then add that in temp word string t
        if(s[i]!=' ')
        {
            t+=s[i];
             
        }
        // if space is there then this word t needs to stored in map
        else
        {
            mp[t]++;
            // if that string t has occurred previously then it is a possible ans
            if(mp[t]>1)
               ans=t;
            // set t as empty for again new word  
            t="";
             
        }
    }
     
    // first word like "he" needs to be mapped
            mp[t]++;
            if(mp[t]>1)
               ans=t;
                           
    if(ans!="")
    {
        // reverse ans string as it has characters in reverse order
        reverse(ans.begin(),ans.end());
        cout<<ans<<'\n';
    }
    else
    cout<<"No Repetition\n";
}
int main()
{
    string u="Ravi had been saying that he had been there";
    string v="Ravi had been saying that";
    string w="he had had he";
    solve(u);
    solve(v);
    solve(w);
     
     
    return 0;
     
}*/
Q=3
/*
// C++ program for the above approach
#include <bits/stdc++.h>
using namespace std;
 
void printFrequency(string str)
{
    // Define an unordered_map
    unordered_map<char, int> M;
 
    // Traverse string str check if
    // current character is present
    // or not
    for (int i = 0; str[i]; i++)
    {
        // If the current characters
        // is not found then insert
        // current characters with
        // frequency 1
        if (M.find(str[i]) == M.end())
        {
            M.insert(make_pair(str[i], 1));
        }
 
        // Else update the frequency
        else
        {
            M[str[i]]++;
        }
    }
 
    // Traverse the map to print the
    // frequency
    for (auto& it : M) {
        cout << it.first << ' ' << it.second << '\n';
    }
}
 
// Driver Code
int main()
{
    string str = "geeksforgeeks";
 
    // Function call
    printFrequency(str);
    return 0;
}*/
Q=4
/*
// find function in unordered_map.
#include <bits/stdc++.h>
using namespace std;
  
int main()
{
    unordered_map<int, bool> um;
  
    um[12] = true;
    um[6789] = false;
    um[456] = true;
  
    // Searching for element 23
    if (um.find(23) == um.end())
        cout << "Element Not Present\n";
    else
        cout << "Element Present\n";
  
    // Searching for element 12
    if (um.find(12) == um.end())
        cout << "Element Not Present\n";
    else
        cout << "Element Present\n";
  
    return 0;
}*/
Q=5
/*
// find function in unordered_map.
#include <bits/stdc++.h>
using namespace std;
  
int main()
{
    unordered_map<int, bool> um;
  
    um[12] = true;
    um[6789] = false;
    um[456] = true;
  
    // Searching for element 23
    if (um.find(23) == um.end())
        cout << "Element Not Present\n";
    else
        cout << "Element Present\n";
  
    // Searching for element 12
    if (um.find(12) == um.end())
        cout << "Element Not Present\n";
    else
        cout << "Element Present\n";
  
    return 0;
}*/
Q=6
/*
// find function in unordered_map.
#include <bits/stdc++.h>
using namespace std;
  
int main()
{
    unordered_map<int, bool> um;
  
    um[12] = true;
    um[6789] = false;
    um[456] = true;
  
    // Searching for element 23
    if (um.find(23) == um.end())
        cout << "Element Not Present\n";
    else
        cout << "Element Present\n";
  
    // Searching for element 12
    if (um.find(12) == um.end())
        cout << "Element Not Present\n";
    else
        cout << "Element Present\n";
  
    return 0;
}*/
Q=7
/*
// find function in unordered_map.
#include <bits/stdc++.h>
using namespace std;
  
int main()
{
    unordered_map<int, bool> um;
  
    um[12] = true;
    um[6789] = false;
    um[456] = true;
  
    // Searching for element 23
    if (um.find(23) == um.end())
        cout << "Element Not Present\n";
    else
        cout << "Element Present\n";
  
    // Searching for element 12
    if (um.find(12) == um.end())
        cout << "Element Not Present\n";
    else
        cout << "Element Present\n";
  
    return 0;
}*/
Q=8
/*
// find function in unordered_map.
#include <bits/stdc++.h>
using namespace std;
  
int main()
{
    unordered_map<int, bool> um;
  
    um[12] = true;
    um[6789] = false;
    um[456] = true;
  
    // Searching for element 23
    if (um.find(23) == um.end())
        cout << "Element Not Present\n";
    else
        cout << "Element Present\n";
  
    // Searching for element 12
    if (um.find(12) == um.end())
        cout << "Element Not Present\n";
    else
        cout << "Element Present\n";
  
    return 0;
}*/