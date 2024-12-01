#include <stdio.h> 
int main() {
    int index;
    int n;	
        printf("Nhap so luong phan tu cua mang: ");
        scanf("%d", &n);

    int arr[n]; 
	printf("Nhap cac phan tu cua mang:\n");
    for (int i = 0; i < n; i++) {
        printf("Phan tu %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    do {
        printf("Nhap vi tri phan tu can xoa (tu 1 den %d): ", n);
        scanf("%d", &index);

        if (index <= 0 || index > n) {
            printf("Vi tri khong hop le. Vui long nhap lai.\n");
        }
    } while (index <= 0 || index > n);
	
	for (int i = index - 1; i < n - 1; i++) {
        arr[i] = arr[i + 1];
    }
    n--; 
	
	printf("Da xoa phan tu tai vi tri %d.\n", index);
	printf("Mang moi la: ");
    for (int i = 0; i < n; i++) {
        printf("%2d ", arr[i]);
    }
    printf("\n");
	return 0;
}












