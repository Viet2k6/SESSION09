#include <stdio.h>
int main() {
    int arr[100];
    int n = 0;
    int choice;

    do {
        printf("\nMENU\n");
        printf("1. Nhap vao mang\n");
        printf("2. Hien thi mang\n");
        printf("3. Them phan tu\n");
        printf("4. Sua phan tu\n");
        printf("5. Xoa phan tu\n");
        printf("6. Thoat\n");
        printf("Lua chon cua ban: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1: {
                printf("Nhap so luong phan tu: ");
                scanf("%d", &n);
                if (n > 100) {
                    printf("So luong phan tu vuot qua gioi han (toi da 100)\n");
                    n = 0;
                } else {
                    for (int i = 0; i < n; i++) {
                        printf("Nhap phan tu thu %d: ", i + 1);
                        scanf("%d", &arr[i]);
                    }
                }
                break;
            }
            case 2: {
                if (n == 0) {
                    printf("Mang rong\n");
                } else {
                    printf("Mang hien tai: ");
                    for (int i = 0; i < n; i++) {
                        printf("%d ", arr[i]);
                    }
                    printf("\n");
                }
                break;
            }
            case 3: {
                if (n >= 100) {
                    printf("Mang da day, khong the them phan tu\n");
                } else {
                    int phan_tu;
                    printf("Nhap phan tu can them: ");
                    scanf("%d", &phan_tu);
                    arr[n] = phan_tu;
                    n++;
                    printf("Them phan tu thanh cong\n");
                }
                break;
            }
            case 4: {
                if (n == 0) {
                    printf("Mang rong, khong co phan tu de sua\n");
                } else {
                    int pos, newValue;
                    printf("Nhap vi tri can sua (bat dau tu 0): ");
                    scanf("%d", &pos);
                    if (pos < 0 || pos >= n) {
                        printf("Vi tri khong hop le\n");
                    } else {
                        printf("Nhap gia tri moi: ");
                        scanf("%d", &newValue);
                        arr[pos] = newValue;
                        printf("Sua phan tu thanh cong\n");
                    }
                }
                break;
            }
            case 5: {
                if (n == 0) {
                    printf("Mang rong, khong co phan tu de xoa\n");
                } else {
                    int pos;
                    printf("Nhap vi tri can xoa (bat dau tu 0): ");
                    scanf("%d", &pos);
                    if (pos < 0 || pos >= n) {
                        printf("Vi tri khong hop le.\n");
                    } else {
                        for (int i = pos; i < n - 1; i++) {
                            arr[i] = arr[i + 1];
                        }
                        n--;
                        printf("Xoa phan tu thanh cong\n");
                    }
                }
                break;
            }
            case 6:
                printf("Thoat chuong trinh\n");
                break;
            default:
                printf("Lua chon khong hop le. Vui long chon lai\n");
        }
    } while (choice != 6);

    return 0;
}
