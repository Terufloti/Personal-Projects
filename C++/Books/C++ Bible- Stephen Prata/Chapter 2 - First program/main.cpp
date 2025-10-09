#include <iostream>

using std::cout, std::cin, std::endl;

// Function 1 - print author name
void author_func();
// Function 2 - program takes sea miles and returns it in meters
double mil_to_meters(double);
// Function 3 - tic tac toe voids
void tic_tac();
void toe();
// Function 4 - years to month age calculator
void years_to_months();
// Function 5 - celsius to fahrenheit degrees calculator
double celsius_to_fahrenheit(double);
// Function 6 - light years to astronomical units calculator
double lightYears_to_atroUnit(double);
// Function 7 - time
void time_print(int, int);

int main(){
    // Test of function 1
    //author_func();

    // Test of function 2 
    /*
    double Sea_miles = 14;
    double meters = mil_to_meters(Sea_miles);
    cout<<Sea_miles<<" Sea Miles is "<<meters<<" meters."<<endl;
    */
    // Test of function 3
    //tic_tac(); tic_tac();
    //toe(); toe();

    // Test of function 4
    //years_to_months();

    // Test of function 5
    /*
    double celsius;
    cout<<"Type temperature in Celsius degrees: ";
    cin>>celsius;
    cout<<celsius<<" Celcius degrees are "<<celsius_to_fahrenheit(celsius) <<" Fahrenheit degrees."<<endl;
    */

    // Test of function 6
    /*
    double lightYears;
    cout<<"Type in light years: ";
    cin>>lightYears;
    cout<<lightYears<<" light years are " <<lightYears_to_atroUnit(lightYears)<<" astronomical units."<<endl;
    */

    // Test of function 7
    
    int hours, minutes;
    cout<<"Type hours: ";
    cin>>hours;
    cout<<"Type minutes: ";
    cin>>minutes;
    time_print(hours, minutes);
    

    // Test of function 8

    
    cout<<endl<<endl;
    return 0;
}

void author_func(){
    cout<<"Stephen Prata"<<endl;
}

double mil_to_meters(double miles){
    return miles * 1852;
}

void tic_tac(){
    cout<<"Tic tac."<<endl;
}
void toe() {
    cout <<"Toe."<<endl;
}

void years_to_months(){
    double y;
    cout<<"Type your age in years: ";
    cin>>y;
    cout<<"Your age in months is "<<y*12<<"."<<endl;
}

double celsius_to_fahrenheit(double celsius){
    return celsius * 1.8 + 32.0;
}

double lightYears_to_atroUnit(double lightYears) {
    return lightYears * 63240;
}

void time_print(int h, int m) {
    cout<<"Time: "<<h<<":"<<m<<endl;
}