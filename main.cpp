#include <iostream>
using namespace std;
int main() {
    int area1,area2,area3,area4,area5;

    int veg;

    cout << "Ron's Farm\n";

    //farm Area in acres
    cout << "Enter farm area\n";
    cout << "Farm_Area1: \n";
    cin >> area1;
    cout << "Farm_Area2: \n";
    cin >> area2;
    cout << "Farm_Area3: \n";
    cin >> area3;
    cout << "Farm_Area4: \n";
    cin >> area4;
    cout << "Farm_Area5: \n";
    cin >> area5;
    //total farm area
    int total_area = area1+area2+area3+area4+area5;
    cout << total_area << endl;
    cout << "The total farm area is " << total_area <<" acres" << endl;
    //vegetable type either one or two
    cout << "Enter vegetable type (1 OR 2): \n";
    cin >> veg;
    if (veg==2){
        cout << "You have 60% portion of farmland \n";

    } else{
        cout << "You have 40% portion of farmland\n";

    }
    //total cost
    double seed_cost;
    cout << "Enter seed cost\n";
    cin >> seed_cost;
    cout << "Seed cost is $ " << seed_cost <<".00" << endl;
    double plantation_cost;
    cout << "Enter plantation cost\n";
    cin >> plantation_cost;
    cout << "plantation cost is $ " << plantation_cost <<".00" << endl;
    double fertilizing_cost;
    cout << "Enter fertilizing cost\n";
    cin >> fertilizing_cost;
    cout << "fertilizing cost is $ " << fertilizing_cost <<".00" << endl;
    double labour_cost;
    cout << "Enter labour cost\n";
    cin >> labour_cost;
    cout << "labour cost is $ " << labour_cost <<".00" << endl;
    double Total_cost = seed_cost+plantation_cost+fertilizing_cost+labour_cost;
    cout << Total_cost <<endl;
    cout << "Total cost is $ " << Total_cost << endl;
    //selling price per acre
    double selling_price;
    cout << "Enter selling price per acre\n";
    cin >> selling_price;
    cout << "selling price per acre is $ " << selling_price << endl;
    //Total revenue
    double Total_revenue = Total_cost  * selling_price;
    cout << Total_revenue << endl;
    cout << "Your total revenue is $ " << Total_revenue << endl;
    //profit and loss

    double cost_price;

    cout << "Enter cost price of vegetable\n";
    cin >> cost_price;
    cout <<"$" << cost_price << endl;
    double profit = selling_price - cost_price;
    double loss = cost_price - selling_price;
    if (selling_price>=cost_price){
        cout << "profit\n";
        cout << "$" <<  profit << endl;
    } else{
        cout << "loss\n";
        cout <<"$" << loss << endl;
    }


    return 0;
}