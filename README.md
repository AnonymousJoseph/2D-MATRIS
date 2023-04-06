# 2D-MATRIS
 Bu kod, bir m x n tamsayı matrisinde verilen hedef değeri arayan ve sonucu bir vektör olarak döndüren bir algoritmadır.
Algoritma, matrisin sağ üst köşesinden başlar ve hedef değere ulaşana veya matrisin tamamı taranana kadar aşağı veya sağa hareket eder. Matristeki her bir elemanı bir kez taradığı için bu algoritmanın zamansal karmaşıklığı O(m + n) dir.
Bu kod, verilen matrisin özelliklerine uygun şekilde dizilmiş tamsayılar üzerinde çalışır. Her satırdaki elemanlar soldan sağa doğru artarken, her sütundaki elemanlar yukarıdan aşağıya doğru artar. Bu özellikler doğrultusunda, matrisin sağ üst köşesindeki eleman (m-1,0) seçilir.
Matriste gezinirken, eğer hedef değere eşit bir eleman bulunursa, bu elemanın konumu bir vektörde saklanarak geri döndürülür. Eğer hedef değer bulunamazsa, boş bir vektör döndürülür.Bu kod, verilen bir matrisin içinde bir hedef değer arama işleminde kullanılabilir.

