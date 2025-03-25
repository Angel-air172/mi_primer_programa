#include <stdio.h>

int main(){
	int arr[] = {10, 20, 30, 40, 50};
	int *ptr = arr; // Apuntador al primer elemento
	
	printf("Primer elemento: %d\n", *ptr); //Equivalente a arr[0]
	printf("Segundo elemento: %d\n", *(ptr + 1)); //Equivalente a arr[1]
	printf("Tercer elemento: %d\n", *(ptr+2)); //Equivalente a arr[2]
	
	return 0;
}

