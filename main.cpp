#include <iostream>
#include <string>
#include <cstdio>
#include <sys/stat.h>

inline bool CheckFileExist(const std::string& name) {
  struct stat buffer;   
  return (stat (name.c_str(), &buffer) == 0); 
}

int main(int argc, char** argv)
{
    std::string val = "./";
    for (int i = 1; i < argc; ++i)
    {
        std::string data = argv[i];
        val += data + " ";
    }
    if (val == "./")
    {
        std::cout << "Error: Please enter a app name! Like: run firefox" << std::endl;
        return 1;
    }
    
    if (CheckFileExist(argv[1]))
    {
        int ret = std::system(val.c_str());
        return 0;
    }
    else
    {
        std::cout << "Error: File not found! \nFile Name:" << argv[1] << std::endl;
        return 1;
    }
}
