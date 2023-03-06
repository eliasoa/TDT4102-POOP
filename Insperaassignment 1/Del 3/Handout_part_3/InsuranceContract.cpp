#include "InsuranceContract.h"
#include "Utilities.h"

InsuranceContract::InsuranceContract(string holderName, InsuranceType insType, int value, int id, string insText)
    : holderName{holderName}, insType{insType}, value{value}, id{id}, insuranceText{insText}
{
    if (insuranceText == "Text missing!")
    {
        // BEGIN: 2c2

        // Write your answer to assignment 2c2 here, between the // BEGIN: 2c2
        // and // END: 2c2 comments. Remove the code that is already there.

        // END: 2c2
    }
}

string insuranceTypeToString(InsuranceType t)
{
    // BEGIN: 1a

    // Write your answer to assignment 1a here, between the // BEGIN: 1a
    // and // END: 1a comments. Remove the code that is already there.
    int insuranceTypeInt = static_cast<int>(t);
    string insuranceTypeString;
    
    switch (insuranceTypeInt)
    {
    case 0:
        insuranceTypeString = "Car";
        break;
    
    case 1:
        insuranceTypeString = "Contents";
        break;
    case 2:
        insuranceTypeString = "Travel";
        break;
    }
    return insuranceTypeString;
    // END: 1a
}   

ostream &operator<<(ostream &os, InsuranceContract obj)
{
    os << "Holder: " << obj.getHolder() << '\n';
    os << "Insurance type: " << insuranceTypeToString(obj.getInsuranceType()) << '\n';
    os << "Id: " << to_string(obj.getId()) << '\n';
    os << "Value: " << to_string(obj.getValue()) << '\n';
    os << "Insurance text:\n"
       << obj.getInsuranceText() << '\n';
    return os;
}