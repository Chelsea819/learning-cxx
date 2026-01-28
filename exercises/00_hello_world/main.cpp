#include "../exercise.h"
// #include <format>
// READ: std streams <https://zh.cppreference.com/w/cpp/io/c/std_streams>
// READ: 流修饰符 <https://zh.cppreference.com/w/cpp/io/manip>
// READ: format in cxx20 <https://zh.cppreference.com/w/cpp/utility/format/format>

int main(int argc, char **argv) {
    // TODO: 在控制台输出 "Hello, InfiniTensor!" 并换行
    std::cout << "Hello, InfiniTensor!" << std::endl;
    
    // printf
    printf("Hello, InfiniTensor!\n");
    
    // std::boolalpha
    std::cout << true << " " << false << std::endl;
    std::cout << std::boolalpha << true << " " << false << std::endl;
    std::cout << true << " " << false << std::endl;
    std::cout << std::noboolalpha << true << " " << false << std::endl;
    
    // format
    // std::cout   << std::format("Hello, {}!", "InfiniTensor") << std::endl
    //             << std::format("{} + {} = {}", 23, 19, 23 + 19) << std::endl;
    
    // cout & cerr
    /*
    xmake run learn 0 > log.txt         cout流重定向
    xmake run learn 0 > log.txt 2>&1    把 cerr流 重定向到 cout 流，然后再重定向 cout 流 
     */
    std::cerr << "Hello!" << std::endl;

    return 0;
}
