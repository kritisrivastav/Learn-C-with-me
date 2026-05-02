#ifndef UTILITY_H
#define UTILITY_H


#include <vector>
#include <iostream>
#include <memory>
#include <account.h>
#include <Player.h>
#include <Person.h>
#include <People.h>
#include <overridebase.h>
#include <Shallowcopy.h>
#include <deepcopy.h>
#include <functional>
#include <compiletimepoly.h>
#include <Passwordvalidator.h>
#include <constobjectdemo.h>

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

void test3();

void test4();

bool in_between(const std::vector<int>& vecObj, int startValue, int endValue);

void test5();

void test6();

void displayPlayer(Player p);

void test7();

void displayPlayerCharge(Player);

void setPlayerCharge(int);

void testShallowCopyProblem();

void testDeepCopy();

void testConstForClass();

void compileTimePolymorphism();

void virtualFunctions();

void overrideDemo();

#endif // UTILITY_H
