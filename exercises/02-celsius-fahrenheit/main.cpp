 #include <iostream>                                                                                                                                                                                             
#include <iomanip> 
 using namespace std ; 
   
   int main(){
            
       float  celsius ;
       cin >> celsius ; 
   
      float  fahrenheit ; 
      fahrenheit = celsius * 9.00/5.00 + 32.00 ; 
  
        cout << fixed << setprecision(1) << celsius  << " Celsius = " << fahrenheit << " Fahrenheit";
  
   return 0 ; 
 }
