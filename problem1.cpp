 #include <iostream>

int calculateCost(int start_hour, int end_hour) {
    int amount = 0;
    if ((start_hour <0 || start_hour >23) || (end_hour <1 || end_hour>24)) {
        return -1;
    } else {
        for (int hour=start_hour; hour< end_hour; hour++){
            if ((hour >= 0 && hour < 7) || (hour >=21 && hour< 24)) {
                amount += 500;
            } else if ((hour >= 7 && hour < 14) || (hour >=19 && hour< 21)) {
                amount += 1000;
            } else if ((hour >= 14 && hour< 19)) {
                amount += 1500;
            }
        }
    }
    return amount;
}

int main() {
    int starting_hour;
    int ending_hour;
    // Write C++ code here
    std::cout << "Enter starting hour: ";
    std::cin >> starting_hour;
    std::cout << "Enter ending hour: ";
    std::cin>>ending_hour;
    
    int amount = calculateCost(starting_hour, ending_hour);
    if (amount == -1) {
        std::cout<<"The hours you entered are incorrect! The hours should not exceed a day";
    } else {
    std::cout <<"The amount to pay: "<<amount;
    }
    

    return 0;
}