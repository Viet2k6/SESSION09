#include<stdio.h>
int main() {
    int arr[100], n = 0, choice;

    while (1) {
        printf("\nMENU\n");
        printf("1. Nhap so phan tu can nhap va gia tri cac phan tu\n");
        printf("2. In ra gia tri cac phan tu dang quan ly\n");
        printf("3. In ra gia tri cac phan tu chan va tinh tong\n");
        printf("4. In ra gia tri lon nhat va nho nhat trong mang\n");
        printf("5. In ra cac phan tu la so nguyen to trong mang va tinh tong\n");
        printf("6. Nhap vao mot so va thong ke trong mang co bao nhieu phan tu do\n");
        printf("7. Them mot phan tu vao vi tri chi dinh\n");
        printf("8. Thoat\n");
        printf("Lua chon cua ban: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Nhap so phan tu: ");
                scanf("%d", &n);
                printf("Nhap gia tri cac phan tu:\n");
                for (int i = 0; i < n; i++) {
                    printf("Phan tu thu %d: ", i + 1);
                    scanf("%d", &arr[i]);
                }
                break;

            case 2:
                printf("Cac phan tu dang quan ly la: ");
                for (int i = 0; i < n; i++) {
                    printf("%d ", arr[i]);
                }
                printf("\n");
                break;

            case 3:
                {
                    int sum = 0;
                    printf("Cac phan tu chan la: ");
                    for (int i = 0; i < n; i++) {
                        if (arr[i] % 2 == 0) {
                            printf("%d ", arr[i]);
                            sum += arr[i];
                        }
                    }
                    printf("\nTong cac phan tu chan la: %d\n", sum);
                }
                break;

            case 4:
                {
                    if (n > 0) {
                        int max = arr[0], min = arr[0];
                        for (int i = 1; i < n; i++) {
                            if (arr[i] > max) max = arr[i];
                            if (arr[i] < min) min = arr[i];
                        }
                        printf("Gia tri lon nhat la: %d\n", max);
                        printf("Gia tri nho nhat la: %d\n", min);
                    } else {
                        printf("Mang rong.\n");
                    }
                }
                break;

            case 5:
                {
                    int sum = 0;
                    printf("Cac phan tu la so nguyen to la: ");
                    for (int i = 0; i < n; i++) {
                        int is_prime = 1;
                        if (arr[i] < 2) {
                            is_prime = 0;
                        } else {
                            for (int j = 2; j * j <= arr[i]; j++) {
                                if (arr[i] % j == 0) {
                                    is_prime = 0;
                                    break;
                                }
                            }
                        }
                        if (is_prime) {
                            printf("%d ", arr[i]);
                            sum += arr[i];
                        }
                    }
                    printf("\nTong cac so nguyen to la: %d\n", sum);
                }
                break;

            case 6:
                {
                    int x, count = 0;
                    printf("Nhap so can thong ke: ");
                    scanf("%d", &x);
                    for (int i = 0; i < n; i++) {
                        if (arr[i] == x) count++;
                    }
                    printf("So %d xuat hien %d lan trong mang.\n", x, count);
                }
                break;

            case 7:
                {
                    int value, pos;
                    printf("Nhap gia tri can them: ");
                    scanf("%d", &value);
                    printf("Nhap vi tri can them (0 den %d): ", n);
                    scanf("%d", &pos);
                    if (pos >= 0 && pos <= n) {
                        for (int i = n; i > pos; i--) {
                            arr[i] = arr[i - 1];
                        }
                        arr[pos] = value;
                        n++;
                        printf("Mang moi la: ");
                        for (int i = 0; i < n; i++) {
                            printf("%d ", arr[i]);
                        }
                        printf("\n");
                    } else {
                        printf("Vi tri khong hop le.\n");
                    }
                }
                break;

            case 8:
                printf("Ket thuc.\n");
                return 0;

            default:
                printf("Lua chon khong hop le, vui long chon lai.\n");
        }
    }
	return 0;
}
