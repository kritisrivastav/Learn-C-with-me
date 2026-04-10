#ifndef UTILITY_H
#define UTILITY_H


#include <vector>
#include <iostream>
#include <Person.h>
#include <People.h>
#include <functional>

void print_if(std::vector<int>, bool (*predicate)(int));

void testPerson();

void filter_vector(const std::vector<int>&, std::function<bool(int)>);

void sorting_function();

void display(const std::vector<Person>& );

void stateful_test1();

void stateful_test2();

void stateful_test3();

void stateful_test4();

void stateful_test5();

void stateful_test6();

void stateful_test7();

void stateful_test8();

void checkTrianglesEquivalent();

void test1();

void test2();

#endif // UTILITY_H
