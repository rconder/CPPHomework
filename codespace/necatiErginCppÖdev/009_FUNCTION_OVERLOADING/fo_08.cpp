/* #### C++17 standartlarına göre aşağıdaki C++ programı çalıştırıldığında bu programın çıktısı ne olur?

 */

//```
#include <iostream>
 
void f(int) 
{
	std::cout << "int";
}
 
void f(long)
{
	std::cout << "long";
}
 
void f(double)
{ 
	std::cout << "double";
}
 
int main()
{
	//f(sizeof(int));
	//sentaks hatası size_t türünden bir değişken üretiyor
	//işaretsiz bir tam sayı türü ve derleyici
	//exact match olmuyor ve conversion 
	//3 fonksiyon arasında ambiguity var	
	return 0;
}
//```
/* 
__Sorunun yanıtı şu seçeneklerden biri de olabilir:__

+ Sentaks hatası *(syntax error)*
+ Tanımsız davranış *(undefined behavior)*
+ Derleyiciye göre değişir *(implementation defined)*

[ödev cevabı](https://vimeo.com/433295268) */
