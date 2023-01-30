#include <cstdlib>
#include <iostream>

inline void noop_by_rand(int num)
{
    while (num--) rand();
}

int main(int const argc, char const * argv[]){
  for(int i = 0; i < 1E3; i++){
    std::cout << "Busy wait: " << i << std::endl;
    noop_by_rand(1E7);
  }
}