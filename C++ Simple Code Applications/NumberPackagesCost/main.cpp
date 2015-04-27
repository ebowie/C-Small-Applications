#include <iostream>

using namespace std;

int main()
{
    float discount;
    int numberPackages;
    float originalCost;
    float discountAmount;
    float discountCost;
    float taxAmount;
    float finalCost;
    const double PACKAGE_RETAIL = 100;
    const double SALES_TAX = .06;

    cout << "Enter the number of packages purchased: ";
    cin >> numberPackages;

    if (numberPackages >= 100)
    {
        discount = .5;
    }
    else
    {
        if (numberPackages >= 50)
        {
            discount = .4;
        }
        else
        {
            if (numberPackages >= 20)
            {
                discount = .3;
            }
            else
            {
                if (numberPackages >= 10)
                {
                    discount = .2;
                }
                else
                {
                    discount = 0;
                }
            }
        }
    }

    originalCost = numberPackages * PACKAGE_RETAIL;
    discountAmount = discount * originalCost;
    discountCost = originalCost - discountAmount;
    taxAmount = discountCost * SALES_TAX;
    finalCost = discountCost + taxAmount;

    cout << "Number of Packages: " << numberPackages << endl;
    cout << "Original Cost: $" << originalCost << endl;
    cout << "Discount Amount: $" << discountAmount << endl;
    cout << "Cost after Discount: $" << discountCost << endl;
    cout << "Sales Tax: $" << taxAmount << endl;
    cout << "Final Cost: $" << finalCost << endl;

    return 0;
}
