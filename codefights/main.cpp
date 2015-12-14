/*
There is a weird tree I created once whose nodes are either 1 or 0. Every 1 has its first child as 1 and second child as 0 and every 0 has its first child as 0 and second child as 1. You have to analyze this pattern and return what will be the Kth child in Nth level.

For more clarity note:

1.Every member has exactly 2 children.

2.The tree starts with a 1 (root of the tree).

3. In the figure given below:

                                   1-------- 1st level
                                 /    \
                                1      0 ------- 2nd level
                              /   \   /  \
                             1     0 0    1
                                      |
                                   3rd child of 3rd level

Sample input #1:
1 1
Sample output #1:
1
Sample input #2:
1 1
Sample output #2:
1
Sample input #3:
2 2
Sample output #3:
0

All given inputs will have a valid output.

*/
#include <bits/stdc++.h>


int one_zero_tree(int N, int k) {
  int c=0;
  while (k)
  {c+= k&1;k>>=1;}
        if (c%2)return 0;
        else return 1;
}

int main()
{
    while(1){int a,b;
    scanf("%d%d",&a,&b);
    printf("%d\n",one_zero_tree(a,b));
    }
    return 0;
}
