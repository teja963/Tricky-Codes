1.Sum of subsets of all the subsets of an array | O(N)-direct sum
  
   for(i=0;i<n;i++)ans+=arr[i]*(i+1)*(n-i);
   return ans;

2.Sum of subsets all possible in an array-individual sums 
  
       sumofsets(a,l,r,sum){             //initially sum=0;   l=0; r=n-1;
        if(l>r){cout<<sum<<” “;return ;}
        sumofsets(a,l+1,r,sum+a[l]);   // subset including includinga[l];
        sumofsets(a,l+1,r,sum);   }       // subset excluding a[l];

3.no.of subarrays with given sum k value in an array-O(nlogn)
  
  ** if they given sum divisible by k make (c%k)+k%k(if sum is neg case)  in c**
    
     (1)subarraysum(a,n,s):
            res=curr_sum=0;
          unorderd_map<int,int>m;          //prev sum store
        for i=0 to n:                                                                      
           curr_sum+=a[i];
           if(curr_sum==s)res++;
           if(m[curr_sum-s])res+=m[curr_sum-s];
           m[curr_sum]++;
      return res;

Tricky-Concepts: 

     Range: 0 to n-1     O(1) space   O(n) Complexity

     Basic idea: a,b   a+b*n  if we divide with n it will give b, if we do %n then it is a

1. rearrange elements a[i]=a[a[i]];  lagikk a[i]+=(a[a[i]%n]*n);  then a[i]/=n;  

2. freqency of elements in array lagikk a[a[i]%n]+=n; then a[i]/=n is freq 

