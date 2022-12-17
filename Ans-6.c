/*WAP to accept the details of employee and display them using structure.
Details consist of Employee ID, Name, Designation, Department, Salary and date of joining.
Use nested structure for date of joining.*/

#include <stdio.h>

struct employee{
    int emp_id;
    char emp_name[30];
    char emp_des[20];
    char emp_dept[20];
    float emp_salary;
    struct join{
        int dd;
        int mm;
        int yy;
    }doj;
};


struct employee input(struct employee);
void display(struct employee);
int main()
{
    struct employee emp, t;
    t = input(emp);
    printf("\n****************************\n");
    display(t);
    return 0;
}


struct employee input(struct employee temp)
{
    printf("\nEnter emp_id : ");
    scanf("%d",&temp.emp_id);
    printf("Enter emp_name : ");
    fflush(stdin);
    fgets(temp.emp_name, 30, stdin);
    printf("Enter emp_des : ");
    fgets(temp.emp_des, 20, stdin);
    printf("Enter emp_dept : ");
    fgets(temp.emp_dept, 20, stdin);
    printf("Enter emp_salary : ");
    scanf("%f",&temp.emp_salary);
    printf("Enter emp_doj : ");
    scanf("%d/%d/%d",&temp.doj.dd, &temp.doj.mm, &temp.doj.yy);
    return temp;
}


void display(struct employee temp)
{
    printf("\nEmp_Id : %d\n",temp.emp_id);
    printf("Emp_Name : %s",temp.emp_name);
    printf("Emp_Des : %s",temp.emp_des);
    printf("Emp_Dept : %s",temp.emp_dept);
    printf("Emp_Salary : %.2f\n",temp.emp_salary);
    printf("Emp_DOJ : %d/%d/%d\n\n",temp.doj.dd, temp.doj.mm, temp.doj.yy);
}