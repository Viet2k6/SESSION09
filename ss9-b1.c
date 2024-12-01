#include <stdio.h>
int main() {
    int arr[100];           
    int currentLength = 0;  
    int n, value, addIndex;
    printf("nhap so luong phan tu cua mang (<=100 va >0): ");
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        printf("nhap phan tu thu %d: ", i + 1);
        scanf("%d", &arr[i]);
    }
    currentLength = n;  
    printf("\nnhap gia tri phan tu can them: ");
    scanf("%d", &value);
    printf("nhap vi tri can them (1 den %d): ", currentLength);
    scanf("%d", &addIndex);
    if (addIndex <= 0 || addIndex > currentLength) {
        printf("vi tri khong hop le\n");
    } else {
        if (addIndex == currentLength) {
            arr[currentLength] = value;
            currentLength++;  
        } else {
            for (int i = currentLength; i > addIndex; i--) {
                arr[i] = arr[i - 1];
            }
            arr[addIndex-1] = value;  
            currentLength++;  
        }
        printf("\nmang sau khi them phan tu la: ");
        for (int i = 0; i < currentLength; i++) {
            printf("%d ", arr[i]);
        }
        printf("\n");
    }
    return 0;
}
