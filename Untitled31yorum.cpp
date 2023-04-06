#include <iostream>
#include <vector>

using namespace std;

vector<int> searchMatrix(vector<vector<int>>& matrix, int target) { // 2D matris arama fonksiyonu tanımlanıyor
    vector<int> result; // sonuç vektörü oluşturuluyor
    int m = matrix.size(); // matrisin satır sayısı alınıyor
    if (m == 0) { // eğer matris boşsa
        return result; // sonuç vektörü boş olarak döndürülüyor
    }
    int n = matrix[0].size(); // matrisin sütun sayısı alınıyor
    int row = m - 1; // başlangıçta son satırdan başlanarak arama yapılacağı için row değeri satır sayısının bir eksiği olarak atanıyor
    int col = 0; // başlangıçta ilk sütundan başlanarak arama yapılacağı için col değeri 0 olarak atanıyor
    while (row >= 0 && col < n) { // matrisin sınırları içinde döngü devam ediyor
        if (matrix[row][col] == target) { // hedef değer matriste bulunduysa
            result.push_back(row); 
            result.push_back(col); 
            return result; // sonuç vektörü döndürülüyor
        } else if (matrix[row][col] > target) { // matrisin bulunulan noktasındaki değer hedef değerden büyükse
            row--; // arama yönü yukarıya doğru değiştiriliyor
        } else { // matrisin bulunulan noktasındaki değer hedef değerden küçükse
            col++; // arama yönü sağa doğru değiştiriliyor
        }
    }
    return result; // hedef değer matriste bulunamadıysa boş sonuç vektörü döndürülüyor
}

int main() {
    vector<vector<int>> matrix = {{1, 4, 7}, {2, 5, 8}, {3, 6, 9}}; // örnek bir matris tanımlanıyor
    int target = 5; // aranacak hedef değer belirleniyor
    vector<int> result = searchMatrix(matrix, target); // matriste hedef değer aranıyor
    if (!result.empty()) { // eğer sonuç vektörü boş değilse
        cout << "Hedef degeri matrisin (" << result[0] << "," << result[1] << ") konumunda bulundu." << endl; // hedef değer matriste bulundu mesajı ve satır/sütun indeksleri yazdırılıyor
    } else { // eğer sonuç vektörü boşsa
        cout << "Hedef degeri matriste bulunamadi." << endl; // hedef değer matriste bulunamadı mesajı yazdırılıyor
    }
    return 0; // program son
}