#include<stdio.h>
#include<math.h>

double calculateNPV(double cashFlows[], int numPeriods, double rate) {
    double npv = 0.0;
    for (int i = 0; i < numPeriods; i++) 
    {
        npv += cashFlows[i] / pow(1 + rate, i + 1);
    }
    return npv;
}

double calculateIRR(double cashFlows[], int numPeriods) {
    double guess = 0.2; // 初始猜测值
    double step = 0.0001; // 每次迭代步长
    double npv = calculateNPV(cashFlows, numPeriods, guess);
    
    while (fabs(npv) > 0.01) // 设置精度阈值
    {
        guess += step;
        npv = calculateNPV(cashFlows, numPeriods, guess);
        if(npv < 0.0) 
        {
            step = -fabs(step); // 如果NPV大于零，反向缩小步长
        } 
        else
        {
            step = fabs(step); // 如果NPV小于零，正向缩小步长
        }
    }
    
    return guess;
}

int main() 
{
    double cashFlows[] = {-8.3, 1.13, 1.93, 4.52, 7.10, 12.8}; // 现金流量数组
    int numPeriods = 6; // 期数
    
    double irr = calculateIRR(cashFlows, numPeriods);
    printf("IRR: %.2f%%\n", irr * 100);
    
    return 0;
}


/* int main()
{
    float a[] = {-8.3, 1.13, 1.93, 4.52, 7.10, 12.8}, s = 0;
    int i;
    for(i = 0;i < 6;i++)
    {
        s = s + a[i]/(pow(1.1, i));
    }
    printf("%f", s);
    return 0;
} */