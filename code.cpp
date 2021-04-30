#include<bits/stdc++.h>
#define ll long long
using namespace std;



ll Add(ll a,ll b)
{
    return a+b;
}

ll Add(ll a,ll b,ll mod)
{
    ll c=((a%mod)+(b%mod))%mod;
    return c;
}

ll Sub(ll a,ll b)
{
    return a-b;
}

ll Sub(ll a,ll b,ll mod)
{
    ll c=((a%mod)-(b%mod)+mod)%mod;
    return c;
}

ll Mul(ll a,ll b)
{
    ll c=a*b;
    return c;
}

ll Mul(ll a,ll b,ll mod)
{
    ll res=((a%mod)*(b%mod))%mod;
    return res;
}

// calculates a^b in O(log(b))

ll Power(ll a,ll b,ll mod)
{
    a %= mod;
    ll res = 1;
    while (b > 0) {
        if (b & 1)
            res = ((res%mod)*(a%mod))%mod;
        a = ((a%mod) * (a % mod))%mod;
        b >>= 1;
    }
    res%=mod;
    return res;
}
ll Gcd(ll a,ll b)
{
    return (b == 0) ? a : Gcd(b, a % b);
}
ll Lcm(ll a,ll b)
{
    ll d=Gcd(a,b);
    ll res=(a*b)/d;
    return res;
}



int main()
{

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("op.txt", "w", stdout);
#endif


    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

    cout<<"This is a scientific calculator which supports the following operations :\n";

    cout<<" 1. Addition of two numbers :  Add(arg1,arg2)\n";
    cout<<" 2. Addition of two numbers under modulo m : Add(arg1,arg2,m)\n";
    cout<<" 3. Subtraction of two numbers :  Sub(arg1,arg2)\n";
    cout<<" 4. Subtraction of two numbers under modulo m : Sub(arg1,arg2,m)\n";
    cout<<" 5. Multiplication of two numbers : Mul(arg1,arg2)\n";
    cout<<" 6. Multiplication of two numbers under modulo m : Mul(arg1,arg2,m)\n";
    cout<<" 7. Power of a number 'a' raised to the power 'b' under modulo m : Power(a,b,m)\n";
    cout<<" 8. Gcd of two numbers 'a' and 'b' : Gcd(a,b)\n"; 
    cout<<" 9. Lcm of two numbers 'a' and 'b' : Lcm(a,b)\n";

    // More functions to come

    ll a,b;
    cin>>a>>b;
    cout<<Lcm(3,4)<<"\n";




    return 0;

}



