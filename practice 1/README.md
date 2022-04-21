# Practice 1

Hiện tại chúng tôi không còn gì cả!

## A. TỔ HỢP “NGƯỢC”

Hãy liệt kê tất cả các tổ hợp chập K của N số nguyên dương đầu tiên theo thứ tự ngược (tức là thứ tự giảm dần).

**Input**
- Dòng đầu ghi số bộ test T (T<10)
- Mỗi bộ test viết trên một dòng 2 số N và K (1 < K < N < 20)

**Output**
- Với mỗi bộ test, ghi lần lượt các tổ hợp theo thứ tự ngược. Mỗi tổ hợp trên một dòng.

### input
```
1
5 3
```

### output
```
3 4 5
2 4 5
2 3 5
2 3 4
1 4 5
1 3 5
1 3 4
1 2 5
1 2 4
1 2 3
```

## B. TRÒ CHƠI CARO “NGANG”

Ai cũng đã biết trò chơi caro với hai ký hiệu X và O. Hai người chơi lần lượt viết ký hiệu của mình lên trên lưới các ô vuông. Một bên được gọi là thắng cuộc nếu có 5 ký hiệu của mình xếp thành một đường thẳng (ngang, dọc, chéo).

Phiên bản caro ngang đơn giản hơn nhiều. Trò chơi chỉ thực hiện trên một đường thẳng với không quá N ô vuông. Luật chơi thay đổi một chút để cho mỗi người chơi có thể “tranh nhau” viết càng nhanh càng tốt ký hiệu của mình, không cần chờ đến lượt.

Khi kết thúc một ván chơi thì tất cả N ô vuông đều đã được điền O hoặc X. Người chơi thắng cuộc khi có dãy ký hiệu giống nhau liên tiếp dài hơn người kia và đảm bảo lớn hơn hoặc bằng 5. Nếu hai người chơi đều có dãy liên tiếp dài nhất bằng nhau thì coi như “hòa”.

Cho số N là số ô vuông thẳng hàng cùng với ký hiệu được lựa chọn. Hãy liệt kê tất cả các trường hợp giúp người chơi có ký hiệu đó thắng cuộc. Các trường hợp cần liệt kê theo thứ tự từ điển.

**Input**
- Dòng đầu ghi số bộ test T (T < 10).
- Mỗi bộ test viết trên một dòng số N và ký hiệu c (5 < N < 16; c = ‘O’ hoặc c = ‘X’).

**Output**
- Ghi ra tất cả các trường hợp giúp người chơi có ký hiệu là chữ cái c trong dữ liệu vào thắng cuộc. Các chữ cái đều viết hoa, mỗi trường hợp thắng cuộc ghi trên một dòng.

### input
```
1
6 X
```

### output
```
OXXXXX
XXXXXO
XXXXXX
```

## C. MÃ SỐ

Số lượng máy tính ở các phòng thực hành nhà A3 tăng lên nhanh chóng. Để gán mã cho các máy tính của PTIT người ta sử dụng mã gồm 2*N ký tự, trong đó:

- N ký tự đầu tiên là hoán vị của N chữ cái in hoa đầu tiên, tính từ A.
- N ký tự tiếp theo là các ký tự số bất kỳ từ 1 đến N (có thể trùng nhau).

Người ta ước tính chỉ cần N = 5 là đủ để gán mã cho toàn bộ máy tính kể cả khi mở rộng quy mô các phòng thực hành. Hãy viết chương trình liệt kê các mã tạo được với giá trị N cho trước.

**Input**

Chỉ có duy nhất số N (1 < N < 6)

**Output**

Ghi ra lần lượt các mã khác nhau tạo được theo thứ tự từ điển, mỗi mã ghi trên một dòng

### input
```
2
```

### output
```
AB11
AB12
AB21
AB22
BA11
BA12
BA21
BA22
```

## D. TỔNG CÁC SỐ TỰ NHIÊN

Cho số nguyên dương N. Nhiệm vụ của bạn là hãy liệt kê tất cả các cách biểu diễn N thành tổng các số tự nhiên nhỏ hơn hoặc bằng N. Phép hoán vị của một cách được xem là giống nhau.

