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

### 4 - HÌNH CHỮ NHẬT ĐƠN SẮC

Cho bảng có kích thước M*N các ô vuông đơn vị.

Với mỗi dãy số A có N phần tử và các giá trị A[i] thỏa mãn nguyên dương, không vượt quá M, người ta tiến hành tô các ô trong bảng như sau:
- Tô từ trên xuống dưới trong từng cột
- Với cột thứ i, đầu tiên tô A[i] ô màu vàng, tiếp theo là M – A[i] ô màu xanh.

Ví dụ dưới đây là bảng 5*5 với A[] = {2, 1, 3, 4, 0}.

![download](https://user-images.githubusercontent.com/64203006/163996221-3e24301d-d636-44b9-bf4d-436ce0236ab1.png)

Hãy tính diện tích hình chữ nhật lớn nhất thỏa mãn:
- Cạnh hình chữ nhật song song với cạnh của bảng
- Tất cả các ô trong hình chữ nhật đều cùng màu.

**Input:** 
- Dòng đầu tiên ghi hai số M và N (0 < N,M <=10<sup>6</sup>).
- Dòng thứ 2 ghi N số của dãy A thỏa mãn ràng buộc đề bài.

**Output:** 
- Ghi ra giá trị diện tích tính được.

**input**
```
5 9
1 3 4 4 5 4 4 3 1
```

**output**
```
21
```

### 5 - ĐẾM CẶP SỐ

Cho dãy số nguyên A[]. Với mỗi giá trị A[i], các bạn đã biết ngăn xếp có thể được sử dụng để tìm phần tử đầu tiên bên phải hoặc đầu tiên bên trái lớn hơn giá trị A[i].

Bài toán hôm nay được mô tả như sau: hãy đếm xem có bao nhiêu cặp (i,j) với i<j thỏa mãn từ vị trí i đến vị trí j không có số nào lớn hơn A[i] hoặc A[j]. Tất nhiên các cặp (i,i+1) luôn thỏa mãn.

**Input:** 
- Dòng đầu ghi số N là số phần tử của A[] (1 < N < 500.000).
- Tiếp theo là N dòng, mỗi dòng ghi 1 số nguyên dương là các phần tử của dãy A, các số đều không quá 9 chữ số.

**Output:** 
- Ghi ra số cặp (i,j) đếm được.

**input**
```
7
2
4
1
2
2
5
1
```

**output**
```
10
```

*Giải thích test ví dụ: Các cặp thỏa mãn (với chỉ số tính từ 1) là: (1,2); (2,3); (2,4); (2,5); (2,6); (3,4); (4,5); (4,6); (5,6); (6,7).*

### 6 - SỐ NGUYÊN THỦY

Cho số nguyên N. Nhiệm vụ của bạn hãy đưa ra N số nguyên thủy đầu tiên theo thứ tự từ nhỏ đến lớn.

Số K được gọi là số nguyên thủy nếu số đó thỏa mãn tất cả các điều kiện:
- Số các chữ số của K là một số chẵn.
- Tất cả các chữ số của K chỉ bao gồm số 4 hoặc 5.
- K là một số đối xứng.

**Input:** 
- Dòng đầu tiên đưa vào số lượng test T.
- Dòng tiếp theo đưa vào các bộ test. Mỗi bộ test được là một số N được viết trên một dòng.
- T, N thỏa mãn ràng buộc: 1≤T≤100; 1≤N≤10<sup>4</sup>.

**Output:** 
- Đưa ra kết quả mỗi test theo từng dòng.

**input**
```
2
4
10
```

**output**
```
44 55 4444 4554
44 55 4444 4554 5445 5555 444444 445544 454454 455554
```

### 7 - SỐ LỘC PHÁT ĐỐI XỨNG CHẴN

Trong quan điểm người Việt, một số nguyên dương được gọi là “lộc phát” nếu chỉ có hai chữ số là 6 và/hoặc 8. Một số lộc phát X được gọi là đối xứng chẵn nếu:
- Số chữ số của X là chẵn
- X thỏa mãn tính chất đối xứng.

Hãy liệt kê N số lộc phát đối xứng chẵn đầu tiên theo thứ tự từ nhỏ đến lớn.

**Input:** 
- Dòng đầu tiên đưa vào số lượng test T.
- Dòng tiếp theo đưa vào các bộ test. Mỗi bộ test được là một số N được viết trên một dòng.
- T, N thỏa mãn ràng buộc: 1≤T≤100; 1≤N≤10<sup>4</sup>.

**Output:** 
- Đưa ra kết quả mỗi test theo từng dòng. Các số cách nhau đúng một khoảng trống.

**input**
```
2
4
10
```

**output**
```
66 88 6666 6886
66 88 6666 6886 8668 8888 666666 668866 686686 688886
```

### 8 - SỐ BƯỚC DI CHUYỂN ÍT NHẤT

Cho ma trận A kích thước N*M.

Hãy tìm số bước đi ít nhất để di chuyển từ vị trí A[1][1] đến vị trí A[N][M].

Biết rằng mỗi bước từ vị trí (i, j) ta có thể di chuyển theo một trong ba hướng:
- Hướng xuống dưới với số ô di chuyển là hiệu hai giá trị A[i][j] và A[i+1][j]
- Hướng sang phải với số ô di chuyển là hiệu hai giá trị A[i][j] và A[i][j+1]
- Hướng chéo xuống với số ô di chuyển là hiệu của hai giá trị A[i][j] và A[i+1][j+1]

**Input:** 
- Dòng đầu tiên đưa vào số lượng test T.
- Dòng tiếp theo đưa vào các bộ test. Mỗi bộ test gồm hai phần: phần thứ nhất là hai số N, M; phần thứ hai là các phần tử của ma trận A[][]; các số được viết cách nhau một vài khoảng trống.
- T, N, M, A[i][j] thỏa mãn ràng buộc: 1≤T≤100; 1≤ N, M, A[i][j]≤10<sup>3</sup>.

**Output:** 
- Đưa ra kết quả mỗi test theo từng dòng.
- Nếu không tìm được đường đi ghi ra -1

**input**
```
1
3 3
2 1 2
1 2 4
1 3 2
```

**output**
```
3
```

### 9 - SỐ 2 ƯU THẾ

Hệ thống máy tính mới chuyển sang sử dụng hệ đếm tam phân với ba chữ số 0, 1, 2.

Do vốn đã quen với hệ đếm nhị phân nên Nam chỉ quan tâm đến các số tam phân thỏa mãn chữ số 2 chiếm ưu thế, tức là số lượng chữ số 2 chiếm nhiều hơn 50% số chữ số của số đó.

Hãy giúp Nam liệt kê N số tam phân ưu thế 2 đầu tiên.

**Input:** 
- Dòng đầu ghi số bộ test (không quá 20)
- Mỗi bộ test ghi số nguyên dương N (không quá 1000)

**Output:** 
- Với mỗi test, viết trên một dòng N số tam phân ưu thế 2, các số cách nhau một khoảng trống.

**input**
```
2
5
10
```

**output**
```
2 22 122 202 212
2 22 122 202 212 220 221 222 1222 2022
```

### 10 - CHỮ SỐ NGUYÊN TỐ

Chúng ta đều biết chỉ có 4 chữ số nguyên tố là 2, 3, 5, 7. Hãy liệt kê tất cả các số có ít nhất 4 chữ số nhưng không quá N chữ số và thỏa mãn tất cả các điều kiện sau:

- Chỉ có các chữ số 2, 3, 5, 7
- Có đầy đủ 4 chữ số 2, 3, 5, 7
- Không phải là số chẵn.

**Input:** 
- Chỉ có 1 dòng ghi số N (3 < N < 10)

**Output:** 
- Ghi ra lần lượt các số thỏa mãn theo thứ tự tăng dần, mỗi số trên một dòng

**input**
```
4
```

**output**
```
2357
2375
2537
2573
2735
2753
3257
3275
3527
3725
5237
5273
5327
5723
7235
7253
7325
7523
```