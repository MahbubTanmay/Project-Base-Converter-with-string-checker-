#include <iostream>
#include <bitset> 
#include <string>

using namespace std;
using std::string;


int main(){

string str;
int type;

cout << "Enter A Number: " <<endl;
cin >>str;

Retake:
cout <<"Select The type of your number.Input An Option: "<<endl;
cout <<"1.Decimal"<<endl;
cout <<"2.Binary"<<endl;
cout <<"3.Hexadecimal"<<endl;
cout <<"4.Octal"<<endl;
cin >>type;


string newStr;
int number;


for (int i=0 ; i<str.length() ;i++ ){

if (str.at(i) >= '0' && str.at(i) <= '9'){

newStr = newStr + str.at(i);

}

else {

cout << "Your Number Has " <<str.at(i) <<" Character at Position "<<i+1 <<" So we deleted that"<<endl;

}

} 



if (type == 1){

number = stoi(newStr);

}
else if(type == 2){



 number = stoi(newStr, nullptr, 2);

}
else if(type == 3){


number = stoi(newStr, nullptr, 16);

}
else if(type == 4){
number = stoi(newStr, nullptr, 8);

}
else {
cout <<"Option Should Be Among 1 to 4"<<endl;

goto Retake;
}

cout <<"After Processing Your Number Is : "<< newStr <<endl;



cout <<"To Binary Is: " <<bitset<8>(number)<<endl;   
cout <<"To Decimal Is: " <<bitset<8>(number).to_ulong()<<endl;
cout<<"The HexaDecimal Is: "<<hex << number <<endl;
cout <<"To Octal Is: " <<oct<<number<<endl;

    return 0;
}
