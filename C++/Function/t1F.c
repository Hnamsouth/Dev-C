#include<stdio.h>
#include<string.h>
void ham1(){ // khai báo function
    for(int a=1;a<=100;a++){     // lệnh bên trong Function
        if(a%3==0&&a%5!=0){
        printf("%d ",a);
        }
    }
    
}
void kytu(char name[]){ // khai báo hàm có đầu vào là chuỗi ký tự
    printf("Hello %s", name);

}
void numberMax(int a, int b , int c){ //Khi gọi một hàm có đầu vào bạn luôn cần cung cấp giá trị cho các đầu vào của hàm
    int giatrimax = a;
    if(giatrimax < b){
        giatrimax=b;
    }else if(giatrimax < c){
        giatrimax=c;
    }
    printf("%d",giatrimax);
}
void sapxepso(int n, int arr[]){
    for(int i=0;i<=n;i++){
        for(int j=i+1;j<=n;j++){
            if(arr[i] < arr[j]){
                int doicho = arr[i];
                arr[i] = arr[j];
                arr[j] = doicho;
            }
        }
    }
}
int tongmang(int n, int arr[]){ // hàm có kiểu trả về là số nguyên
    int tong=0;
    for(int i=0;i<=n;i++){
        tong+=arr[i];
    }
    return tong; // trả kêt quả về cho int tong; khi đó Function sẽ bằng giá trị của int tong
}
int maxOfArray(int arr[], int n) { 
    int solonnhat = arr[0];
	for(int i=0;i<=n;i++){
		if(solonnhat < arr[i]){
			solonnhat = arr[i];
		}
	}
    return solonnhat;
}
float chuviht(float bankinh){
    float cv;
        cv=bankinh*2*3.14;
    return cv; 
    // or
    // return bankinh*2*3.14;     // trả giá trị về cho hàm
}
void ktname(char a[],char b[]){
    if(strcmp(a,b)==0){
        printf("two people having the same name");
    }else{
        printf("two people don't having the same name");
    }
}
void kiemtraten(char a[],char b[]){
    if(strlen(a)==strlen(b)){
        int c=0;
        for(int i=0;i<strlen(a);i++){
            for(int j=0;j<strlen(b);j++){
                if(i==j){
                    if(a[i]==a[j]||a[i]==a[j]-32||a[j]==a[i]-32){
                        c++;
                    }
                }
            }
        }
        if(c==strlen(a)){
            printf("two people have the same name");
        }
    }else{
        printf("two people don't have the same name");
    }
    //FALSE
}
void show(char k[]){ // void show(char k[100])
    for(int i=0;i<strlen(k);i++){
        if(k[i] >='A'&& k[i]<='Z'){
            k[i]+=32;
        }
    }
    printf("%s\n",k);

}
int main(){
    /*char kytu[100],s1[100];
    scanf("%s%s",&kytu,&s1); // hoặc sử dụng gets(s1); gets(s2)
     // vì hàm ở trên chỉ nhận 1 giá trị đầu vào 
    //nên muốn chuyển đổi phải gọi hàm lần nữa và cấp giá trị muốn chuyển đổi
    // Gía trị cấp cho hàm phải cùng KIỂU DỮ LIỆU VỚI ĐẦU VÀO
    show(kytu);
    show(s1);*/


    /*int n1,k;
    scanf("%d",&n1);
    int arr1[100];
    int a[100];
    for(int i=0;i<=n1;i++){
        scanf("%d",&arr1[i]);
    }
    scanf("%d",&k);
    for(int i=0;i<=k;i++){
        scanf("%d",&a[i]);
    }
    printf("%d %d\n %d %d",maxOfArray(arr1, n1), maxOfArray(a,k), tongmang(n1,arr1),tongmang(k,a));   // dòng 1*/
    /* khi gọi hàm và cấp giá trị cho đầu vào của hàm đúng data type thì hàm sẽ hiểu và thực thi câu lệnh bên trong
    như vd "dòng 1" */

    // char name[100];
    // gets(name);
    
    /*float bankinh;
    scanf("%f",&bankinh);
    printf("chu vi hinh tron = %f",chuviht(bankinh));*/
    char a[100],b[100];
    gets(a);
    gets(b);
    // ktname(a,b);
    kiemtraten(a,b);
// gọi Funtion

    /*sapxepso(n,arr);
        for(int k=0;k<=n;k++){
        printf("%d ",arr[k]);
    }*/
    // tongmang(n,arr);

    // numberMax(54,2,45); // Khi gọi một hàm có đầu vào bạn luôn cần cung cấp giá trị cho các đầu vào của hàm
    // kytu(name);  // gọi hàm và cấp giá trị là chuỗi ký tự cho đầu vào của hàm
    // ham1();     
    // ham1();
//

    return 0;
}