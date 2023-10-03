#include <filesystem>
#include <iostream>
namespace fs = std::filesystem;
 
int main()
{
    std::cout << "Current root name is: " << fs::current_path() << '\n';
    std::cout << "Current root name is: " << fs::current_path().root_name() << '\n';
    std::cout << "Current root name is: " << fs::current_path().root_directory() << '\n';
    auto path = fs::path("/");
    path.append("home");
    path.append("jmacey");
    std::cout<<path<<'\n';
    
    fs::path windows_path("c:\a\\b\\c");
    fs::path  posix_path("/a/b/c");
 
    std::cout
        << "Windows path: "
        << windows_path << " -> "
        << windows_path.make_preferred() << '\n'
        << "POSIX path: "
        << posix_path << " -> "
        << posix_path.make_preferred() << '\n';

}