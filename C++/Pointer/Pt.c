#include<stdio.h>
#include <stdlib.h> 

struct contro { 
    int tuoi;
    char ten[100];
    float chieu_Cao;
};



int main(){
    struct contro *bct, member1 ; // khai báo biến con trỏ *bct
    bct = &member1;
    /*printf("nhap chieu cao : \n tuoi : \n ho ten : \n");
    scanf("%f %d %s",&bct->chieu_Cao, &(*bct).tuoi,&(*bct).ten);
    printf("chieu cao member 1 : %f \ndo tuoi member 1: %d \nten cua member 1 : %s", bct->chieu_Cao, (*bct).tuoi,bct->ten);*/

    int slnguoi;
    scanf("%d",&slnguoi);
      /* allocating memory for n numbers of struct person
       cấp phát bộ nhớ slnguoi(n numbers) cho struct*/
    bct=(struct contro*) malloc(slnguoi * sizeof(struct contro));// cấp phát bộ nhớ cho cấu trúc(struct)
    int i;
    for(i=0;i<= slnguoi;i++){
        printf("nhap thong tin member 1: ");
        scanf("%f %d %s",(bct+i)->chieu_Cao, &(bct+i)->tuoi,&(bct+i)->ten);   
    }
    for(i=0;i<= slnguoi;i++)
        printf("chieu cao member %d : %f \ndo tuoi member %d: %d \nten cua member %d : %s",i, bct->chieu_Cao,i, (*bct).tuoi,i,bct->ten);
    
    /*
    Để cấp phát vùng nhớ động cho biến con trỏ trong ngôn ngữ C,
    ** bạn có thể sử dụng hàm "malloc()"  :memory allocation
        -Hàm malloc() thực hiện cấp phát bộ nhớ bằng cách chỉ định số byte cần cấp phát.
        -Hàm này trả về con trỏ kiểu void cho phép chúng ta có thể ép kiểu về bất cứ kiểu dữ liệu nào.
        vd: ptr = (int*) malloc(100 * sizeof(int)); // 
        Giả sử sizeof int là 4, khi đó lệnh dưới đây thực hiện cấp phát 400 bytes.
        Khi đó, con trỏ ptr sẽ có giá trị là địa chỉ của byte dữ liệu đầu tiên trong khối bộ nhớ vừa cấp phát.
    ** hoặc hàm 'calloc()':contiguous allocation

    Sử dụng hàm 'free()' để giải phóng bộ nhớ đã cấp phát khi không cần sử dụng,
    sử dụng 'realloc()' để thay đổi (phân bổ lại) kích thước bộ nhớ đã cấp phát trong khi chạy chương trình.*/
    
    /*int *pt;    // *pt và c là 1 giá trị 
    int c=20;   // pt và &c là 1 địa chỉ
    pt=&c;
    printf("%d\n",sizeof(&c));
    printf("dia chi cua &c la: %d\n",&c);       // output : địa chỉ &c=địa chỉ pt
    printf("dia chi cua pt la: %d\n",pt);
    printf("gia tri cua *pt la: %d\n",*pt);     // output : giá trị *pt = giá trị c
    printf("gia tri cua c la: %d",c);*/

    
    /*int n = 2550451511; // n = 00 00 00 00 00 00 01 04 H
    int* p = &n; // p trỏ tới byte 00 đầu tiên của  n
    float* pp = (float*) p;  
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

    // Kq trên còn phụ thuộc vào Endianness.*/

    return 0;
}