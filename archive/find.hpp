#ifndef FIND_HPP_
#define FIND_HPP_

#include <string>
#include <iostream>

// No requirements in any kind

std::string find_simple (std::string to_find, std::string data[], int beg, int end){

  for(int i = beg ; i <= end ; i++){

    if (data[i] == to_find){
      // std::cout << "Comparing: " << data[i] << " with search item: " << to_find << std::endl;
      return to_find;
    }
  }
  return "not found";
}

// Note: Requires a sorted string array

// Warning: I had a bad feeling about the compare and couldn't say why. Here it is ...
// First it is implicit .The comparison operators implement lexicographic ordering of strings.
// The less-than operator on strings does a lexicographical comparison on the strings. This compares // strings in the same way that they would be listed in dictionary order, generalized to work for
// strings with non-letter characters.
// Caveats: the results dependent on the actual encoding (and generally confusing), it's basically
// completely wrong for unicode

std::string find_fast (std::string to_find, std::string data[], int beg, int end){

  while (beg <= end) {
      int mid = beg + (end - beg) / 2;
      if (data[mid] == to_find)
          return to_find;
      else if (data[mid] < to_find)
          beg = mid + 1;
      else
          end = mid - 1;
  }

return "not found";

}

#endif // FIND_HPP_