3. Check which nums r repeated and missing lagikk :
        if a[i]<0: return abs(a[i]); 
        else a[abs[a[i]]= - a[abs[a[i]];
     
     after this operation Missing: Onloop  - if(a[i]>0) return i+1;


Vector syntax:

 1. to count no.of elements – count(v.begin(),v.end(),k);    

------------------------------------------------------------Maths-------------------------------------------------------------------

1. while(n>0){num+=n/5; n/=5;} return num;  //no.of trailing zeros in fact
  In code simply count=log(n)/log(num);
  for atleast concept to binary search from 0 to 5*n and check with simply count as above mentioned

2. if(n%9!=0)return n%9; else return 9;  //sum of digits of num upto single num

3. For max profit product problem sort the array and check among upper values and take max   

4. gcd(x,y){ if(y!=0)return gcd(y,x%y); return x;}   //gcd finding
  for odd gcd problem in array consists of all even nums,convert 1 number to odd by divding 2, then gcd of all array elements is odd

5. want to find all primes in O(N) appox- use seive of erathosenes algo start with 2(least prime)

6. search element ‘x’ in arr with elements differ by atmost k use binary jump search with increment of start from while i=0: i+=max(1,abs((a[i]-x)/k));

7. product array puzzle: product of all elements except itself do 2 traverses from l to r and r to l(see end positions result)

8. check two nums ap or not with O(1) common diff k: lagiikk  k=0 or k is +ve or -ve
      if k==0; return a==b;   else return (b-a)%k==0&&(b-a)/k>=0;

9. container with most water : check min edge and max extent
      while(l<h):
           ans=max(ans,(h-l)*min(a[l],a[h]);  if(a[l]<a[h])l++; else h--;
           
10. Last non Zero digit of a given num ! lagikkkk
    D(1) = 1, D(2) = 2, D(3) = 6, D(4) = 4, D(5) = 2, D(6) = 2, D(7) = 4, D(8) = 2, D(9) = 8.
 
    If D(N) denotes the last non zero digit of factorial, then

    D(N)=4*D(⌊N/5⌋)⋅D(Units digit of N)(If tens digit of N is odd)
    D(N)=6*D(⌊N/5⌋)⋅D(Units digit of N)(If tens digit of N is even)
    
11. smallest +ve int can't be expressed as sum of some elements in array
    sort the array
    ans=1;  //update the ans with array elements ans+=arr[i]; upto arr[i]<=ans
     

------------------------------------------------------------Strings-----------------------------------------------------------------
  s1=”geeks for geeks”  s2=”for”    s3=” ”                                           

1. if(s1.find(s2)!=string::npos)return 1; //checking substring present for not s2 is req string to find in s1 

2. char *p=strstr(s1,s2);    //return pointer where it is started untill end of string if we print p it will give as “for geeks”, if we wanna replace it use -strcpy(p,”teja”); when u try to print s1 then it will be like this “geeks teja”; 

3. s1==string(s1.rbegin(),s1.rend());  //check palindrome or not

4. s3=s1.substr(index,len);  //it will return sub-string start with that index upto that index.

--------------------------------------------------Stack: (usage idea)---------------------------------------------------------------
 1. use to find next greater element in array with O(N) apply from i=n-1 to 0 bcz it is -->next greater 
 
 2. Insert_bottom and reverse stack using recursion logic implementation
         Insert_bottom(char x):                          reverse:                              middle:  //i=0; n is size
             if s.size()==0: s.push(x);                       if s.size()>0:                        if(i==n||s.empty())return;
             else:                                               char x=s.top();                    int x=s.top();
                  char a=s.top();                                     s.pop();                       s.pop();
                  s.pop();                                       reverse();                          middle(i+1);
                  Insert_bottom(x);                               Insert_bottom(x);                  if(i!=n/2)s.push(x);
                  s.push(a);

3. for stock_span_problem try to store index for getting max no.of consective days and apply conditions
4. max area in histogram 
   l[0]=0;                                                                                r[n-1]=n-1;
   main:                          while(!s.empty()&&a[s.top()]>=a[i])s.pop();
          if(s.empty())l[i]=0;                                                         if(s.empty())r[i]=n-1;
          else l[i]=s.top()+1;                                                         else r[i]=s.top()-1;

--------------------------------------------------------Dynamic Programming---------------------------------------------------------
 1. max amount thief prob:  dp[0]=a[0] dp[1]=max(dp[0],dp[1]);  dp[i]=max(a[i]+dp[i-2],dp[i-1]);

---------------------------------------------------------Bitset---------------------------------------------------------------------
 signed int the range for N-bit = "-2^(n-1)" to "2^(n-1)-1" , after uppper bound if we increment the num is "-2^(n-1)"
 unsigned int the range for N-bit= "0 to 2^(n) -1" , after upper bound if we increment the num is 0
 the connection btw above is a signed num -x = unsigned num  2^(n) -x  //-43=4294967253
 ~x=-x-1;  //Not operation
     
 **g++ provides Functions(inbuilt)**
  "b.to_string()" –convert bitset to string
  "b.to_ulong()"-convert binary to deci
  "b._Find_first()"- 1’s 1st position
  __builtin_clz(x)         // No. of zeros at the beginning of binary num
  __builtin_ctz(x)         // No.of zeros at the end of bianry num
  __builtin_popcount(a^b)  // it will count no.of 1s, simply no.of flips req to convert a to b Hamming distance
  
 1. To check odd or even for given x  
           x&1=1 odd
           x&1=0 even
           x&(x-1)=0 //given +ve num is power of 2 or not
 
 2. x={1,3,4,8}    y={3,6,8,9}  , then x intersection y  ={1,3,4,6,8,9}
    a=1<<1|1<<3|1<<4|1<<8  // which is the set representation of num 2^1+2^3+2^4+2^8
    b=1<<3|1<<6|1<<8|1<<9  // which is the set representation of num 2^3+2^6+2^8+2^9
    ans= __builtin_popcount(a|b) //6

------------------------------------------------------------------------------------------------------------------------------------
sorting of hash_map:

        bool cmp(pair<type,type>a, pair<type,type>b){
                    if(a.second==b.second)return a.first>b.first;
                    return a.second>b.second;
           }
           unordered_map<type,type>m;
           vector<pair<type,type>>p(m.begin(),m.end());
           sort(p.begin(),p.end(),cmp);

sub array Max product subarray lagik
           make ans=mn=mx=a[0];  
     
                             (6,6)     (-18,6)
                              swap        swap
                  a[]:6     -3        -10          0         2
                  mx: 6   (6,-18)    (180,-10)   (0,0)    (0,0)
                  mn: 6   (-18,-3)   (-60,-10)   (0,0)     (0,0)
                 ans:6    6          180        180         180
            return ans;

14. Stock problem models
         1. single buy and sell -find min and update max values
                  for i=0 to n:
                        if(a[i]<j)j=a[i];
                        else if(a[i]-j>0)ans=max(ans,a[i]-j);
         2. selling and buying atmost twice
                  using valleys peak approach 
                       for i=1 to n:
                            p=p[i]-p[i-1];
                          if(p>0)ans+=p;  

Note:
1. set<vector<int>>s;  -{[1,2,3,..],[4,5,6,.],[7,8,9,..]}
2. A B C    
   D E F        
   G H I  suppose there r m*n matrix, then no.of ways to go from A to I is
                           Code: goto(m,n):
                                         if(m==0||n==0)return 1;
                                         else return goto(m-1,n)+goto(m,n-1);
    
    similarly if we goto (0,0) to(m,n) in k steps yes or no then do 
                           Code: int x=k-abs(m)-abs(n);
                                      if(x<0)return 0;
                                      else return x%2==0;

3. 2D array declaration vector<vector<int>>dp(m+1,vector<int>(n+1,0)); with all zeros.
 
    If we want to convert types for max ,min –max<long long int>(a,b); if req
 
    memset(arr,num/char,size);    num=0/-1;   // to set all values to smtg
 
    cout<<setprecision(2)<<fixed;     //uses to print num with 2 decimals

4. To check given binary number is multiple of 3 or not abs(count odd 1’s - even 1’s) if it is multiple of 3 then it is.

5. bitwise xor of all subarrays O(n):
       basic concept is in xor if we get even then its value is 0: if it is odd then it will vary
       so if n%2==0: return 0;
       else add odd values postions to get req ans; // get it by observing patterns

6. when all nums are +ve use space approach for efficient


---------------------------------------------------------Linked List----------------------------------------------------------------

1. For deleting node use prev node(for simple) help
     ListNode* dummy=new ListNode(0,head);
     ListNode* prev=dummy;

2. For detecting loop use hale and tortoise method for efficient approach

---------------------------------------Binary Tree:(top to down use dfs recursive-> left,right)-------------------------------------
Basic: Inorder traversal of BST gives sorted order also for verifying process

1. same tree:  fun(p.left,q.left)&&fun(p.right,q.right);
2. symmetric tree: fun(p.left,q.right)&&fun(p.right,q.left);
3. max depth or height: 1+max(fun(root.left),fun(root.right));
   min depth:  
              if(!root)return INT_MAX; 
              if(!root.left&&!root.right)return 1;
              return 1+min(fun(root.left),fun(root.right));

4. balanced : fun(root.left)&&fun(root.right)&&(abs(height(root.left)-height(root.right))<=1);
5. path sum : implement on leaf node –>  s+=root.val;  if(!root.left&&!root.right)if(s==k)........
   NOTE:
     (i)For inserting in vector which is dfs approach or recursive do **v.pop_back()** for required paths or values
6. Invert: swap left and right nodes by using level order traversal
7. left leaves sum lagikk:
                                           1                           if(root.left){
                                         /    \         	                if(!root.left.left&&!root.left.right)ans+=root.left.val;
                                        2      3                                       fun(root.left);}
                                             /   \                     if(root.right)fun(root.right);           
                                             6    7

8. Diameter: while finding ht or depth lagikk add this->  ans=max(ans,left+right); //longest dist btw 2 opposite nodes
9. count_nodes: 1+fun(root.left)+fun(root.right);
10. unique_BST: for given n, Catalan number of BST formed uniquely
11. populating next pointer- use level order and push last element as NULL in queue
                                           1->NULL                        order_of_pushing untill while(q.front())          
                                          /  \                                   q-   1,NULL
                                         2--->3->NULL                            q-   2,3,NULL                   
                                             / \                                 q-   6,7,NULL       
                                            6-->7->NULL

12**. LCA for BST:  untill root is NULL-  compare(p,q) with root if it’s less search on root.left else search on root.right
      LCA for BT: find left and right node and return which is not null
13. Constructing tree from inorder, preorder:(first left and right while inserting)
         first insert inorder position in map for efficient search and do following; i=0;
          (i) insert(root)// preorder[i++];  for inserting all elements in preorder
          (ii) int p=m[x];  //search for inorder position efficiently
          root.left=fun(pre,l,p-1);      
          root.right=fun(pre,p+1,h); 
14. Constructing tree from inorder, postorder (first right and left)
            first insert inorder position in map for efficient search and do following; i=n-1;  //inorder size
    (i)insert(root)//post[i—];
    (ii)int p=m[x];
    root.right=fun(post,p+1,h);       
    root.left=fun(post,l,p-1);
15**. Recover BST( with 2 swaps)// violating BST rules
           prev=NULL;
         fun(root.left);// start from here fun
        if(prev&&prev.val>root.val)// this pair violates BST rules
        prev=root;
        fun(root.right);

         swap(v[0].left.val,v[0].right.val);   //if adj nodes neglect this rule
         swap(v[0].left.val,v[1].right.val);   //if non-adj nodes neglect this rule         
16. For vertical Traversal use map and level order idea
       map<int,vector<int>>m;
       queue<pair<Node*,int>>q;                         if(root.left)q.push(root.left,d-1);
       q.push({root,0});                                if(root.right)q.push(root.right,d+1);
                           

