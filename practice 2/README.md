### 1 - ĐẢO TỪ

Cho một xâu ký tự str bao gồm nhiều từ trong xâu. Hãy đảo ngược từng từ trong xâu?

**Input:** 
Dòng đầu tiên đưa vào số lượng bộ test T. Những dòng tiếp theo mỗi dòng đưa vào một bộ test. Mỗi bộ test là một dòng ghi lại nhiều từ trong xâu str.

**Output:** 
Đưa ra kết quả mỗi test theo từng dòng.

**Ràng buộc:** T, str thỏa mãn ràng buộc: 1≤T≤100; 2≤length(str)≤10<sup>6</sup>.

**input**
```
2
ABC DEF
123 456
```

**output**
```
CBA FED
321 654
```

### 2 - ĐÁNH SỐ THỨ TỰ CẶP DẤU NGOẶC

Cho một biểu thức đúng, tức là các dấu ngoặc đơn đều đầy đủ mở và đóng, đảm bảo đúng thứ tự. Hãy viết chương trình đánh số các cặp dấu ngoặc theo thứ tự xuất hiện, tính từ 1.

Ví dụ với biểu thức `(a + (b *c) ) + (d/e)`

ta có thứ tự của các cặp ‘(‘, ‘)’ là `1 2 2 1 3 3`

**Input:** 
- Dòng đầu tiên đưa vào số lượng bộ test T (không quá 100).
- Những dòng kế tiếp đưa vào các bộ test. Mỗi bộ test là một biểu thức số học được đưa vào trên một dòng, độ dài không quá 10<sup>6</sup>.

**Output:** 
- Đưa ra kết quả mỗi test theo từng dòng.

**input**
```
2
(a + (b *c) ) + (d/e)
( ( () ) ( () ) )
```

**output**
```
1 2 2 1 3 3
1 2 3 3 2 4 5 5 4 1
```

### 3 - ĐOẠN LIÊN TIẾP

Cho dãy số A[] có N phần tử. Với mỗi vị trí thứ i trong dãy, hãy tính độ dài của đoạn liên tiếp tính từ i trở về phía trước mà các giá trị đều nhỏ hơn hoặc bằng A[i].

**Input:** 
- Dòng đầu ghi số bộ test (không quá 10). Mỗi test có 2 dòng.
- Dòng đầu tiên gồm 1 số nguyên N (1 ≤ N ≤ 10<sup>5</sup>).
- Dòng tiếp theo gồm N số nguyên A1, A2, …, AN (1 ≤ A[i] ≤ 10<sup>6</sup>).

**Output:** 
- Với mỗi bộ test, in ra dãy kết quả trên một dòng.

**input**
```
1
7
100 80 60 70 60 75 85
```

**output**
```
1 1 1 2 1 4 6
```