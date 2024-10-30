#include <stdio.h>

struct information {
    char name[16];
    int day;
    int month;
    int year;
};

int main()
{
    int n;

    scanf("%d",&n);
    struct information list[n];
    for(int i = 0; i < n; i++) {
        scanf("%s %d %d %d",list[i].name,&list[i].day,&list[i].month,&list[i].year);
    }
    
    int min = 0; 
    int max = 0; 
    
    // 최소값과 최대값 찾기
    for(int i = 1; i < n; i++) {
        if (list[i].year < list[min].year ||
            (list[i].year == list[min].year && list[i].month < list[min].month) ||
            (list[i].year == list[min].year && list[i].month == list[min].month && list[i].day < list[min].day)) {
            min = i;
        }
        
        if (list[i].year > list[max].year ||
            (list[i].year == list[max].year && list[i].month > list[max].month) ||
            (list[i].year == list[max].year && list[i].month == list[max].month && list[i].day > list[max].day)) {
            max = i;
        }
    }
    
    printf("%s\n",list[max].name);
    printf("%s",list[min].name);
    return 0;
}