Ví dụ với N = 5 ta có kết quả là: (5), (4, 1), (3, 2), (3, 1, 1), (2, 2, 1), (2, 1, 1, 1), (1, 1, 1, 1, 1) .

**Input**
- Dòng đầu tiên đưa vào số lượng test T.
- Những dòng kế tiếp đưa vào các bộ test. Mỗi bộ test là một số tự nhiên N được viết trên một dòng.
- T, n thỏa mãn ràng buộc: 1≤T, N≤10.

**Output**
- Dòng đầu tiên là số lượng cách phân tích thỏa mãn.
- Dòng tiếp theo liệt kê đáp án theo mẫu ví dụ đã cho.

### input
```
2
4
5
```

### output
```
5
(4) (3 1) (2 2) (2 1 1) (1 1 1 1)
7
(5) (4 1) (3 2) (3 1 1) (2 2 1) (2 1 1 1) (1 1 1 1 1)
```

## E. DI CHUYỂN TRONG MÊ CUNG

Cho một mê cung bao gồm các khối được biểu diễn như một ma trận nhị phân A[N][N]. Một con chuột đi từ ô đầu tiên góc trái (A[0][0]) đến ô cuối cùng góc phải (A[N-1][N-1]) theo nguyên tắc:

- Down (D): Chuột được phép xuống dưới nếu ô dưới nó có giá trị 1.
- Right (R): Chuột được phép sang phải dưới nếu ô bên phải nó có giá trị 1.
- Left (L): Chuột được phép sang trái dưới nếu ô bên trái nó có giá trị 1.
- Up (U): Chuột được phép lên trên nếu ô trên nó có giá trị 1.

Hãy đưa ra tất cả các hành trình của con chuột trên mê cung. Đưa ra -1 nếu chuột không thể đi đến đích.

**Input**
- Dòng đầu tiên đưa vào số lượng bộ test T.
- Những dòng kế tiếp đưa vào các bộ test. Mỗi bộ test gồm hai phần: phần thứ nhất đưa vào số N là kích cỡ của mê cung; dòng tiếp theo đưa vào ma trận nhị phân A[N][N].
- T, N, A[i][j] thỏa mãn ràng buộc: 1≤T ≤10; 2≤N≤8; 0≤A[i][j] ≤1.

**Output**
- Đầu tiên đưa ra số lượng đáp án tìm được nếu tồn tại đáp án.. Sau đó đưa ra các xâu ký tự được sắp xếp, trong đó mỗi xâu là một đường đi của con chuột trong mê cung. In ra đáp án theo thứ tự từ điển. Đưa ra -1 nếu chuột không đi được đến đích.

### input
```
2
4
1 0 0 0
1 1 0 1
0 1 0 0
0 1 1 1
5
1 0 0 0 0
1 1 1 1 1
1 1 1 0 1
0 0 0 0 1
0 0 0 0 1
```

### output
```
1 DRDDRR
4 DDRRURRDDD DDRURRRDDD DRDRURRDDD DRRRRDDD
```

## F. QUÂN VUA TRÊN BÀN CỜ

Luật chơi cờ vua chắc chắn không xa lạ gì. Trên bàn cờ vua kích thước 8*8 thì quân vua được phép di chuyển đến cả 8 ô liền kề theo cả đường dọc và đường chéo. Tất nhiên quân vua sẽ không thể di chuyển được ra ngoài bàn cờ.

Hãy đưa ra tất cả các hành trình của con chuột trên mê cung. Đưa ra -1 nếu chuột không thể đi đến đích.

**Input**

Có 2 cặp số nguyên s1,s2 và f1,f2 lần lượt và vị trí ô bắt đầu và ô kết thúc. Các vị trí đảm bảo nằm trong phạm vi bàn cờ.

**Output**

Số bước đi ít nhất của quân vua

### input
```
4 3 1 6
_________
5 5 5 6
```

### output
```
3
_________
1
```

## G. DÃY CON LIÊN TIẾP

Cho dãy số A[] có N phần tử, N không quá 10<sup>5</sup>, các số trong dãy đều nguyên dương và không quá 9 chữ số. Hãy tính độ dài của dãy con liên tiếp có trung bình cộng lớn nhất trong dãy.

