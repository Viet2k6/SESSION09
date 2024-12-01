#include <stdio.h> 
int main() {
    int index, value, n;
    printf("Nhap so luong phan tu cua mang: ");
    scanf("%d", &n);
    
	int arr[n]; 
    printf("Nhap cac phan tu cua mang:\n");
    for (int i = 0; i < n; i++) {
        printf("Phan tu %d: ", i + 1);
        scanf("%d", &arr[i]);
    }
	do {
        printf("Nhap vi tri phan tu can sua (tu 1 den %d): ", n);
        scanf("%d", &index);
        if (index <= 0 || index > n) {
            printf("Vi tri khong hop le. Vui long nhap lai.\n");
        }
    } while (index <= 0 || index > n);

    printf("Nhap gia tri moi cho phan tu %d: ", index);
    scanf("%d", &value);

    arr[index - 1] = value; 

    printf("Mang moi la: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
	return 0;
}
