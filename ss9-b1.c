#include <stdio.h>
int main() {
    int arr[100];           
    int currentLength = 0;  
    int n, value, addIndex;
    printf("Nhap so luong phan tu cua mang (<=100 va >0): ");
    scanf("%d", &n);
	for (int i = 0; i < n; i++) {
        printf("Nhap phan tu thu %d: ", i + 1);
        scanf("%d", &arr[i]);
    }
    currentLength = n;  
    printf("\nNhap gia tri phan tu can them: ");
    scanf("%d", &value);
    do {
        printf("Nhap vi tri can them (1 den %d): ", currentLength);
        scanf("%d", &addIndex);
        if (addIndex <= 0 || addIndex > currentLength + 1) {
            printf("Vi tri khong hop le. Vui long nhap lai.\n");
        }
    } while (addIndex <= 0 || addIndex > currentLength + 1);

    if (addIndex == currentLength + 1) {
        arr[currentLength] = value;
    } else {
        for (int i = currentLength; i >= addIndex; i--) {
            arr[i] = arr[i - 1];
        }
        arr[addIndex - 1] = value;  
    }
    currentLength++;  
    printf("\nMang sau khi them phan tu la: ");
    for (int i = 0; i < currentLength; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}
