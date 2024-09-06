/* STL is a compilation of algorithm in minimized verion(don't write lengthy line of code use predefined function)
This are Templates in STL...
c++ stl is divided into :  
---->Algorithm
---->Container(Vector ,Queue ,Set , Map etc...)
---->Iterator
---->Function object
*/

#include<bits/stdc++.h>
using namespace std;

int main(){
   explainPair();
   explainVector();
   return 0;
}

// METHOD 1:
void explainPair()
   {
      //to insert in one pair 
      pair<int, int > p ={1,3};   
      cout<<p.first<<" "<<p.second<<endl;
      //to insert in one pair inside multiple values
      pair<int, pair <int,int>> p2 = {1, {2,3}};
      cout<<p2.first<<" "<<p2.second.first<<" "<<p2.second.second<<" "<<endl;
      // to insert pair array index  ... 
      // It lies inside the utility library..
      pair<int , int> arr[]=  {{1,2},{3,4},{5,6}};
      cout<< arr[1].first;
   }

/// VECTOR: Unlike arrays, where the size is fixed, vectors allow dynamic resizing to insert more elements. Use VECTOR as a container for dynamic allocation or automatic resizing.
//METHOD 2:
void explainVector()
{
   vector< int> v;
   v.push_back(1);   // to insert the data in vector
   v.emplace_back(2); // to insert more data  dynamically increases size in vector IT is faster than push_back function

   vector<pair<int, int>> vec;
   vec.push_back({10,11});
   vec.emplace_back(10,11);     //ADVANCE automatically assumes to be a  pair and takes input without curly braces{}...

// Lot of element already filled in vector pair function
   vector <int> vect2(5,100);          // 5 instances or times of 100 will be inserted in vector like-->{ 100,100,100,100,100}
   vector <int>vect3(5);                // temp put the values 0 in all the indexes--->(0,0,0,0,0)

   // to copy this vector into another vector
   vector <int> vect3(vect2);

}