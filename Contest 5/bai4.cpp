#include<bits/stdc++.h> 

using namespace std;

typedef long long ll;
#define For(i,a,b) for(int i=a;i<=b;i++)

void Res(){
    int n,k;
    cin>>n>>k;
    int a[n+2];
    For(i,1,n){
        cin>>a[i]; 
        a[i]%=k; // 10%3 = 1 = (1%3 + 9%3)%3 = (2 %3 + 8%3)%3 = (3%3 + 7%3)%3
    }
    int f[1005][55]={0};// f[i][j] là dãy con dài nhất có tổng chia k dư j; i={1...i}
                        // --->   Find f[n][0] ?
    
}
int main(){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int test = 1;
    cin>>test;
    while(test--){
        Res();
    }
}
/*
Không ảnh hưởng đến kết quả cuối cùng, ta đặt A[i] = A[i] mod K. 
Áp dụng công thức tương tự bài toán “cái túi“ để “chọn ra một số các phần tử thỏa mãn yêu cầu đề bài”.
Ta tiến hành chọn ra nhiều nhất các phần tử có tổng chia K dư 0.

Gọi F[i, j] là số phần tử nhiều nhất trong dãy A[1..i] có tổng chia K dư j. Nếu không chọn được thì F[i, j] = -∞. F[i, j] được tính qua công thức như sau :
– Nếu trong dãy trên không chọn phần tử thứ i thì F[i, j] = F[i-1, j].
– Nếu trong dãy trên chọn phần tử thứ i thì F[i, j] = F[i-1, Sub(j, A[i])] + 1.

 Hàm Sub(x, y) trả về kết quả của phép trừ x cho y trên các lớp đồng dư mod K (Ví dụ K = 7 thì 1 – 3 = 5).
Do đó, F[i, j] = Max(F[i-1, j], F[i-1, Sub(j, A[i])] + 1).

Cơ sở quy hoạch động : F[0, 0] = 0. F[0, i] = -∞ (1 ≤  i < k).
Lưu ý bài toán cái túi thì chọn sao cho không vượt quá, còn bài này thì chọn đúng bằng mới được nên cơ sở QHĐ có -∞.
*/