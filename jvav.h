#include<string>
#include<iostream>
using namespace std;
int function(string a){
	if(a=="LST"){
	cout<<R"(#define MAXN 1000001
#define ll long long
using namespace std;
unsigned ll n,m,a[MAXN],ans[MAXN<<2],tag[MAXN<<2];
inline ll ls(ll x)
{
    return x<<1;
}
inline ll rs(ll x)
{
    return x<<1|1;
}
void scan()
{
    cin>>n>>m;
    for(ll i=1;i<=n;i++)
    scanf("%lld",&a[i]);
}
inline void push_up(ll p)
{
    ans[p]=ans[ls(p)]+ans[rs(p)];
}
void build(ll p,ll l,ll r)
{
    tag[p]=0;
    if(l==r){ans[p]=a[l];return ;}
    ll mid=(l+r)>>1;
    build(ls(p),l,mid);
    build(rs(p),mid+1,r);
    push_up(p);
} 
inline void f(ll p,ll l,ll r,ll k)
{
    tag[p]=tag[p]+k;
    ans[p]=ans[p]+k*(r-l+1);
}
inline void push_down(ll p,ll l,ll r)
{
    ll mid=(l+r)>>1;
    f(ls(p),l,mid,tag[p]);
    f(rs(p),mid+1,r,tag[p]);
    tag[p]=0;
}
inline void update(ll nl,ll nr,ll l,ll r,ll p,ll k)
{
    if(nl<=l&&r<=nr)
    {
        ans[p]+=k*(r-l+1);
        tag[p]+=k;
        return ;
    }
    push_down(p,l,r);
    ll mid=(l+r)>>1;
    if(nl<=mid)update(nl,nr,l,mid,ls(p),k);
    if(nr>mid) update(nl,nr,mid+1,r,rs(p),k);
    push_up(p);
}
ll query(ll q_x,ll q_y,ll l,ll r,ll p)
{
    ll res=0;
    if(q_x<=l&&r<=q_y)return ans[p];
    ll mid=(l+r)>>1;
    push_down(p,l,r);
    if(q_x<=mid)res+=query(q_x,q_y,l,mid,ls(p));
    if(q_y>mid) res+=query(q_x,q_y,mid+1,r,rs(p));
    return res;
}
)"; 
	return 1;
	} 
	if(a=="ODT"){
		cout<<R"(#define IT set<node>::iterator
using namespace std;
typedef long long LL;
const int MOD7 = 1e9 + 7;
const int MOD9 = 1e9 + 9;
const int imax_n = 1e5 + 7;
struct node
{
    int l,r;
    mutable LL v;
    node(int L, int R=-1, LL V=0):l(L), r(R), v(V) {}
    bool operator<(const node& o) const
    {
        return l < o.l;
    }
};
LL pown(LL a, LL b, LL mod)
{
    LL res = 1;
    LL ans = a % mod;
    while (b)
    {
        if (b&1) 
            res = res * ans % mod;
        ans = ans * ans % mod;
        b>>=1;
    }
    return res;
}
set<node> s;
IT split(int pos)
{
    IT it = s.lower_bound(node(pos));
    if (it != s.end() && it->l == pos) 
        return it;
    --it;
    int L = it->l, R = it->r;
    LL V = it->v;
    s.erase(it);
    s.insert(node(L, pos-1, V));
    return s.insert(node(pos, R, V)).first;
}
void add(int l, int r, LL val)
{
    IT itr = split(r+1),itl = split(l);
    for (; itl != itr; ++itl) 
        itl->v += val;
}
void assign_val(int l, int r, LL val)
{
    IT itr = split(r+1),itl = split(l);
    s.erase(itl, itr);
    s.insert(node(l, r, val));
}
LL ranks(int l, int r, int k)
{
    vector<pair<LL, int> > vp;
    IT itr = split(r+1),itl = split(l);
    vp.clear();
    for (; itl != itr; ++itl)
        vp.push_back(pair<LL,int>(itl->v, itl->r - itl->l + 1));
    sort(vp.begin(), vp.end());
    for (vector<pair<LL,int> >::iterator it=vp.begin();it!=vp.end();++it)
    {
        k -= it->second;
        if (k <= 0) 
            return it->first;
    }
}
LL sum(int l, int r, int ex, int mod)
{
    IT itr = split(r+1),itl = split(l);
    LL res = 0;
    for (; itl != itr; ++itl)
        res = (res + (LL)(itl->r - itl->l + 1) * pown(itl->v, LL(ex), LL(mod))) % mod;
    return res;
}
int n, m;
LL seed, vmax;
LL rd()
{
    LL ret = seed;
    seed = (seed * 7 + 13) % MOD7;
    return ret;
}
LL a[imax_n];
)";
		return 1;
	}
	if(a=="stack"){
		cout<<R"(struct stack{
    int a[maxn], l = 0;
    void push(int x){
        a[++l] = x;
    }
    int top(){
        return a[l];
    }
    void pop(){
        l--;
    }
    int empty(){
        return l >= 0 ? 1 : 0;
    }}
    return 1;
	)";
}
	if(a=="queue"){
		cout<<R"(struct queue{
    int l = 0,r = 0,a[maxn];
    void push(int x){
        a[++r] = x;
    }
    int front(){
        return a[l];
    }
    void pop(){
        l++;
    }
    int empty(){
        return l > r ? 1 : 0;
    }
})";
		return 1;
	}
	if(a=="fast_read"){
		cout<<R"(inline int read()
{
    re int x=0,f=1;char c=getchar();
    while(c<'0'||c>'9'){if(c=='-') f=-1;c=getchar();}
    while(c>='0'&&c<='9') x=(x<<3)+(x<<1)+(c^48),c=getchar();
    return x*f;
})";
	}
	if(a=="gcd"){
		cout<<R"(long long gcd(long long a,long long b){
    long long m=a%b;
    while(m){
        a=b;b=m;
        m=a%b;
    }
    return b;
})";
return 1;
	}
	if(a=="fast_sqrt"){
		cout<<R"(int quickPower(int a, int b)//是求a的b次方
{
    int ans = 1, base = a;//ans为答案，base为a^(2^n)
    while(b > 0)//b是一个变化的二进制数，如果还没有用完
    {
        if(b & 1)//&是位运算，b&1表示b在二进制下最后一位是不是1，如果是：
            ans *= base;//把ans乘上对应的a^(2^n)

        base *= base;//base自乘，由a^(2^n)变成a^(2^(n+1))
        b >>= 1;//位运算，b右移一位，如101变成10（把最右边的1移掉了），10010变成1001。现在b在二进制下最后一位是刚刚的倒数第二位。结合上面b & 1食用更佳
    }
    return ans;
})";
		return 1;
	}
	if(a=="hl"){
		cout<<R"(double hldl(double a,double b,double c){
	double p=(a+b+c)/2;
	return sqrt(p*(p-a)*(p-b)*(p-c));
})";
		return 1;
	}
	if(a=="01dp"){
		cout<<"dp[j]=max(dp[j-w[i]]+val[i], dp[j]);";
		return 1;
	}
	if(a=="anydp"){
		cout<<"dp[j] = max(dp[j],dp[j - w[i]] + v[i]);";
		return 1;
	}
}