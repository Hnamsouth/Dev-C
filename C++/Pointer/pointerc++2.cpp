#include<iostream>
#include<string>
using namespace std;
/* Con trỏ là một dạng đặc biệt của biến, do cũng là 1 biến nên nó cũng có địa chỉ và giá trị
nó khác các biến bình thường ở chỗ  GIÁ TRỊ CỦA 1 CON TRỎ CHÍNH LÀ ĐỊA CHỈ CỦA 1 BIẾN KHÁC.
Cú pháp để khai báo một con trỏ:
Kiểu_dữ_liệu *tên_con_trỏ; // Ví dụ: int *p;
*/
void change(int *p) {// có thể hiểu là int *pt =&a
    (*p)++; // or *p=*p+1;
}

void chdoikt(string *ctkt) {
    for(int i=0;i<=(*ctkt).size();i++){ // bieenskuty.size() là lệnh tính số lượng ký tự trong biến ký tự đó
        if((*ctkt)[i] >= 96 && (*ctkt)[i]<=122){
            (*ctkt)[i]-=32;
        }
    }
}
int timmax (int *cont, int n){
    int max=cont[0];
    for(int i=0;i<=n;i++){
        if(cont[i] > max) max=cont[i];
    }
    return max;

}
int main(){
    /*
    int n;
    cin >> n;
    int arr[1000];
    for(int i=0;i<=n;i++) cin >> arr[i];
    cout<< " so lon nhat la: "<< timmax(&arr[0],n);
    cout<<
    */
    // khi cấp giá trị cho biến đầu vào là CON TRỎ thì nên sử dụng tham chiếuc vd: timmax(&arr[0])
    // sử dụng tham chiếu mới có thể thay đổi giá trị gốc của biến

   /*
    int a=6;
    cout<< " gia tri cua a la: "<< a <<endl;
    change(&a); // cấp phát vị trí(chỉ định) a cho hàm change vơi đầu vào là con trỏ *pt
    cout<< " gia tri moi cua a la: "<< a;
    */

    /*
    string s;
	cin >> s;
    char * ctc=&s[0];
    for(int i=0;i<s.size();i++){
        cout<< " phan tu " << i << " ctc la : "<< *(ctc+i) <<endl;
    }
    */
	/*chdoikt(&s); 
    cout << s;*/

    /*
    chdoikt(s) : 
    -(&s)- sử dụng truyền tham chiếu: truyền giá trị gốc đến hàm có thể thay đổi giá trị gốc
    *tham chiếu thường được sử dụng cho các trường hợp nhập dữ liệu đầu vào 
    Lưu ý đối với mảng, khi khai báo một mảng ở hàm thì mạc định nó là một tham chiếu chứ không phải là tham trị.
        void function(int &a[]){} // lỗi 
        void function(int a[]){} // true    
    -(s): là phép tham trị: coppy giá trị gốc và truyền đến hàm và chỉ thay đổi giá trị đã coppy
        Trong một hàm chúng ta hoàn toàn có thể vừa truyền tham chiếu và vừa truyền được tham trị. (lưu ý tới thứ tự truyền tham số khi gọi hàm)
        Ví dụ: void thuongtet(int &tien_thuong, int luong) {}
    **Khi dùng tham trị thì x ở hàm changeValue và ở main 2 biến là độc lập với nhau.
    **Khi dùng tham chiếu thì x ở hàm changeValue và ở main 2 biến là một.    
    */
    /*
    double mangd[10]={1.5,5.5,55.5,12.5,12.5};
    double *ctrd ;
    ctrd = &mangd[0];
    for(int i=0;i<5;i++){
        cout<< " phan tu " << i << " mangd la : "<< *(ctrd+i)<<endl;
    }
    for(int i=0;i<5;i++)
        cout<< " dia chi " << i << "  la : "<< ((int)(ctrd+i)) <<endl;*/
    /*for(int i=0;i<10;i++){
        cout<< (int)(ctrd + i)<< " ";
    }
     */

    /*int n;
    cin >> n;
    int *ctro = new int[n]; // cấp bộ nhớ động cho con trỏ
    for(int i=0; i <= n;i++){
        cin >> ctro[i];
    }
    int **a = &ctro;
    for(int i=0;i<=n;i++){
        cout<< " so thu" << i+1 << " la : " << *(ctro +i) <<endl;
        cout<< " dia chi cua ctro " << i << " la : " << ctro+i <<endl;
        cout<< " dia chi cua a " << i << " la : " << a+i <<endl;
    } 
	delete []ctro; // giải phóng bộ nhớ đã được phấp phát khi  không sử dụng nữa
    */

    int n = 360; // n = 00 00 00 00 00 00 01 04 H
    int* p = &n; // p trỏ tới byte 00 đầu tiên của  n
    double* pp = (double*) p;  
    // do char chỉ có 1 byte nên pp chỉ tới byte nhỏ nhất của n 
    // là byte có giá trị 04 cuối cùng
    *pp = 0;
    // gán *pp =0 tức là set giá trị trong ô nhớ cuối của n = 0
    // lúc này n trở thành n = 00 00 00 00 00 00 01 00 H
    // *(pp + 2) = 1;
    // set giá trị trong ô nhớ gần cuối cách 2 ô nhớ giá trị là 1
    // lúc này n trở thành n= 00 00 00 00 00 01 01 00
    printf("n = %f\n", n); 

    // kết quả 65792

    // Kq trên còn phụ thuộc vào Endianness.

    return 0;
}