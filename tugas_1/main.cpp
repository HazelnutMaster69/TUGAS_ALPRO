#include <iostream>
#include <array>

/*
    Nama : Farid Hasan Nur
    NIM : A11.2022.14332
*/

int penjumlahan(int a, int b){
    int hasil = a + b; 
    return hasil;
}

int pengurangan(int a, int b){
    int hasil = a - b;
    return hasil;
}

int total_value_element_arr(std::array <int, 5> arr){
    int hasil;
    for(int i = 0; i < arr.size(); i++) {
        hasil += arr[i];
    }
    return hasil;
}

float rata_rata_element_arr(std::array <int, 5> arr){
    float hasil;
    for (int i = 0; i < arr.size(); i++) {
        hasil += arr[i];
    }
    hasil = hasil / arr.size();
    return hasil;
}

int main() {

    // Soal 1 : fungsi penjumlahan
    std::cout << "penjumlahan 1 + 2 : " << penjumlahan(1, 2) << std::endl;

    // Soal 2 : fungsi pengurangan
    std::cout << "pengurangan 2 - 1 : " << pengurangan(2, 1) << std::endl;

    // Soal 3 : total value dari element sebuah array
    std::array <int, 5> arr = {1, 2, 3, 4, 5};
    std::cout << total_value_element_arr(arr) << std::endl;

    // Soal 4 : mencari rata-rata dari element sebuah array
    std::cout << rata_rata_element_arr(arr) << std::endl;
    
    return 0;
}
