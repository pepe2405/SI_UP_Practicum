#include <iostream>

int main()
{
    //Wrong examples
    /*int array1[];
    int array2[2] = { 1 ,2 ,3 };
    int[10] array3;*/

    //Aggregate initialization and sizeof()
    std::cout << "1." << std::endl << std::endl;
    int array[10] = {};
    std::cout << "Sizeof(array): " << sizeof(array) << std::endl; // 40
    std::cout << "Sizeof(int): " << sizeof(int) << std::endl;   // 4
    std::cout << "Sizeof(array[0]: "<< sizeof(array[0]) << std::endl;  // 4
    std::cout << "Sizeof(array) / sizeof(int): "<< sizeof(array) / sizeof(int) << std::endl; // 10
    std::cout << "Sizeof(array) / sizeof(array[0]): " << sizeof(array) / sizeof(array[0]) << std::endl << std::endl; // 10

    //Array iteration
    std::cout << "2. Array iteration" << std::endl;
    int arr[5];
    for (int i = 0; i < 5; i++) 
    {
        std::cin >> arr[i];
    }
    for (int i = 0; i < 5; i++) 
    {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl << std::endl;

    //Copying an array
    std::cout << "3. Copying an array" << std::endl;
    int arr1[5] = { 1, 2, 3, 4, 5 };
    int arr2[5];

    for (int i = 0; i < 5; i++) 
    {
        arr2[i] = arr1[i];
    }
    for (int i = 0; i < 5; i++)
    {
        std::cout << arr2[i] << " ";
    }
    std::cout << std::endl << std::endl;

    //Are arrays equal
    std::cout << "4. Are arrays equal" << std::endl;
    int first[5] = { 1, 2, 3, 4, 5 };
    int second[5] = { 1, 2, 7, 4, 5 };
    bool equal = true;
    for (int i = 0; i < 5; i++) {
        if (first[i] != second[i]) {
            equal = false;
            break;
        }
    }
    std::cout << "Is equal: " << equal;
}
