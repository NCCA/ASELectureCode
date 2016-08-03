#include <iostream>
#include <vector>
#include <cstdlib>
#include <algorithm>

/// @brief a simple C++ example
/// Modified from :-
/// Bjarne Stroustrup (October 4, 2009). C Style and Techniques FAQ [online].
/// [Accessed 2016]. Avaliable from : <http://www.stroustrup.com/bs_faq2.html>


int main(int argc, char **argv)
{
  std::vector<double> v;

  double d;
  while(std::cin>>d) 
  {
    v.push_back(d);	// read elements
  }
  if (!std::cin.eof()) 
  {		// check if input failed
    std::cin.clear();		// clear error state
    std::string s;
    std::cin >> s;		// look for terminator string
    if (s != "end") 
    {
      std::cerr << "format error\n";
      return EXIT_FAILURE;	// error return
    }
  }

  std::cout << "read " << v.size() << " elements\n";

  std::reverse(std::begin(v),std::end(v));
  std::cout << "elements in reverse order:\n";
  std::for_each(std::begin(v),std::end(v),[](double i){std::cout<<i<<'\n';});

  return EXIT_SUCCESS; // success return
	}
