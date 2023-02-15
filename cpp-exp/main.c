#include <stdio.h>
#include <stdlib.h>

struct Person {
	int id;
	float age;
	char name[20];
};

struct Product {
	char name[20];
	double price;
	int quantity;
};

union myUnion {
	int id;
	float age;
	char name[20];
};

void simpleCalculator() {
	int num1, num2, sum;
	
	printf("Enter first number: ");
	scanf("%d", &num1);
	
	printf("Enter second number: ");
	scanf("%d", &num2);
	
	sum = num1 + num2;
	printf("Answer = %d", sum);
	
}

void handlePersonStruct() {
	struct Person record1;
	record1.id = 25;
	record1.age = 39.61;
	strcpy(record1.name, "Shuaibu");
	
	printf("Name:%s \t Age:%f \t ID:%d\n", record1.name, record1.age, record1.id);
}

void handleMyUnion() {
	union myUnion record1;
	strcpy(record1.name, "Awesome Shuaibu");
	record1.age = 15;
	record1.id = 78;
	
	printf("Name:%s \t Age:%f ID:%d\n", record1.id, record1.name, record1.age);
}

int main() {
	
	simpleCalculator();
	printf("\n");
	
	handlePersonStruct();
	printf("\n");
	
	handleMyUnion();
	printf("\n");
	

	return 0;
	
}