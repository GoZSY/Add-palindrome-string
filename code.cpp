/******************************************************
//每次删除掉第一个字符,将这个删除掉的字符放入一个新串中
//如果删除后的字符串是回文串则返回,否则继续第一步
//逆序result返回
*******************************************************/
class Palindrome {
public:
    string addToPalindrome(string A, int n) 
    {
        // write code here
      reverse(A.begin(),A.end());
      string result;
      while(!A.empty())
      {
          result.push_back(A.back());
          A.pop_back();
          if(judge(A))
              break;
      }
      reverse(result.begin(),result.end());
      return result;
    }
private:
    bool judge(string A)
    {
       string B = A;
       reverse(B.begin(),B.end());
      return A == B;       
    }
};
