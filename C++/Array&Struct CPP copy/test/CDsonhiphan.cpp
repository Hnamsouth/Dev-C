#include<iostream>
#include<math.h>
using namespace std;
/* 
Chuyển số nhị phân sang thập phân
số nhập phân sang nhị phân: 1234 = 1*10^3 + 2*10^2 + 3*10^1 + 4*10^0
                                    1000  +   200   +  30   +    4
Chia lặp đi lặp lại số đó cho 2. Phép chia dừng lại khi kết quả lần chia cuối cùng bằng 0.
Lấy các số dư theo chiều đảo ngược sẽ được số nhị phân cần tìm.
    11 = 11/2=5 dư 1 -> 5/2=2 dư 1 -> 2/2=1 dư 0 -> 1/2=0 còn 1
    ->> so nhi phan = 1011
số nhị phân sang thập phân: 1101 = 1*2^3 + 1*2^2 + 0*2^1 + 1*2^0 =13
                                    8    +   4   +   0   +   1   =13
101= 101/10=10 dư 1 -> 10/10 = 1 dư 0 -> 1/10 =0;
        1*2^2 + 0*2^1 + 1*2^0 = 5

*/
int NPtoTP (long long sonhiphan){
    int p=0;
    int soThapPhan = 0;
    while(sonhiphan > 0){
        soThapPhan += (sonhiphan%10) * pow(2,p);
        p++;
        sonhiphan/=10;
    }
    return soThapPhan;
}
long long TptoNP (int soThapPhan){
    int n=0;
    long long Snhiphan =0;
    while(soThapPhan > 0){
        Snhiphan += (soThapPhan%2) * pow(10,n);
        n++;
        soThapPhan /=2;
    }
    return Snhiphan;

}
int demso( int n ,int m){
    int i=0;
    int Snhiphan;
    for(i;i<m;i++){
        Snhiphan = n%2;
        n /=2;
    }
    return Snhiphan;
}
int main(){
    /*long long sonhiphan;
    printf("\nnhap so Nhi phan: ");
    scanf("%lli",&sonhiphan);
    int STP;
    printf("\nnhap so Thap phan: ");
    scanf("%d",&STP);
    printf("\nso TP la : %d", NPtoTP(sonhiphan));
    printf("\nso NP la : %lli", TptoNP(STP));*/

    /*int a ,sonhiphan=0;
	cin >> a;
	while (a >0){
		if(a%2==1) // if(a&1) tức là nếu a có số bít cuối cùng là 1
		{
			sonhiphan++;
		}
		a/=2; // or n = n>>1; 
		// vd: 11=1011 >> 1 = 101=5 >> 1=10 =2 >> 1 = 1
	}
	cout << " answer = "<< sonhiphan;*/

    //dem so bit
    // cout << (a & (1 << (n - 1))); == cout << (1 & (a >> (n - 1)));
    int a,n;
    cin >> a >> n;
    // cout<<demso(a,n); 
    // (a & (1 << (n - 1)));
    (~(a >> (n - 1)));
    // ( 1 & (~(a >> (n - 1))));
    cout << ~3;  // 5 : 101

    /*
    if ((a & (1 << (n - 1))) == 0) {
		cout << 0;
	} else {
		cout << 1;
	}*/

    /*
    cout << (1 & (a >> (n - 1)));

    cout << (1 & (a >> (n - 1)));*/
     // đến vị trí thứ n của a


    /*cout << (1 & (~(8 >> (4 - 1))))<<endl;

    cout << (2<<3) <<endl;
    cout << (21>>3) <<endl;
    cout << (4&6) <<endl;
    cout << (6&6) <<endl;
    cout << (1&500) <<endl;
    cout << (1&9) <<endl;*/



    return 0;
}