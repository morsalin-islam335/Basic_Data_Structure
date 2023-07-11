//program to return maximum equal stack
//problem link: https://www.codingninjas.com/studio/problems/maximum-equal-stack-sum_1062571

#include <bits/stdc++.h>
int sum(stack<int>a)
{
    int s=0;
    while(!a.empty())
    {
        s+=a.top();
        a.pop();
    }
    return s;
}

int maxSum(stack<int> &stk1, stack<int> &stk2, stack<int> &stk3) {
    int sum1 = sum(stk1),sum2 = sum(stk2),sum3 = sum(stk3);
    if(sum1 ==  sum2 && sum1 == sum3)return sum1;
    while(true)
    {
        if(sum1 == sum2&&sum2 == sum3)
        {
            // return sum1;//or return sum2||sum3
            break;
        }
        else if(sum1>=sum2&&sum1>=sum3)
        {
            sum1-=stk1.top();
            stk1.pop();
        }
        else if(sum2>=sum1&&sum2>=sum3)
        {
            sum2-=stk2.top();
            stk2.pop();
        }
        else{
            sum3-= stk3.top();
            stk3.pop();
        }
    }
    return sum1;
}
