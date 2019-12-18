#include <iostream>
#include <vector>
#include <string>
#include <list>
#include <deque>
#include <utility>
#include <functional>
#include <memory>
#include <cstdint>
#include <cinttypes>
#include <filesystem>
#include <array>
#include <variant>
#include <optional>

#define CONVERT_TO_STRING(SomeText) #SomeText
#define PRINT_sizeof(type) printSizeOf<type>(#type) 

void Stop()
{
  std::cout << "Press enter 2 times " << std::endl;
  std::cin.ignore();
  std::cin.get();
}

template
<class T>
void printSizeOf(const char* typeName)
{
  std::cout << "size of : " << typeName << " = [" << sizeof(T) << "] \n";
}

int main()
{
  printSizeOf<char>(CONVERT_TO_STRING(char));
  printSizeOf<wchar_t>(CONVERT_TO_STRING(wchar_t));
  printSizeOf<short>("short");
  printSizeOf<int>("int");
  printSizeOf<long>("long");
  printSizeOf<long long >("long long");
  printSizeOf<float>("float");
  printSizeOf<double>("double");
  printSizeOf<void *>("void *");
  std::cout << '\n';

  PRINT_sizeof(int_least8_t);
  PRINT_sizeof(int_least16_t);
  PRINT_sizeof(int_least32_t);
  PRINT_sizeof(int_least64_t);
  std::cout << '\n';

  PRINT_sizeof(int8_t);
  PRINT_sizeof(int16_t);
  PRINT_sizeof(int32_t);
  PRINT_sizeof(int64_t);
  std::cout << '\n';

  PRINT_sizeof(int_fast8_t);
  PRINT_sizeof(int_fast16_t);
  PRINT_sizeof(int_fast32_t);
  PRINT_sizeof(int_fast64_t);
  std::cout << '\n';

  PRINT_sizeof(uint_least8_t);
  PRINT_sizeof(uint_least16_t);
  PRINT_sizeof(uint_least32_t);
  PRINT_sizeof(uint_least64_t);
  std::cout << '\n';

  PRINT_sizeof(uint8_t);
  PRINT_sizeof(uint16_t);
  PRINT_sizeof(uint32_t);
  PRINT_sizeof(uint64_t);
  std::cout << '\n';

  PRINT_sizeof(uint_fast8_t);
  PRINT_sizeof(uint_fast16_t);
  PRINT_sizeof(uint_fast32_t);
  PRINT_sizeof(uint_fast64_t);
  std::cout << '\n';

  PRINT_sizeof(intmax_t);
  PRINT_sizeof(uintmax_t);
  std::cout << '\n';

  PRINT_sizeof(imaxdiv_t);
  std::cout << '\n';

  PRINT_sizeof(std::filesystem::path);
  PRINT_sizeof(std::filesystem::directory_entry);
  PRINT_sizeof(std::filesystem::directory_iterator);
  PRINT_sizeof(std::filesystem::filesystem_error);
  PRINT_sizeof(std::filesystem::file_status);
  std::cout << '\n';

  PRINT_sizeof(std::function<void()>);
  PRINT_sizeof(std::function<void(int, int)>);
  PRINT_sizeof(std::function<int(void *, void *)>);
  PRINT_sizeof(std::function<int(double, double)>);
  std::cout << '\n';

  printSizeOf<std::variant<int, int>>(CONVERT_TO_STRING((std::variant<int, int>)));
  printSizeOf<std::variant<int, int, int, int>>(CONVERT_TO_STRING((std::variant<int, int, int, int>)));
  printSizeOf<std::variant<int, double>>(CONVERT_TO_STRING((std::variant<int, double>)));
  printSizeOf<std::variant<int, std::string>>(CONVERT_TO_STRING((std::variant<int, std::string>)));
  std::cout << '\n';

  PRINT_sizeof(std::optional<int>);
  PRINT_sizeof(std::optional<double>);
  PRINT_sizeof(std::optional<std::string>);
  std::cout << '\n';

  printSizeOf<std::array<int, 1>>("std::array<int, 1>");
  printSizeOf<std::array<double, 1>>("std::array<double, 1>");

  printSizeOf<std::array<int, 10>>(CONVERT_TO_STRING((std::array<int, 10>)));
  printSizeOf<std::array<double, 10>>(CONVERT_TO_STRING((std::array<double, 10>)));
  std::cout << '\n';

  printSizeOf<std::pair<int, int>>(CONVERT_TO_STRING(std::pair<int.int>));
  printSizeOf<std::pair<double, double>>(CONVERT_TO_STRING((std::pair<double. double>)));
  std::cout << '\n';

  printSizeOf<std::string>("std::string");
  printSizeOf<std::wstring>("std::wstring");
  printSizeOf<std::u16string>("std::u16string");
  printSizeOf<std::u32string>("std::u32string");
  std::cout << '\n';

  PRINT_sizeof(std::string_view);
  PRINT_sizeof(std::wstring_view);
  PRINT_sizeof(std::u16string_view);
  PRINT_sizeof(std::u32string_view);
  std::cout << '\n';

  printSizeOf<std::list<int>>("std::list<int>");
  printSizeOf<std::list<double>>("std::list<double>");
  std::cout << '\n';

  printSizeOf<std::deque<int>>("std::deque<int>");
  printSizeOf<std::deque<double>>("std::deque<double>");
  std::cout << '\n';

  printSizeOf<std::vector<int>>("std::vector<int>");
  printSizeOf<std::vector<double>>("std::vector<double>");
  std::cout << '\n';

  PRINT_sizeof(std::initializer_list<int>);
  PRINT_sizeof(std::initializer_list<double>);
  PRINT_sizeof(std::initializer_list<std::string>);
  std::cout << '\n';

  printSizeOf<std::unique_ptr<int>>("std::unique_ptr<int>");
  printSizeOf<std::unique_ptr<double>>("std::unique_ptr<double>");
  std::cout << '\n';

  printSizeOf<std::shared_ptr<int>>("std::shared_ptr<int>");
  printSizeOf<std::shared_ptr<double>>("std::shared_ptr<double>");
  std::cout << '\n';



  Stop();
  return 0;
}