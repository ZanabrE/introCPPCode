//This program will implement solutions to all of the problems.
//Separate functions are created for each problem.
//Ernesto L Zanabria 09/13/2020
#include <iostream>
using namespace std;

void problem1()
{   
    //This program will calculates each item 
    //price, subtotal, tax, and final total.
    //Variables definitions with data type
    int noteBook;    
    int pen;
    int eraser;
    int totalCost;
    double salesTax;
    double amountSpend;

    //Variables assigned with values.
    noteBook = 15;
    pen = 10;
    eraser = 3;
    salesTax = 0.0625;

    //Calculate the cost and total.
    totalCost = noteBook + pen + eraser;
    salesTax = totalCost * salesTax;
    amountSpend = totalCost + salesTax;

    //Display each items price, the subtotal, calculated tax, and final total.
    cout << "-----------------------------------------------------\n";
    cout << "Problem 1 - List of prices of every item from the store\n";
    cout << "-----------------------------------------------------\n";
    cout << "The notebook price at the store is: $" << noteBook << "\n";
    cout << "The pen price at the store is: $" << pen << "\n";
    cout << "The eraser price at the store is: $" << eraser << "\n";
    cout << "-----------------------------------------------------\n";
    cout << "The total cost of the items is: $" << totalCost << "\n";
    cout << "The sales tax of the item is: $" << salesTax << "\n";
    cout << "The final cost of the items is: $" << amountSpend << "\n";
    cout << "\n";

}

void problem2()
{
    //This program will calculate the MPG driven.
    //Variables definitions with data type.
    float gallonsUsed,
          milesDriven,
          MPG;

    //Displaying a header intro.
    cout << "----------------------------------------------------\n";
    cout << "Problem 2 - Miles per Gallons Driven and Calculated\n";
    cout << "----------------------------------------------------\n";

    //Get the number of gallons used.
    cout << "Please enter the gallons of gasoline you car can hold:\n";
    cin >> gallonsUsed;

    //Get the number of miles drove.
    cout << "Please enter the miles that you will be traveling:\n";
    cin >> milesDriven;

    //Calculate the MPG.
    MPG = milesDriven / gallonsUsed;

    //Display the miles per gallon drove.
    cout << "You will be driving " << MPG << " miles per gallon.\n";
    cout << "\n";

}

void problem3()
{   
    //This program will calculate the revenue, commission,
    //and profit selling your product in the Apple's store.
    //Variables definition with data type and assigned values.
    int productCost;
    int productSold;
    double commission = 0.3;
    double totalRevenue;
    double commissionCollect;
    double totalProfit;

    //Display the revenue, commission collect, and profit earned.
    cout << "-----------------------------------------------------\n";
    cout << "Problem 3 - Apple's app store product sold\n";
    cout << "-----------------------------------------------------\n";
    //Get the number of product cost.
    cout << "How much is the product cost $: \n";
    cin >> productCost;

    //Get the number of product sold.
    cout << "How many products were sold $: \n";
    cin >> productSold;
    cout << "-----------------------------------------------------\n";

    //Calculations for revenue, commission, and profit.
    totalRevenue = productCost + productSold;
    commissionCollect = totalRevenue * commission;
    totalProfit = totalRevenue - commissionCollect;

   //Display the revenue, commission collect, and profit earned. 
    cout << "The total revenue made from the sell of my product is: $" << totalRevenue << "\n";
    cout << "The total amount of money Apple will collect from commissions is: $" << commissionCollect << "\n";
    cout << "The amount of profit made selling my product at Apple's app store is: $" << totalProfit << "\n";
    cout << "\n";

}

void problem4()
{
    //This program will calculate the difference in time
    //of an old CPU and new CPU.
    //Variables definition with data type and assigned value.
    double taskPerWeek;
    double OldCPU;
    double NewCPU;
    double newCPU = 0.17;
    double timeOldCPU;
    double timeNewCPU;
    double timeSaved;
    double differenceInTime;


    //Displaying a header intro.
    cout << "-----------------------------------------------------\n";
    cout << "Problem 4 - Information of a new CPU vs an old CPU\n";
    cout << "-----------------------------------------------------\n";

    //Get the time used of the old CPU.
    cout << "How much time will you spend on your old CPU for the task:\n";
    cin >> timeOldCPU;

    //Get the time used of the new CPU.
    cout << "How much time will you spend on your new CPU for the task:\n";
    cin >> timeNewCPU;

    //Get the day of the week you pick for the task.
    cout << "How many times per week will you run this task:\n";
    cin >> taskPerWeek;

    //Calculations of time used.
    timeSaved = (timeNewCPU * 60) * newCPU;
    OldCPU = timeOldCPU * 60;
    NewCPU = timeNewCPU * 60;
    differenceInTime = (OldCPU - NewCPU) * 60 * 52;

    //Display the information of the new CPU and old CPU.
    cout << "The amount of time saved each week using the new CPU is: " << timeSaved << "\n";
    cout << "The total number of hours of CPU time using the old CPU is: " << OldCPU << "\n";
    cout << "The total number of hours of CPU time using the new CPU is: " << NewCPU << "\n";
    cout << "The difference in time between the old CPU and the new CPU for the year is: " << differenceInTime << " minutes.\n";

}

int main()
{
    problem1();
    problem2();
    problem3();
    problem4();

    return 0;
}
