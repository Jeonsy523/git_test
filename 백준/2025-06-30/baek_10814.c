#include <stdio.h>
#include <string.h>

typedef struct _Student{
    int age;
    char name[101];
} Student;

int quicksort(Student s[], int p, int r);
int partition(Student s[], int p, int r);
int exchange(Student s[], int a, int b);

int main()
{
    int n = 0;
    scanf("%d", &n);

    Student s[n];

    for(int i = 0; i < n; i++)
    {
        scanf("%d %s", &s[i].age, s[i].name);
    }

    quicksort(s, 0, n - 1);

    for(int i = 0; i < n; i++)
    {
        printf("%d %s\n", s[i].age, s[i].name);
    }
}

int quicksort(Student s[], int p, int r)
{
    if(p < r)
    {
        int q = partition(s, p, r);
        quicksort(s, p, q-1);
        quicksort(s, q+1, r);
    }
    return 0;
}

int partition(Student s[], int p, int r)
{
    int x = r, i = p - 1;
    int j;
    for(j = p; j < r; j++)
    {
        if(s[j].age < s[x].age)
        {
            i++;
            exchange(s, i, j);
        }
    }
    exchange(s, i+1, r);
    return i+1;
}

int exchange(Student s[], int a, int b)
{
    Student tmp;

    tmp.age = s[a].age;
    strcpy(tmp.name, s[a].name);
    
    s[a].age = s[b].age;
    strcpy(s[a].name, s[b].name);
    
    s[b].age = tmp.age;
    strcpy(s[b].name, tmp.name);

    return 0;
}