#include<iostream>
using namespace std;

int main(){
    /*
    const int n = 42;
    int arr[n];
    */ 
    int n, m;
	cin >> n >> m;
    // cấp phát động vùng nhớ cho mảng 1 chiều dang arr[]
    // int* arr;  arr = new int[100]; or int *arr = new int[100]
// mảng 2 chiều
	// Khai báo con trỏ cấp 2 arr
	int** arr;
	// Cấp phát vùng nhớ động cho mảng 1 chiều các con trỏ kiểu int*
	// Có thể hiểu arr là mảng n phần tử, mỗi phần tử là 1 con trỏ kiểu int*
	arr = new int* [n]; // 
	for (int i = 0; i < n; i++) {
		// Cấp phát động cho các n mảng 1 chiều
		arr[i] = new int[m]; 
        // vs arr[1] sẽ có m phần tử = arr[1][m]: arr[2] có m phần tử = arr[2][m] ...
        cout<<arr[i]<<" "<<endl;
	}       

    // nhập phần tử trong mảng
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin >> arr[i][j];
        }
    }
    // cộng các phần tử trong từng mảng con
    for(int i=0;i<n;i++){
        int tong=0;
        for(int j=0;j<m;j++){
            tong+=arr[i][j];
        }
        // cout<< arr[i][j]<<"  ";
        cout<< " tong hang "<< i << " la : " << (int)tong<<endl;
    }
    /*for(int j =0;j<n;j++){
        if(arr[j]%3==0&&arr[j]%5!=0){
            printf("%d ",arr[j]);
        }
    }*/

    return 0;
}