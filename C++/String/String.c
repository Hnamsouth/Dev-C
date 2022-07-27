#include<stdio.h>
#include<string.h>
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
            printf("two people having the same name");
        }
    }else{
        printf("two people don't have the same name");
    }
}
char hamky(char a[]){
    return "jhjh";
}
int main() {

    char a[100],b[100];
    gets(a);
    gets(b);
    // kiemtraten(a,b);
    printf("%s",hamky(a));
    /*int n;
    scanf("%d", &n);
    int a[1000];
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    int sll = 0;
    for (int i = 0; i < n; i++) {
        /*for(int j=i+1;j<n;j++){
            if (a[i] > a[j]) {
                int temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
        if(a[i] > sll){
            sll = a[i];
        }

    }
    printf("%d",sll);
    for (int k = 0; k < n; k++){
        printf("%d ", a[k]);
    }
*/
    /*int soluongpt;
    scanf("%d",&soluongpt);
    int arr[1000];
    for(int i=0;i<soluongpt;i++){
        scanf("%d",&arr[i]);
    }// phần tử đầu tiền là a[0] pt cuôi cùng là a[soluongpt -1]
    printf("%d", arr[0]+arr[soluongpt - 1]);*/

    /*int arr[100][100];  // khai bao mang arr truoc thi moi chay dc
    int sh,sc;          // ly do : xem vd :)
    scanf("%d%d",&sh,&sc);
    for(int  i= 0; i < sh; i++){ // i-j: 0-1 0-2 0-3 => 1-1 1-2 1-3
        for(int j = 0; j < sc; j++){
            scanf("%d",&arr[i][j]);
        }
    }
    int tongdayso = 0;
    for(int c=0;c<sh;c++){ 
        for(int d=0;d<sc;d++){
            tongdayso+=arr[c][d];
        }
    }
    printf("%d",tongdayso);*/

    /*int n;
    scanf("%d",&n);
    char kytu[100];
    for(int i=0;i<=n;i++){
        scanf("%c",&kytu[i]);
    }
    for(int j=0;j<=n;j++){
        printf("%c",kytu[j]);   
    }*/

    /*
    char kytu[100];
    scanf("%s",&kytu);
    printf("%s",kytu);
    */

    /*char name[100],Address[100];
    scanf("%s%s",&name,&Address);
    // gets(name);
    // gets(Address);
    printf("Name: %s\nAddress: %s",name,Address);*/

    /*char kytu[100];
	scanf("%s",&kytu);
	int stt;
	scanf("%d",&stt);
	printf("%c",kytu[stt]);*/

    /* đếm số ký tự trong mảng
    int sl = 0;
    char mang[100];
	gets(mang);
    while (mang[sl] != '\0') {
        sl++;
    }
	printf("%d",sl);*/

    /*int sl=0;
    char kytu[100];
	gets(kytu);
	for(int j=0;j<100;j++){
        if(kytu[j]!='\0'){
            sl++;
        }else{
            break;
        }
    }
	printf("%d",sl);*/

    /*
	printf("%d", strlen(mang)); // khai bao thu vien include<string.h> de su dung
	*/
// Điếm số ký tự giống ký tự cho trước trong mảng
    /*char c;
    char s[100];
    scanf("%c", &c);
    scanf("%s", s);
    int slkt=0;
    int len = strlen(s); // strlen sẽ đếm só lượng ký tự nhập vào từ bàn phím
                        // rút ngắn quá trình thực thi của chương trình và hiệu quả
    for(int i=0;i<len;i++){ 
        if(s[i]==c){
            slkt++;
        }
    }
    printf("%d",slkt);*/
// 
    /*char chuoikytu[100];
    // scanf("%s",&chuoikytu);
    gets(chuoikytu);
    for(int i=0;i<=strlen(chuoikytu);i++){
        if(chuoikytu[i]== '3'){
            chuoikytu[i]='e';
        }
    }
    printf("%d\n",strlen(chuoikytu));
    printf("%s",chuoikytu);*/

//
    /*char c;
    char s[100];
    scanf("%c", &c);
    scanf("%s", s);
    int stt=-1;
    for(int i=0;i<strlen(s);i++){
        if(s[i]==c){
            stt=i;
            break;
        }
    }
    printf("%d",stt);
    
    int i,x=0;
    for(i=0;i<strlen(s);i++){
        if(s[i]!=c){
            x=-1;
        }else{
            x=i;
        }
    }
    printf("%d",x);
    */
//
    /*char chuokt[100];
	scanf("%s",&chuokt);
    for(int i=0;i<strlen(chuokt);i++){
        if(chuokt[i] >= 97)
            chuokt[i]-=32;
    }
    printf("%s",chuokt);*/

    // int arr[] = {10, 80, 30, 90, 40, 50, 70};
    // int n = sizeof(arr)/sizeof(arr[0]);
    // quickSort(arr, 0, n-1);
    // printf("Sorted array: \n");
    // printArray(arr, n);

    /*char a[100],b[100];
    // scanf("%s%s",&a,&b);
    gets(a);
    gets(b);
    if(strcmp(a,b)==0){         // hàm strcmp nằm trong thư viện stdio.h giúp nhận biết 2 biến a,b có giống nhau hay ko
        printf("two people having the same name");   // nhược điểm: không phần biệt chữ hoa và chữ thường
    }else{
        printf("two people don't having the same name");
    }*/
// in tu A den Z

    /*char c='A';
    while(c!='Z'+1){
        printf("%c",c);
        c++;
    }*/
    // Or
    /*for(char i='A';i<='Z';i++){
        printf("%c",i);
    }*/
    
    return 0;
}