//1. Đếm các ký tự khoảng trắng trong chuỗi ký tự
int DemKhoangTrang(char chuoi[100]) {
    int dem = 0;
    for (int i = 0; i < strlen(chuoi); i++)
        if (chuoi[i] == ' ') dem++;
    return dem;
}
//2. Đếm các ký tự hoa / thường trong chuỗi ký tự
void DemKTThuong(char chuoi[]) {
    int i, dt = 0, dh = 0;
    for (i = 0; i < strlen(chuoi); i++)
        if ((chuoi[i] >= 'a') && (chuoi[i] <= 'z'))
            dt++;
        else if ((chuoi[i] >= 'A') && (chuoi[i] <= 'Z'))
            dh++;
    printf("So ky tu thuong : % d", dt);
    printf("So ky tu hoa : % d", dh);
}
//3. Đổi các từ ở đầu câu sang chữ hoa và những từ không phải đầu câu sang chữ thường.
void DoiHoaThuong(char chuoi[100]) {
    chuoi[0] = toupper(chuoi[0]);
    for (int i = 1; i < strlen(chuoi); i++)
        chuoi[i] = tolower(chuoi[i]);
    printf("Xuat chuoi: %s", chuoi);
}
//4. Chuyển các ký tự viết hoa thành viết thường
void ChuyenHoaSangThuong(char chuoi[100]) {
    char kq[100];
    strcpy(kq, chuoi);
    for (int i = 0; kq[i] != '\0'; i++)
        if ((kq[i] >= 'A') && (kq[i] <= 'Z'))
            kq[i] = tolower(kq[i]);
    printf("Xuat chuoi: ");
    puts(kq);
}
//5. Chuyển các ký tự viết thường thành viết hoa
void ChuyenThuongSangHoa(char chuoi[100]) {
    char kq[100];
    strcpy(kq, chuoi);
    for (int i = 0; kq[i] != '\0'; i++)
        if ((kq[i] >= 'a') && (kq[i] <= 'z'))
            kq[i] = toupper(kq[i]);
    printf("Xuat chuoi: ");
    puts(kq);
}
//6. Liệt kê các từ trong chuỗi
void LietKeTu(char chuoi[100]) {
    int d = 0;
    for (int i = 0; i < strlen(chuoi); i++)
        if (chuoi[i] == ' ') {
            for (int j = d; j < i; j++)
                d = i + 1;
            printf("%c", chuoi[j]);
            printf("\n");
        }
}
//7. Xóa các khoảng trắng đầu chuỗi / cuối chuỗi
void xoadau(char str[100]) {
    while (str[0] == ' ')
        for (int i = 0; i < strlen(str); ++i)
            str[i] = str[i + 1];
}
void xoacuoi(char chuoi[100]) {
    while (chuoi[strlen(chuoi)] == ' ')
        chuoi[strlen(chuoi)] = '\0';
}
//8. Kiểm tra chuỗi đối xứng
int DoiXung(char s[]) {
    int n = strlen(s);
    for (int i = 0; i <= (n-1)/2; i++)
        if (s[i] != s[n - i - 1])
            return false;
    return true;
}

/*
Một số hàm thuộc thư viện <string.h>
• strlen: hàm tính độ dài chuỗi ký tự
• strcpy: hàm sao chép chuỗi ký tự
• strdup: hàm tạo bản sao
• strlwr: hàm chuyển chuỗi thành chuỗi viết thường
• strupr: hàm chuyển chuỗi thành chuỗi viết hoa
• strrev: hàm đảo ngược
• strcmp: hàm so sánh 2 chuỗi có phân biệt hoa thường
• stricmp: hàm so sánh 2 chuỗi không phân biệt hoa thường
• strcat: hàm nối 2 chuỗi
• strstr: hàm tìm chuỗi trong chuỗi
 */