Trong trường hợp có nhiều dãy con liên tiếp đều có trung bình cộng lớn nhất thì dãy nào dài hơn sẽ được chọn.

**Input**

Dòng đầu ghi số N.

Dòng thứ 2 ghi N số của dãy A[]

**Output**

Ghi ra độ dài dãy con liên tiếp có trung bình cộng lớn nhất tìm được.

### input
```
5
5 1 6 7 2
```

### output
```
2
```

## H. LŨY THỪA MA TRẬN

Cho ma trận vuông A kích thước N x N. Nhiệm vụ của bạn là hãy tính ma trận X = A<sup>K</sup> với K là số nguyên cho trước. Sau đó, tính tổng các phần tử trên đường chéo phụ. Đáp số có thể rất lớn, hãy in ra kết quả theo modulo 10<sup>9</sup>+7.

**Input**

Dòng đầu tiên là số lượng bộ test T (T ≤ 100).

Mỗi test bắt gồm một số nguyên N và K (1 ≤ N ≤ 10, 1 ≤ K ≤ 10<sup>9</sup>) là kích thước của ma trận và số mũ.

**Output**

Với mỗi test, in ra kết quả của ma trận X.

### input
```
2
2 5
1 1
1 0
3 1000000000
1 2 3
4 5 6
7 8 9
```

### output
```
10
593171300
```

## I. TỔNG ƯỚC SỐ

Cho hai số nguyên dương a,b. Hãy đếm xem trong đoạn [a,b] có bao nhiêu số có tổng các ước số (không tính chính nó) lớn hơn giá trị của nó.

Ví dụ: số 12 có tổng ước số là 1 + 2 + 3 + 4 + 6 = 16 > 12.

**Input**

Chỉ có hai số a và b (1 <= a <= b <= 10<sup>6</sup>).

**Output**

Ghi ra số lượng các số thỏa mãn.

### input
```
1 50
```

### output
```
9
```

## J. MIN VÀ MAX

Cho dãy số A[] có N phần tử là các số nguyên dương không quá 6 chữ số.

Người ta tạo ra ma trận C[][] như sau:

- Kích thước của C là N*N
- Với chỉ số tính từ 1 thì C[i][j] = j * min (A[i], A[i+1], …, A[i+j-1]).

với 1 <= j <=n; 1 <= i <= N – j + 1.

Hãy tìm giá trị lớn nhất của ma trận C.

**Input**

Dòng đầu ghi số N (1 < N <= 10<sup>5</sup>).

Dòng tiếp theo ghi N số của dãy A[], các giá trị đều dương và không quá 10<sup>6</sup>.  

**Output**

Ghi ra giá trị lớn nhất tính được.

### input
```
5
1 4 6 3 2
```

### output
```
9
```

## K. ĐẾM SỐ VẬT CẢN TRÊN MÊ CUNG

Một mê cung được mô tả dưới dạng ma trận ký tự trong đó dấu ‘.’ là mô tả ô trống, không có vật cản, dấu ‘#’ mô tả một vật cản. Các vật cản sẽ ghép lại với nhau thành vật cản lớn hơn nếu nó liền kề theo hàng hoặc cột.

Hãy đếm xem trong mê cung có bao nhiêu vật cản.

**Input**

Dòng đầu ghi số hai số N, M là số hàng và số cột của mê cung.

N dòng tiếp theo mô tả mê cung trong đó chỉ có các ký tự ‘.’ và ‘#’.

**Output**

Ghi ra số vật cản đếm được.

### input
```
5 6
.#....
..#...
..#..#
...##.
.#....
```

### output
```
5
```

## L. BIẾN ĐỔI DÃY SỐ

