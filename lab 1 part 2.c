#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
int main()
{
// ���������� ������ , �� ������ ����������������� � �������

unsigned int variant ;// 1 ��� 2- �������� �������� ����� variant
int N;
int n;
double start ,delta,x;
double X1, X2, y;
// �������� �������� ����� variant
// ��� ������� ������������ ������� ���������� �������� ��������
// �� ��������� ����� while()
printf("Enter variant (1 or 2):");
scanf("%u",&variant);
if  ( variant ==1){
printf("Perform Action for var 1\n" );
printf("Enter begin argument value X1:");
scanf("%lf",&X1);
printf("Enter end argument value X2:");
scanf("%lf",&X2);
printf("Enter points number N:");
scanf("%u",&N);

n=0;
x=X1;
delta = (X2-X1)/(N-1); // ���������� ���������� ��������� ��� ������� ����
printf("X1 = %lf, X2 = %lf, N = %u, delta = %lf", X1,X2,N,delta);


printf("--------------------------------\n"); // ������� ��������� �������
printf("|   N    |    x    |    y    |\n");
printf("--------------------------------\n");
while(x<X2)// ������� � ������� ����� ���� �� �� ����� �� ��������� ����� �2
    {
        x=X1+n*delta; // ���������� ������� �������� ��� ������� ����
        n++; // ����������� ������� �������� ���� �� 1
        y = ( (x*x*x) / 30 ) - 4*x*x - 50; // ��������� ������� ��� �������� ���������
        printf("|  %03u |  %03.2lf |  %03.2lf  |\n",n,x,y); // ������� ��������� ������ �������
    }

} else if(variant == 2) {
printf(" Perform Action for var 2\n");

}
 else printf("Variant not valid\n");
printf ("Program finished\n");
return 0;
}
