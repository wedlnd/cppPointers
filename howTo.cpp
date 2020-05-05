#include <iostream>

int main() {
  std::cout << "Pointer Test Time!\n\n";

  std::cout<< std::endl;

  std::cout<< "Let's make two variables with no values, firstValue and secondValue\n\n";
  int firstValue, secondValue;

  std::cout<< "Let's also make a pointer called myPointer. When initiating pointers in c++, place a * before the variable name\n\n";
  int * myPointer;

  std::cout<< "Let's check the value of firstValue before doing anything:\n";
  std::cout << firstValue << std::endl;
	
  std::cout<< std::endl;

  std::cout<< "Since pointers POINT at the ADDRESS of a variable, we need to bring up the variables address. We do this by putting the &   sign before the variable!\n";
  myPointer = &firstValue;

  std::cout<< std::endl;

  std::cout<< "Now, myPointer is pointing at the address of firstVariable. But, let's check the value of firstValue:\n";
  std::cout << firstValue << std::endl;

  std::cout<< std::endl;

  std::cout<< "The value is 0 because we haven't assigned any value to myPointer yet. It is pointing at firstValue, but there is no data to showcase!\n";

  std::cout<< std::endl;


  std::cout<< "Let's give the pointer a value to send to firstValue. Add a value of 10 to myPointer.\n";
  *myPointer = 10;

  std::cout<< std::endl;

  std::cout<< "Now with 10 added to myPointer, lets recheck the value of firstValue:\n";
  std::cout << firstValue << std::endl;

  std::cout<< std::endl;

  std::cout<< "This happened because myPointer is pointing its' value at the address of firstValue. This process assigns any value from myPointer, which is now 10, to the address\n";

  std::cout<< std::endl;

  std::cout<< "Now that myPointer has pointed its' value to firstValue, let's look at secondValue\n";
  std::cout << firstValue << std::endl;


  std::cout<< "First we can check the value of secondValue:\n";
  std::cout<< secondValue << std::endl;

  std::cout<< std::endl;

  std::cout<< "Let's now point myPointer at the address of secondValue\n";
  myPointer = &secondValue;

  std::cout<< std::endl;

  std::cout<< "Great, let's check the value of secondValue now:\n";
  std::cout<< secondValue << std::endl;

  std::cout<< std::endl;

  std::cout<< "Why is it still 0? We pointed myPointer to the address of secondValue!!!\n This is because we used the * sign on myPointer. The value that we gave to myPointer is specific only to the address it points at, which is firstValue. Right now, myPointer has no value to share with secondValue\n";

  std::cout<< std::endl;

  std::cout<< "Now that we know it has no value, let's add some value to the pointer, which is set to secondValue's address\n";
  *myPointer = 20;

  std::cout<< std::endl;

  std::cout<< "With 20 added to the pointer, let's recheck the value of secondValue:\n";
  std::cout<< secondValue << std::endl;

  std::cout<< std::endl;

  std::cout<< "Notice that the value is different than firstValue, but both values came from myPointer\n";

  std::cout<< std::endl;

  std::cout<< "So let's recheck firstValue to see what it did after myPointer changed value to 20:\n";
  std::cout<< firstValue << std::endl;

  std::cout<< std::endl;

  std::cout<< "The value of firstValue remained at 10, unchanged by the new value passed through myPointer.\nThis happens because the value of myPointer when it was pointed at firstValue was 10, which was specific only to the address of firstValue. When we changed myPointer to 20, it was pointing at the address of secondValue.\nA POINTERS VALUE IS SPECIFIC ONLY TO THE VARIABLE IT POINTS AT IN THAT MOMENT. You have to tell the pointer to change to a new address.\nIt changes because we added the * before the myPointer variable when we assigned it a new value. This DEVALUE operator resets the value of the pointer so that it can be reused for a different variable!\n\nYAY POINTERS!\n";
}
