//
// Created by codjs on 2024-04-24.
//
#include "String.h"
String::String(){
    str = new char[1];
    str[0] = '\0';
    len = 0;
}
String::String(const char* str){
    len = strlen(str);
    this->str = new char[len+1];
    strcpy(this->str,str);
}
// 복사 생성자
String::String(const String& other) {
    len = other.len;
    str = new char[len + 1];
    strcpy(str, other.str);
}

String::~String() {
    delete [] str;
    std::cout << "Destructor" << std::endl;
}

char& String::at(size_t i){
    return str[i];
}
void String::print(const char* msg){
    std::cout << msg << ": " << this->str <<", " << "size: " << len << std::endl;
}