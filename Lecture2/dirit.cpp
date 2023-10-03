#include <filesystem>
#include <iostream>


int main()
{
 const std::filesystem::path current_dir{"./"};
 
std::cout << "directory_iterator:\n";
// directory_iterator can be iterated using a range-for loop
for (auto const& dir_entry : std::filesystem::directory_iterator{current_dir}) 
    std::cout << dir_entry.path() << '\n';
}