Cho dãy số nguyên A[] có N phần tử. Một dãy số được coi là đẹp nếu trong dãy không có bất cứ cặp số cạnh nhau nào bằng nhau (tức là A[i] # A[i+1] với mọi chỉ số i từ 0 đến N-2).

Giả sử chi phí để thay đổi giá trị A[i] tăng hoặc giảm 1 đơn vị là B[i].

Hãy tính chi phí nhỏ nhất để biến đổi dãy số A[] ban đầu về dạng thỏa mãn tính chất “đẹp”.

**Input**

Dòng đầu ghi số bộ test T (1 < T ≤ 3*10<sup>5</sup>).

Mỗi bộ test bắt đầu với số nguyên dương N (1 < N ≤ 3*10<sup>5</sup>).

Tiếp theo là N dòng, mỗi dòng ghi 2 số A[i] và B[i]. Các giá trị đều nguyên dương và không quá 9 chữ số.

Dữ liệu vào đảm bảo kết quả tính được của mỗi test đều không quá 18 chữ số.

**Output**

Với mỗi bộ test, ghi ra chi phí nhỏ nhất có thể trên một dòng.

### input
```
5 6
.#....
..#...
..#..#
...##.
.#....
```

### output
```
5
```

*quên k chép lại input output :)*


## M. DÃY CON TĂNG DẦN

Cho dãy số a[] có n phần tử là các số nguyên dương khác nhau từng đôi một. Hãy liệt kê tất cả các dãy con có từ 2 phần tử trở lên của dãy a[] thỏa mãn tính chất tăng dần.

Dãy con tạo được bằng cách lấy ra các phần tử trong dãy a[] nhưng vẫn giữ nguyên thứ tự ban đầu.

Coi mỗi dãy con như một xâu ký tự với các phần tử cách nhau một khoảng trống, hãy liệt kê theo thứ tự tử điển.

**Input**
- Dòng đầu ghi số n (không quá 20)
- Dòng thứ 2 ghi n số của dãy a[]. Các số khác nhau từng đôi một và có giá trị không quá 100.

**Output**

Ghi ra lần lượt các dãy con tăng dần theo thứ tự từ điển.

### input
```
4
6 3 7 11
```

### output
```
3 11
3 7
3 7 11
6 11
6 7
6 7 11
7 11
```

## N. CHÊNH LỆCH NHỎ NHẤT

Cho dãy A[] có N số nguyên, mỗi số có đúng K chữ số (có thể có chữ số 0 ở đầu). Gọi độ chênh lệch của dãy là hiệu giữa phần tử lớn nhất và bé nhất của dãy.

Bạn có thể hoán vị các chữ số của một số để tạo số mới (có thể có chữ số 0 ở đầu). Bằng cách hoán vị tất cả n số theo cùng một cách, ta nhận được dãy số mới.

Tìm độ chênh lệch nhỏ nhất có thể tạo được.

**Input**
- Dòng đầu chứa 2 số N và K. (1 ≤ N, K ≤ 8)
- N dòng sau, mỗi dòng chứa 1 số nguyên có K chữ số.

**Output**

Độ chênh lệch nhỏ nhất tìm được.

### input
```
3 3
010
909
012
```

### output
```
3
```

## O. TỔNG SỐ CÁCH DI CHUYỂN

Khu vui chơi trẻ em thiết kế một cầu thang có N bậc để di chuyển lên đỉnh tháp. Sinh viên PTIT cũng được phép leo lên cầu thang này nhưng nhìn chung chân sinh viên PTIT khá là dài nên có thể đi từ 1 đến K bậc mỗi bước (chứ không chỉ là 1 bậc như trẻ em).

Hãy tính xem sinh viên PTIT có bao nhiêu cách để leo lên đến đỉnh.

**Input**
- Dòng đầu tiên là số lượng bộ test T (T ≤ 100).
- Mỗi test gồm hai số nguyên dương N và K (1 ≤ N ≤ 100000, 1 ≤ K ≤ 100).

**Output**

- Với mỗi test, in ra đáp án tìm được trên một dòng theo modulo 10<sup>9</sup>+7.

### input
```
2
2 2
4 2
```

### output
```
2
5
```

## P. SẮP XẾP QUÂN HẬU

Cho một bàn cờ 8 x 8, mỗi ô có một giá trị A[i][j] nhất định (0 ≤ A[i][j] ≤ 100), tương ứng với điểm số đạt được nếu như bạn đặt một quân cờ vào đó.

