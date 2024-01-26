#include <stdio.h>

#define out(abc) printf(abc)

struct man {
    int age;
    int pay;
    char name[100];
    char bloodtype;
};

int main() {
    int count;

    out("How many people are there: ");
    scanf("%d", &count);

    struct man people[count];

    for (int i = 0; i < count; i++) {
        printf("Enter age for person %d: ", i + 1);
        scanf("%d", &people[i].age);

        printf("Enter pay for person %d: ", i + 1);
        scanf("%d", &people[i].pay);

        printf("Enter name for person %d: ", i + 1);
        scanf("%s", people[i].name);

        printf("Enter blood type for person %d: ", i + 1);
        scanf(" %c", &people[i].bloodtype);
    }

    char yn;
    out("Show data? (y/n): ");
    scanf(" %c", &yn);
    if (yn == 'y' || yn == 'Y') {
        for (int i = 0; i < count; i++) {
            printf("\nPerson %d:\n", i + 1);
            printf("Age: %d\n", people[i].age);
            printf("Pay: %d\n", people[i].pay);
            printf("Name: %s\n", people[i].name);
            printf("Blood type: %c\n", people[i].bloodtype);
        }
    }

    return 0;
}