
#include <stdio.h>

// Function to calculate bonus
double calculateBonus(double sales, double target) {
    if (sales >= target) {
        return 0.1 * sales; // 10% bonus if target is met or exceeded
    }
    return 0.0; // No bonus if target is not met
}

// Function to calculate tax
double calculateTax(double grossSalary) {
    const double TAX_RATE = 0.2; // 20% tax rate
    return grossSalary * TAX_RATE;
}

int main() {
    double baseSalary, sales, target;
    
    // Input base salary, sales, and target
    printf("Enter base salary: ");
    scanf("%lf", &baseSalary);
    printf("Enter sales amount: ");
    scanf("%lf", &sales);
    printf("Enter sales target: ");
    scanf("%lf", &target);
    
    // Calculate bonus
    double bonus = calculateBonus(sales, target);
    
    // Calculate gross salary (base salary + bonus)
    double grossSalary = baseSalary + bonus;
    
    // Calculate tax
    double tax = calculateTax(grossSalary);
    
    // Calculate net earnings
    double netEarnings = grossSalary - tax;
    
    // Display results
    printf("\nSalary Breakdown:\n");
    printf("Base Salary: $%.2f\n", baseSalary);
    printf("Bonus: $%.2f\n", bonus);
    printf("Gross Salary: $%.2f\n", grossSalary);
    printf("Tax Deducted: $%.2f\n", tax);
    printf("Net Earnings: $%.2f\n", netEarnings);
    
    return 0;
}

/* Explanation:
1. We define two functions: calculateBonus() and calculateTax().
2. calculateBonus() checks if sales meet or exceed the target. If so, it returns a 10% bonus.
3. calculateTax() applies a 20% tax rate to the gross salary.
4. In main(), we input the base salary, sales amount, and sales target.
5. We calculate the bonus using the calculateBonus() function.
6. Gross salary is calculated by adding the base salary and bonus.
7. Tax is calculated using the calculateTax() function.
8. Net earnings are determined by subtracting the tax from the gross salary.
9. Finally, we display a breakdown of the salary components.
*/