Nhiệm vụ của bạn là đặt 8 quân hậu lên bàn cờ, sao cho không có 2 quân nào ăn nhau, và số điểm đạt được là lớn nhất.

**Input**
- Dòng đầu tiên là số lượng bộ test T (T ≤ 20).
- Mỗi test gồm 8 dòng, mỗi dòng 8 số nguyên mô tả bàn cờ.

**Output**

- Với mỗi test, ghi ra thứ tự bộ test và giá trị điểm lớn nhất đạt được trên một dòng.

### input
```
1
1 2 3 4 5 6 7 8
9 10 11 12 13 14 15 16
17 18 19 20 21 22 23 24
25 26 27 28 29 30 31 32
33 34 35 36 37 38 39 40
41 42 43 44 45 46 47 48
48 50 51 52 53 54 55 56
57 58 59 60 61 62 63 64
```

### output
```
Test 1: 260
```

## Q. SỐ LỘC PHÁT

Số lộc phát là số chỉ có hai chữ số 6 và 8. Ví dụ 6, 8, 6666, 686886, 88888888 là các số lộc phát. Cho số tự nhiên N không quá 12, hãy liệt kê tất cả các số lộc phát độ dài N theo thứ tự từ nhỏ đến lớn .

**Input**
- Dòng đầu tiên đưa vào số lượng test T.
- Những dòng kế tiếp đưa vào các bộ test. Mỗi bộ test là một số tự nhiên N.
- T, n thỏa mãn ràng buộc: 1≤T≤10; 1≤N≤12.

**Output**

- Với mỗi test cần đưa ra 2 dòng:
    - Dòng đầu ghi ra số lượng số lộc phát tìm được
    - Dòng thứ hai ghi lần lượt các số theo thứ tự từ nhỏ đến lớn.

### input
```
2
2
3
```

### output
```
4
66 68 86 88
8
666 668 686 688 866 868 886 888
```

## R. THI ĐẤU ĐỐI KHÁNG

Team A có N thí sinh, mỗi thí sinh có sức mạnh bằng a[i], team B có M thí sinh, mỗi thí sinh có sức mạnh bằng b[i].

Luật thi đấu đối kháng như sau: Mỗi team chọn ra K thí sinh, thí sinh mạnh nhất được chọn của nhóm A sẽ thi đấu với thí sinh mạnh nhất của nhóm B, thí sinh mạnh thứ 2 của nhóm A sẽ thi đấu với thí sinh mạnh thứ 2 trong nhóm B... Trong một cuộc đấu đối kháng, thí sinh nào có sức mạnh lớn hơn sẽ chiến thắng.

Ban tổ chức là người nhà của team A, vì vậy đã cố ý lựa chọn K thí sinh nhóm A và K thí sinh nhóm B sao cho trong K cuộc đấu, thành viên đến từ team A luôn chiến thắng.

Nhiệm vụ của bạn là hãy tính xem BTC có bao nhiêu cách chọn các thí sinh để đạt được mục tiêu của mình?

**Input**
- Dòng đầu tiên chứa 3 số nguyên N, M, K (1 <= K <= 10).
- Dòng tiếp theo gồm N số nguyên a[i].
- Dòng cuối gồm M số nguyên b[i] (1 <= a[i], b[i] <= 10^9).

1 <= N, M <= 1000.

**Output**

In ra đáp án tìm được theo modulo 10^9+9.

### input
```
5 10 3
1 2 2 6 7
1 3 6 8 8 9 14 17 18 19
```

### output
```
2
```

## S. LŨY THỪA MA TRẬN 5

Cho ma trận vuông A kích thước N x N. Nhiệm vụ của bạn là hãy tính ma trận X = A<sup>K</sup> với K là số nguyên cho trước. Sau đó, tính tổng các phần tử của hàng cuối cùng. Đáp số có thể rất lớn, hãy in ra kết quả theo modulo 10<sup>9</sup>+7.

**Input**
- Dòng đầu tiên là số lượng bộ test T (T ≤ 100).
- Mỗi test bắt gồm một số nguyên N và K (1 ≤ N ≤ 10, 1 ≤ K ≤ 10<sup>9</sup>) là kích thước của ma trận và số mũ.

