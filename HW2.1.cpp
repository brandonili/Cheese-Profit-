#include <iostream>

using namespace std;

int main()
{
    //displaying welcome message
    cout << "***************************************************************" << endl;
    cout << "*************** Calculate cheese cost and profit **************" << endl;
    cout << "***************************************************************" << endl;
    cout << "\n" << endl;

    //declaring constants
    // cont - contatiner of cheese 
    // cost - cost per contatiner
    // profit - profit per contatiner 
    const float cont = 2.76, cost = 4.12, profit = 1.45;
    int cheese, container;
    float c, p;

    //asking user to enter vaules 
    cout << "Please Enter the total number of kilograms of cheese produced: ";
    cin >> cheese;

    // calculating the about of contatiners needed
    container = cheese / cont + 1;
    cout << "The number of containers to hold the cheese is: \t\t" << container << endl;

    //calculate profit and cost
    c = container * cost;
    p = container * profit;

    //displaying the result of cost and profit
    cout << "The cost for producing " << container << " container(s) of cheese is:\t$\t" << c << endl;
    cout << "The proft for producing " << container << " container(s) of cheese is:\t$\t" << p << endl;
}