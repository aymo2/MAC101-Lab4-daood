#include <iostream>
using namespace std;

int main(){
    int street;
    string ans;
    cout << "Welcome to the Queens E Train station\nPlease Enter stop number and I will let you know the area it is! :)\n(Court Square --> Jamacia Center)\n0-19" << endl;
    cin >> street;
    if (street == 0) {
        cout << "You must be in the Court Square 23rd St Stop" << endl;
    }
    if (street == 1) {
        cout << "You must be in Queens Plaza" << endl;
    } 
    if (street == 2){
    cout << "You must be at the 36th St Northern Blvd stop" << endl;
    }
    if (street == 3) {
        cout << "You must be at Steinway Northern Blvd" << endl;
    }
    if (street == 4) {
        cout << "You must be at 46th St Northern Blvd" << endl;
    }
    if (street == 5){
        cout << "You must be at Northern Blvd 54th St" << endl;
    }
    if (street == 6) {
        cout << "You must be at 65th St Northern Blvd" << endl;
    }
    if (street == 7){
        cout << "You must be at Jackson heights Rosevelt Ave" << endl;
    }
    if (street == 8){
        cout << "You must be at Elmhurst Ave Broadway" << endl;
    }
    if (street == 9){
        cout << "You must be at Grand Ave-Newton Broadway" << endl;
    }
    if (street == 10){
        cout << "You must be at Woodhaven Blvd" << endl;
    }
    if (street == 11){
        cout << "You must be at 63 Dr-Rego Park" << endl;
    }
    if (street == 12){
        cout << "You must be at 67th Ave Queens Blvd" << endl;
    }
    if (street == 13){
        cout << "You must be at Forest Hills-71 Ave" << endl;
    }
    if (street == 14){
        cout << "You must be at 75th Ave Queens Blvd" << endl;
    }
     if (street == 15){
        cout << "You must be at Kew Gardens-Union Turnpike" << endl;
    }
     if (street == 16){
        cout << "You must be at Briarwood-Van Wyck Blvd" << endl;
    }
     if (street == 17){
        cout << "You must be at Jamaica-Van Wyck" << endl;
    }
     if (street == 18){
        cout << "You must be at Sutphin Blvd-Archer Av-JFK Airport" << endl;
    }
     if (street == 19){
        cout << "You must be at Jamaica Center-Parsons/Archer\n(This is the Last stop!!!)" << endl;
    }
    if (street > 19){
        cout << "You must have misstyped there are only 19 stops in Queens\nPlease Try again!" << endl;
    }
    if (street <= 19){
        cout << "Would you like to know the neighborhood the stop is in + a fun fact? (y/n)" << endl;
        cin >> ans;
        if (ans == "y" || ans== "Y") {
            if (street <= 1){
        cout << "You are in Long Island City\nLIC used to be a major industrial area full of factories and warehouses. Today, it's known for its skyscrapers, art galleries, and amazing Manhattan skyline views" << endl;
        }
        if (street <= 4 && street > 1 ){
        cout << "You are in Astoria\nAstoria is famous for its large Greek-American community and has some of the best Greek restaurants and bakeries in NYC." << endl;
        }
        if (street <= 6 && street > 4 ){
        cout << "You are in Woodside\nWoodside is nicknamed Little Manila because of its large Filipino community, especially around Roosevelt Avenue." << endl;
        }
         if (street <= 7 && street > 6 ){
        cout << "You are in Jackson Heights\nJackson Heights is one of NYC's most culturally diverse neighborhoods, with food, shops, and communities representing countries from all over the world." << endl;
        }
        if (street <= 9 && street > 7 ){
        cout << "You are in Elmhurst\nElmhurst was originally called Newtown and dates back to the Dutch colonial era in the 1600s." << endl;
        }
         if (street <= 11 && street > 9 ){
        cout << "You are in Rego Park\nThe name 'Rego' comes from Real Good Construction Company, the company that developed much of the neighborhood in the 1920s." << endl;
        }
        if (street <= 14 && street > 11 ){
        cout << "You are in Forest Hills\nForest Hills used to host the US Open tennis tournament at the West Side Tennis Club before it moved to Flushing Meadows in 1978." << endl;
        }
        if (street <= 15 && street > 14 ){
        cout << "You are in Kew Gardens\nKew Gardens was named after the famous Royal Botanic Gardens at Kew in London, England." << endl;
        }
        if (street <= 16 && street > 15 ){
        cout << "You are in Briarwood\nBriarwood was once promoted as the 'Gateway to Queens' because of its location near major roads and transit connections." << endl;
        }
        if (street <= 19 && street > 16 ){
        cout << "You are in Jamacia\nJamaica is one of NYC's biggest transportation hubs, connecting the subway, Long Island Rail Road, and JFK Airport AirTrain. Its name comes from the Indigenous Yameco people, not the Caribbean island." << endl;
        }

    }
    if (ans == "n" || ans== "N"){
    cout << "Alright" << endl;
    }
    }
    return 0;
    
}