**Output**

Với mỗi test, in ra kết quả của ma trận X.

### input
```
2
2 5
1 1
1 0
3 1000000000
1 2 3
4 5 6
7 8 9
```

### output
```
8
818308476
```

## T. LŨY THỪA MA TRẬN 4

Cho ma trận vuông A kích thước N x N. Nhiệm vụ của bạn là hãy tính ma trận X = A<sup>K</sup> với K là số nguyên cho trước. Sau đó, tính tổng các phần tử của hàng đầu tiên. Đáp số có thể rất lớn, hãy in ra kết quả theo modulo 10<sup>9</sup>+7.


**Input**
- Dòng đầu tiên là số lượng bộ test T (T ≤ 100).
- Mỗi test bắt gồm một số nguyên N và K (1 ≤ N ≤ 10, 1 ≤ K ≤ 10<sup>9</sup>) là kích thước của ma trận và số mũ.

**Output**

Với mỗi test, in ra kết quả của ma trận X.

### input
```
2
2 5
1 1
1 0
3 1000000000
1 2 3
4 5 6
7 8 9
```

### output
```
13
106502916
```

## T. LŨY THỪA MA TRẬN 4

Cho ma trận vuông A kích thước N x N. Nhiệm vụ của bạn là hãy tính ma trận X = A<sup>K</sup> với K là số nguyên cho trước. Sau đó, tính tổng các phần tử của hàng đầu tiên. Đáp số có thể rất lớn, hãy in ra kết quả theo modulo 10<sup>9</sup>+7.


**Input**
- Dòng đầu tiên là số lượng bộ test T (T ≤ 100).
- Mỗi test bắt gồm một số nguyên N và K (1 ≤ N ≤ 10, 1 ≤ K ≤ 10<sup>9</sup>) là kích thước của ma trận và số mũ.

**Output**

Với mỗi test, in ra kết quả của ma trận X.

### input
```
2
2 5
1 1
1 0
3 1000000000
1 2 3
4 5 6
7 8 9
```

### output
```
13
106502916
```

## U. XÂU AB

Xâu ký tự được gọi là xâu AB nếu mỗi ký tự trong xâu hoặc là ký tự ‘A’ hoặc là ký tự ‘B’. Ví dụ xâu “ABBABB” là xâu AB độ dài 6. Bạn là hãy liệt kê tất cả các xâu AB có độ dài n.

**Input**
- Dòng đầu tiên đưa vào số lượng test T.
- Những dòng kế tiếp đưa vào các bộ test. Mỗi bộ test là một số tự nhiên n.
- T, n thỏa mãn ràng buộc: 1 ≤ T ≤ 10;  1 ≤ n ≤ 10.

**Output**
- Đưa ra kết quả mỗi test theo từng dòng. Mỗi xâu cách nhau 1 dấu phẩy.

### input
```
2
2
3
```

### output
```
AA,AB,BA,BB
AAA,AAB,ABA,ABB,BAA,BAB,BBA,BBB
```

## V. SỐ 2 ƯU THẾ

Hệ thống máy tính mới chuyển sang sử dụng hệ đếm tam phân với ba chữ số 0, 1, 2.

Do vốn đã quen với hệ đếm nhị phân nên Nam chỉ quan tâm đến các số tam phân thỏa mãn chữ số 2 chiếm ưu thế, tức là số lượng chữ số 2 chiếm nhiều hơn 50% số chữ số của số đó.

Hãy giúp Nam liệt kê N số tam phân ưu thế 2 đầu tiên.

**Input**
- Dòng đầu ghi số bộ test (không quá 20)
- Mỗi bộ test ghi số nguyên dương N (không quá 1000)

**Output**
- Với mỗi test, viết trên một dòng N số tam phân ưu thế 2, các số cách nhau một khoảng trống.

### input
```
2
5
10
```

### output
```
2 22 122 202 212
2 22 122 202 212 220 221 222 1222 2022
```

## W. TĂNG - GIẢM

Cho hai dãy số thực A[] và B[] đều có N phần tử, các giá trị là số thực và không quá 100.

