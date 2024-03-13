//cpp code
#include<iostream>
using namespace std;
class Solution {
public:
    int pivotInteger(int n) {
        int total = (n * (n + 1)) / 2;
        int s = 0;
        
        for (int i = 1; i <= n; i++) {
            s += i;
            if (s == total - s+i) {
                return i;
            }
            if (s > total - s+i) {
                break; 
            }
        }
        
        return -1;
    }
};
int main(){
  Solution obj;
  int res=obj.pivotInteger(8);
  cout<<res<<endl;
  return 0;
}
