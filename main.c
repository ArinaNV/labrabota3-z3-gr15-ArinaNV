/* main.c */
#include <stdio.h>

struct WORKER 
{
    char surname[21];
    char name[21];
    char patronymic[21];
    char position[50];
    char date_of_birth[12];
    int age;
    char gender[10];
    char date_of_employment[12];
};

void main() {
    struct WORKER workers[10];
    for (int i = 0; i < 10; i++)
    {
        
        printf("Введите пол %d сотрудника (f если женский, m если мужской) : ", i + 1);
        gets(workers[i].gender);
        printf("Введите фамилию %d сотрудника : ", i + 1);
        gets(workers[i].surname);
        printf("Введите имя %d сотрудника : ", i + 1);
        gets(workers[i].name);
        printf("Введите отчество %d сотрудника : ", i + 1);
        gets(workers[i].patronymic);
        printf("Введите должность %d сотрудника : ", i + 1);
        gets(workers[i].position);
        printf("Введите дату рождения %d сотрудника : ", i + 1);
        gets(workers[i].date_of_birth);
        printf("Введите полный возраст %d сотрудника : ", i + 1);
        scanf("%d", &workers[i].age);
        getchar();
        printf("Введите дату приема на работу %d сотрудника : ", i + 1);
        gets(workers[i].date_of_employment);

    }
    
    int num_woman = 0; 
    int num_woman_retirement_age = 0;
    int num_man = 0;
    int num_man_retirement_age = 0;
    
    for (int i = 0; i < 10; ++i)
    {
        if(strcmp(workers[i].gender, "f") == 0)
        {
            num_woman++;
            if(workers[i].age > 58)
            {
                num_woman_retirement_age++;
            }
        }
        if(strcmp(workers[i].gender, "m") == 0)
        {
            num_man++;
            if(workers[i].age > 65)
            {
                num_man_retirement_age++;
            }
        }
    }
    printf("\nКоличество женщин: %d\nКоличество мужчин: %d\n", num_woman, num_man);
    
    printf("\nКоличество женщин пенсионного возраста: %d\nКоличество мужчин пенсионного возраста: %d\n",
           num_woman_retirement_age, num_man_retirement_age);
    
    printf("Отсортированный массив по возрасту:\n");
    
    for (int i = 0; i < 10; ++i)
    {
        if(strcmp(workers[i].gender, "f") == 0)
        {
            printf("\n %d. %s ", i + 1, workers[i].gender);
            printf("\n     %s ", workers[i].surname);
            printf("\n     %s ", workers[i].name);
            printf("\n     %s ", workers[i].patronymic);
            printf("\n     %s ", workers[i].position);
            printf("\n     %s ", workers[i].date_of_birth);
            printf("\n     %d ", workers[i].age);
            printf("\n     %s ", workers[i].date_of_employment);
        }
    }
    for (int i = 0; i < 10; ++i)
    {
        if(strcmp(workers[i].gender, "m") == 0)
        {
            printf("\n %d. %s ", i + 1, workers[i].gender);
            printf("\n     %s ", workers[i].surname);
            printf("\n     %s ", workers[i].name);
            printf("\n     %s ", workers[i].patronymic);
            printf("\n     %s ", workers[i].position);
            printf("\n     %s ", workers[i].date_of_birth);
            printf("\n     %d ", workers[i].age);
            printf("\n     %s ", workers[i].date_of_employment);
        }
    }
    
    int t = workers[0].age;
    
    for (int i = 0; i < 9; ++i)
    {
        if (workers[i].age > workers[i + 1].age)
        {
            t = i;
        }
    }
    printf("\nИнформация о самом молодом сотруднике: \n%s\n%s\n%s\n%s\n%s\n%d\n%s\n", workers[t].gender, workers[t].surname, workers[t].name, workers[t].patronymic, workers[t].position, workers[t].date_of_birth, workers[t].age, workers[t].date_of_employment);
}
