#include <stdio.h>

int main() {
    int age, income, credit_score, employment_years, existing_loans;

    printf("=== Advanced Loan Approval System ===\n");
    printf("Enter Age: ");
    scanf("%d", &age);
    printf("Enter annual Income: ");
    scanf("%d", &income);
    printf("Enter Credit Score: ");
    scanf("%d", &credit_score);
    printf("Enter years of employment: ");
    scanf("%d", &employment_years);
    printf("Enter number of existing loans: ");
    scanf("%d", &existing_loans);

    // Complex business rules
    int is_employed = (employment_years > 0);
    int good_credit = (credit_score >= 700);
    int excellent_credit = (credit_score >= 800);
    int high_income = (income >= 75000);
    int moderate_income = (income >= 35000);
    int age_ok = (age >= 21 && age <= 70);
    int low_debt_burden = (existing_loans <= 2);

    //Tier 1: Premium approval (most favorable terms)
    int tier1_approval = excellent_credit && high_income && age_ok && is_employed;

    //Tier 2: Standard approval
    int tier2_approval = good_credit && moderate_income && age_ok && is_employed && low_debt_burden;

    //Tier 3: Special cases with conditions
    int tier3_approval = (good_credit && high_income && !age_ok && is_employed) || // Age exception
                            (excellent_credit && moderate_income && !low_debt_burden && is_employed) || //debt exception
                            (good_credit && high_income && age_ok && !is_employed); //employment exception

    // Automatic rejection conditions
    int auto_reject = (credit_score < 550) ||
                        (income < 20000) ||
                        (existing_loans >= 5) ||
                        (age < 18) ||
                        (!is_employed && income < 40000);
                      
    //Final decision logic
    printf("\n=== APPROVAL ANALYTICS ===\n");
    printf("Tier 1 (Premium): %s\n", tier1_approval ? "QUALIFIED" : "NOT QUALIFIED");
    printf("Tier 2 (Standard): %s\n", tier2_approval ? "QUALIFIED" : "NOT QUALIFIED");
    printf("Tier3 (Special Cases): %s\n", tier3_approval ? "QUALIFIED" : "NOT QUALIFIED");
    printf("Auto-Reject Conditions: %s\n", auto_reject ? "TRIGGERED" : "NOT TRIGGERED");

    printf("\n===FINAL DECISION===\n");
    if (auto_reject) {
        printf("Declined - Does not meet basic requirements\n");
    } else if (tier1_approval) {
        printf("APPROVED - Premium Tier (Best rates)\n");
    } else if (tier2_approval) {
        printf("APPROVED - Standard Tier\n");
    } else if (tier3_approval){
        printf("APPROVED - Special Case (Higher rates)\n");
    } else {
        printf("DECLINED - Does not meet any approval criteria");
    }
return 0;
}