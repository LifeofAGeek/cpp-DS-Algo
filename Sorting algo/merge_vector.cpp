// mergesort.cpp

#include <iostream>
#include <vector>

using namespace std;


vector<int> merge(vector<int> &v, const vector<int> &left, const vector<int> &right){
  
  vector<int> temp;

  // left and right ittorators 
  int li = 0;
  int ri = 0;

  while(li < left.size() && ri < right.size()){
    if (left[li] < right[ri]){
      temp.push_back(left[li]);
      li++;
    } else {
      temp.push_back(right[ri]);
      ri++;
    }
  } // end while

  while(li < left.size()){
    // push the rest of the values back because they are sorted
    temp.push_back(left[li]);
    li++;
  }

  while(ri < right.size()){
    // do the same for the right
    temp.push_back(right[ri]);
    ri++;
  }

  v = temp;
  return v;
}

vector<int> ms(vector<int> &v){
  // base case, we are done!
  if(v.size() == 1)
    return v;

  // find the middle
  vector<int>::iterator mid = v.begin() + (v.size() / 2);

  // cut this guy in half
  vector<int> left(v.begin(), mid);
  vector<int> right(mid, v.end());
  
  // wow look recursion!
  left = ms(left);
  right = ms(right);
  
  // merge!
  return merge(v, left, right);
}

void print(vector<int> v){
  for(vector<int>::size_type i = 0; i != v.size(); i++){
    cout << v[i] << ",";
  }
  cout << endl;
}

int main(int argc, char *argv[]){

  if (argc < 2){
    cout << "dude, give more nums" << endl;
    return 1;
  }
    
  vector<int> v;
  for (int i = 1; i < argc; i++){
    // push the values into the vector
    v.push_back(atoi(argv[i]));
  }
  
  cout << "Before: \t";
  print(v);
  
  v = ms(v);
  
  cout << "After: \t\t";
  print(v);

  return 0;
}
