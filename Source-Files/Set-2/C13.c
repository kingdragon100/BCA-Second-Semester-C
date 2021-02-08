/*WAP to find sales person commission on sales amount according to following conditions
Sales amount                    Commission
<5000                           0%
>=5000 and < 10000              5%
>=10000 and <15000              7%
>=15000                         10%
*/

#include<stdio.h>

void main(){
    float sales, commission;

    printf("Enter the sales amount: ");
    scanf("%f", &sales);

    if (sales < 5000)
    {
        commission = sales * 0;
    }
    else if (sales >= 5000 && sales <10000)
    {
        commission = sales * 0.05;
    }
    else if (sales >= 10000 && sales <15000)
    {
        commission = sales * 0.07;
    }
    else
    {
        commission = sales * 0.1;
    }
    printf("Total Sales Amount: %.2f\nCommission: %.2f\n",sales+commission,commission);
    
    
}