Hãy tính độ dài dài nhất của dãy các vị trí (không cần liên tiếp) thỏa mãn cả hai điều kiện:

- Nếu xét các vị trí đó trên dãy A[] thì dãy con thu được thỏa mãn tính chất tăng dần (giá trị bằng nhau không được tính vào dãy tăng).
- Nếu xét các vị trí đó trên dãy B[] thì dãy con thu được thỏa mãn tính chất giảm dần (giá trị bằng nhau không được tính vào dãy giảm).

**Input**
- Dòng đầu ghi số bộ test (không quá 100).
- Mỗi bộ test bắt đầu bởi số N (không quá 500).
- Tiếp theo là N dòng, mỗi dòng ghi 2 giá trị A[i] và B[i]

**Output**
- Với mỗi test, ghi ra độ dài tính được trên một dòng.

### input
```
3
2
1.0 1.0
1.5 0.0
3
1.0 1.0
1.0 1.0
1.0 1.0
6
1.5 9.0
2.0 2.0
2.5 6.0
3.0 5.0
4.0 2.0
10.0 5.5
```

### output
```
2
1
4
```

## X. CHỮ SỐ SẮP XẾP TĂNG DẦN

Xét các số X có các chữ số được sắp xếp tăng dần, tức a[1] ≤ a[2] ≤ … ≤ a[N] trong đó a[1], a[2], …, a[N] lần lượt là các chữ số của X. Chẳng hạn 223, 8999, …

Cho trước số chữ số N. Nhiệm vụ của bạn là đếm xem có bao nhiêu số như vậy.

**Input**
- Dòng đầu tiên là số lượng bộ test T (T ≤ 100).
- Mỗi test gồm một số nguyên dương N (1 ≤ N ≤ 100).

**Output**
- Với mỗi test, in ra đáp án tìm được trên một dòng theo modulo 10<sup>9</sup>+7.


### input
```
3
1
2
3
```

### output
```
10
55
220
```

## Y. PHẦN TỬ LỚN NHẤT TRONG DÃY CON

Cho dãy số A[] gồm có N phần tử và số nguyên K.

Với mỗi dãy con liên tiếp có độ dài bằng K (từ trái sang phải), bạn hãy in ra phần tử lớn nhất trong dãy con này.

**Input**
- Dòng đầu tiên là số lượng bộ test T (T ≤ 10).
- Mỗi test gồm số nguyên N và K (1≤ N ≤ 100 000, 1 ≤ K ≤ N).
- Dòng tiếp theo gồm N số nguyên A[i] (0 ≤ A[i] ≤ 10<sup>9</sup>).

**Output**
- Với mỗi test, in ra trên một dòng N-K+1 số nguyên là đáp án tìm được.


### input
```
2
9 3
1 2 3 1 4 5 2 3 6
10 4
8 5 10 7 9 4 15 12 90 13
```

### output
```
3 3 4 5 5 5 6
10 10 10 15 15 90 90
```

## Z. SỐ CẶP BẠN TỐT

Sau khi thi trượt môn CTDL&GT, lớp PTIT_TLE được thành lập và có N sinh viên, xếp ngẫu nhiên thành một hàng dọc. Giả sử anh em đều nói khá to nên mỗi người có thể hỏi tên của chiến hữu đứng cách mình không quá K vị trí. Và nếu cặp nào đó có độ dài tên đúng bằng nhau thì sẽ trở thành một cặp bạn tốt, hứa hẹn sẽ hỗ trợ nhau trong những lần TLE tiếp theo.

Hãy đếm xem có bao nhiêu cặp bạn tốt tồn tại trong hàng.

**Input**
- Ghi hai số N và K (3<=N<=300 000; 1<= K <=N)
- Tiếp theo là N dòng, mỗi dòng ghi một cái tên (đều là chữ cái in hoa không dấu, không có khoảng trống).

**Output**
- Ghi ra số cặp bạn tốt tìm được.

### input
```
6 3
NAM
TRUNG
TRUONG
HUYEN
TU
NGUYEN
```

### output
```
2
```

## AA. TÁCH NHÓM TỐI ƯU

