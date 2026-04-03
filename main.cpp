#include <iostream>
#include <functionpointers.h>
#include <FunctionObject.h>
#include <Multiplier.h>
#include <vector>
#include <algorithm>

using namespace std;

void print_if(std::vector<int> nums, bool (*predicate)(int))
{
    //This function takes a vector and a function pointer as arguments

}

int main()
{
    //------------Function Pointers-------------
    //First approach
    FunctionPointers fpn = FunctionPointers(2, 3);//Here i am creating an object
    int(FunctionPointers::*ptr)();//::* means ptr is a function pointer to the member of this class
    ptr = &FunctionPointers::add;//Give me the address of the add function
    int result = (fpn.*ptr)();//*ptr has the function address. Now dereferencing it will give me the function.Calling the function
    //with the object and () is required for function call
    std::cout<<"The result is"<<result<<std::endl;

    //Second approach
    int(*ptrNew)(int, int);
    ptrNew = &FunctionPointers::substract;
    int result1 = (*ptrNew)(3, 5);
    std::cout<<"The resultnew is"<<result1<<std::endl;


    //-----------Function objects------------

    FunctionObject func;
    int resNew = func(2,5);
    std::cout<<"The result of the function object is"<<resNew<<std::endl;

    //So before introducing lambda expressions, if we wanted to write algorithms for STL,
    //we needed function objects
    //We are going to see a demo for it

    std::vector<int> vecObj{1, 2, 3, 4, 5};
    std::vector<int> resultObj(vecObj.size());
    Multiplier mult{10};
    std::transform(vecObj.begin(), vecObj.end(), resultObj.begin(), mult);
    for(const auto& x : resultObj)
    {
        std::cout<<x<<"\t";
    }
    std::cout<<"\n";

    //Now let us explore lambda expressions.
    //When we create a lambda expression, the compiler creates an unnamed class
    //which overloads the function call operator

    //This applies function object to each entry in the vector
    std::for_each(vecObj.begin(), vecObj.end(), [](int x){std::cout<<x<<"\t";});
    std::cout<<"\n";

    std::transform(vecObj.begin(), vecObj.end(), vecObj.begin(), [](int x){return x * x;});

    std::for_each(vecObj.begin(), vecObj.end(), [](int x){std::cout<<x<<"\t";});

    std::cout<<"\n";
    auto l = [](int x, int y){return x + y;};
    std::cout<<"The next result is"<<l(10, 20);

    //Lets see another demo of stateless lambda expressions.
    //stateless lambda expressions know nothing about the environment in which it is executed

    const int n{3};
    int numbers[n] = {10,20,30};
    auto sum = [](int x, int vec[]){
        int valueResultant{};
        for(int i = 0; i < x; i++)
        {
            valueResultant += vec[i];
        }
        return valueResultant;
    };
    std::cout<<"\n";
    std::cout<<"The array sum is"<<sum(n, numbers);
    return 0;
}