Cho dãy số A[] có N phần tử là các số nguyên dương. Với mỗi số nguyên K, hãy tính xem có thể tách dãy số A thành ít nhất bao nhiêu nhóm sao cho mỗi số trong nhóm đều có thể tìm được ít nhất một số khác cùng nhóm có chênh lệch không vượt quá K.

Ví dụ: A[] = {2, 6, 1, 7, 3, 4, 9}; K = 1 thì kết quả là 3 ứng với 3 nhóm {2,1,3,4}; {6,7};  {9}

**Input**
- Dòng đầu ghi hai số N và K (0 <= K <= 10<sup>5</sup>; 0 <= N <= 10<sup>6</sup>).
- Dòng thứ 2 ghi ra N số của dãy A[], các số nguyên dương và không quá 10<sup>6</sup>.

**Output**
- Ghi ra số nhóm ít nhất có thể.

### input
```
7 1
2 6 1 7 3 4 9
```

### output
```
3
```

## AB. DÃY CON CÓ TỔNG BẰNG S

Cho dãy số A[] có n phần tử và số nguyên dương S. Hãy tìm dãy con có ít phần tử nhất của A[] có tổng các phần tử đúng bằng S.

**Input**
- Dòng đầu ghi hai số n và S. (n ≤ 30; S  ≤  109).
- Dòng thứ 2 ghi n số của dãy A[], các số đều nguyên dương và không quá 9 chữ số.

**Output**
- Ghi ra độ dài của dãy con ngắn nhất có tổng bằng S.

### input
```
10 390
200 10 20 20 50 50 50 50 100 100
```

### output
```
5
```

## AC. DÃY CON TĂNG DÀI NHẤT 2 CHIỀU

Cho N cặp số Ai (x<sub>i</sub>, y<sub>i</sub>). Cặp (x<sub>1</sub>, y<sub>1</sub>) < (x<sub>2</sub>,y<sub>2</sub>) nếu như x<sub>1</sub> < x<sub>2</sub> và y<sub>1</sub> < y<sub>2</sub>.

**Input**
- Dòng đầu tiên là số nguyên N (N ≤ 100 000).
- N dòng tiếp theo, mỗi dòng gồm 2 số nguyên x<sub>i</sub>, y<sub>i</sub>. Các số có giá trị tuyệt đối không vượt quá 10<sup>9</sup>.

**Output**
- In ra một số nguyên là độ dài dãy con tăng dài nhất tìm được.

### input
```
8
1 3
3 2
1 1
4 5
6 3
9 9
8 7
7 6
```

### output
```
5
```

## AD. VỊ TRÍ CHẴN

Cho trước 1 chữ số d (0 ≤ d ≤ 9) , ta gọi họ số đặc biệt của d là tập các số tự nhiên mà chữ số d chỉ xuất hiện tại vị trí chẵn (không xuất hiện trong vị trí lẻ).

Ví dụ: Số 1717171 là 1 số trong họ số đặc biệt của chữ số 7

Số 20 là 1 số trong họ số đặc biệt của chữ số 2.

Bây giờ, việc của bạn là: Cho trước 1 chữ số d, hãy đếm số lượng các số thuộc họ số đặc biệt của d nằm trong đoạn từ [a,b] mà là bội số của 1 số m cho trước.

**Input**
- Dòng đầu tiên gồm 2 số m và d (1 ≤ m ≤ 2000, 0 ≤ d ≤ 9)
- Dòng thứ 2 gồm 2 số a và b ( a ≤ b, số chữ số của cả a và b bằng nhau, không vượt quá 2000 và không có chữ số 0 ở đầu).

**Output**
- In ra kết quả bài toán. Vì kết quả bài toán có thể rất lớn nên kết quả in ra phải được lấy dư theo 10<sup>9</sup> + 7

### input
```
43 3
587 850
```

### output
```
1
```

Giải thích test:

Trong khoảng từ 587 đến 850 chỉ có duy nhất 1 số thuộc họ số đặc biệt của chữ số 3 mà là bội của 43 đó là 731 (số 3 xuất hiện tại vị trí số 2 là vị trí chẵn)