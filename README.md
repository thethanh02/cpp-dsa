# Đề cấu trúc dữ liệu và giải thuật

## CTDL_001 - THUẬT TOÁN SINH

Một xâu nhị phân độ dài n được gọi là thuận nghịch hay đối xứng nếu đảo ngược xâu nhị phân đó ta vẫn nhận được chính nó. Cho số tự nhiên n (n nhập từ bàn phím). Hãy viết chương trình liệt kê tất cả các xâu nhị phân thuận nghịch có độ dài n. Hai phần tử khác nhau của xâu thuận nghịch được ghi cách nhau một khoảng trống.

Ví dụ với n = 4 ta tìm được 4 xâu nhị phân thuận nghịch như dưới đây.
```
0 0 0 0     
0 1 1 0     
1 0 0 1     
1 1 1 1
```

### input
```
4
```

### output
```
0 0 0 0
0 1 1 0
1 0 0 1
1 1 1 1
```

## CTDL_002 - Tổng dãy con = K

Cho dãy A[] gồm N số tự nhiên khác nhau và số tự nhiên K. Hãy viết chương trình liệt kê tất cả các dãy con của dãy số A[] sao cho tổng các phần tử trong dãy con đó đúng bằng K. Dữ liệu vào trên bàn phím (n=5, K=50), 5 số dòng thứ 2 là các phần tử dãy A:
```
5 50      
5 10 15 20 25
```
Các dãy con thoả mãn điều kiện tìm được liệt kê trên màn hình:
- Mỗi dòng ghi lại một dãy con. Hai phần tử khác nhau của dãy con được viết cách nhau bởi một  khoảng trống.
- Dòng cuối cùng ghi lại số các dãy con có tổng các phần tử đúng bằng K tìm được.
```
10 15 25
5 20 25
5 10 15 20
3
```

## CTDL_005 - XÓA DỮ LIỆU TRONG DSLK ĐƠN

Cho danh sách liên kết đơn lưu giữ các số nguyên được quản lý bởi con trỏ First. Viết chương trình con xóa tất cả các phần tử có giá trị bằng x trong danh sách liên kết đơn; chương trình con trả về số lượng các phần tử đã xóa. Sau khi xóa xong, liệt kê các phần tử còn lại trong danh sách liên kết đơn First. Ví dụ: Ta có Input sau:

14 : là số lượng phần tử trong danh sách

1 1 1 4 5 1 1 1 1 7 1 8 1 9   : là 14 phần tử

1 : là số cần xóa

Output :  4 5 7 8 9

## CTDL_006 - LỌC DỮ LIỆU TRÙNG TRONG DSLK ĐƠN

Cho danh sách liên kết đơn lưu giữ các số nguyên được quản lý bởi con trỏ First. Viết chương trình con lọc tất cả các phần tử có giá trị trùng nhau trong danh sách liên kết đơn First, chỉ để lại 1 phần tử đại diện cho nhóm trùng. Sau khi lọc xong, liệt kê các phần tử  trong danh sách liên kết đơn First.

Ví dụ: Ta có Input :

12 : là số lượng phân tử trong danh sách

1 1 1 4  5 1 4  7 7 8 1 9 : là số phần tử

Output : 1 4 5 7 8 9

## DSA01001 - XÂU NHỊ PHÂN KẾ TIẾP

Cho xâu nhị phân X[], nhiệm vụ của bạn là hãy đưa ra xâu nhị phân tiếp theo của X[]. Ví dụ X[] =”010101” thì xâu nhị phân tiếp theo của X[] là “010110”.

Input:
- Dòng đầu tiên đưa vào số lượng test T.
- Những dòng kế tiếp đưa vào các bộ test. Mỗi bộ test là một xâu nhi phân X.
- T, X[] thỏa mãn ràng buộc: 1≤T≤100; 1≤length(X)≤10<sup>3</sup>.

Output:
- Đưa ra kết quả mỗi test theo từng dòng.

### input
```
2
010101
111111
```

### output
```
010110
000000
```

## DSA01002 - TẬP CON KẾ TIẾP

Cho hai số N, K và một tập con K phần tử X[] =(X1, X2,.., XK) của 1, 2, .., N. Nhiệm vụ của bạn là hãy đưa ra tập con K phần tử tiếp theo của X[]. Ví dụ N=5, K=3, X[] ={2, 3, 4} thì tập con tiếp theo của X[] là {2, 3, 5}.

Input:

*   Dòng đầu tiên đưa vào số lượng test T.
*   Những dòng kế tiếp đưa vào các bộ test. Mỗi bộ test là một xâu nhi phân X.
*   T, X[] thỏa mãn ràng buộc: 1≤T≤100; 1≤length(X)≤10<sup>3</sup>.

Output:

*   Đưa ra kết quả mỗi test theo từng dòng.

### input
```
2
5 3
1 4 5
5 3
3 4 5
```

### output
```
2 3 4

1 2 3
```

### DSA01003 - HOÁN VỊ KẾ TIẾP

Cho số tự nhiên N và một hoán vị X\[\] của 1, 2, .., N. Nhiệm vụ của bạn là đưa ra hoán vị tiếp theo của X\[\]. Ví dụ N=5, X\[\] = {1, 2, 3, 4, 5} thì hoán vị tiếp theo của X\[\] là {1, 2, 3, 5, 4}.

Input:

*   Dòng đầu tiên đưa vào số lượng test T.
*   Những dòng kế tiếp đưa vào các bộ test. Mỗi bộ test gồm hai dòng: dòng thứ nhất là số N; dòng tiếp theo đưa vào hoán vị X\[\] của 1, 2, .., N.
*   T, N, X\[\] thỏa mãn ràng buộc: 1≤T≤100; 1≤ N≤10<sup>3</sup>.

Output:

*   Đưa ra kết quả mỗi test theo từng dòng.

### input
```
2
5 
1 2 3 4 5
5
5 4 3 2 1
```

### output
```
1 2 3 5 4
1 2 3 4 5
```

## DSA01004 - SINH TỔ HỢP

Cho hai số nguyên dương N và K. Nhiệm vụ của bạn là hãy liệt kê tất cả các tập con K phần tử của 1, 2, .., N. Ví dụ với N=5, K=3 ta có 10 tập con của 1, 2, 3, 4, 5 như sau: {1, 2, 3}, {1, 2, 4},{1, 2, 5},{1, 3, 4},{1, 3, 5},{1, 4, 5},{2, 3, 4},{2, 3, 5},{2, 4, 5},{3, 4, 5}.

Input:

*   Dòng đầu tiên đưa vào số lượng test T.
*   Những dòng kế tiếp đưa vào các bộ test. Mỗi bộ test là một cặp số tự nhiên N, K được viết trên một dòng.
*   T, n thỏa mãn ràng buộc: 1≤T≤100; 1≤k ≤ n≤15.

Output:

*   Đưa ra kết quả mỗi test theo từng dòng.


## input
```
2
4 3
5 3
```

## output
```
123 124 134 234
123 124 125 134 135 145 234 235 245 345
```

Cho số nguyên dương N. Nhiệm vụ của bạn là hãy liệt kê tất cả các hoán vị của 1, 2, .., N. Ví dụ với N = 3 ta có kết quả: 123, 132, 213, 231, 312, 321.

Input:

*   Dòng đầu tiên đưa vào số lượng test T.
*   Những dòng kế tiếp đưa vào các bộ test. Mỗi bộ test là một số tự nhiên N được viết trên một dòng.
*   T, n thỏa mãn ràng buộc: 1≤T, N≤10.

Output:

*   Đưa ra kết quả mỗi test theo từng dòng.

### input
```
2
2
3
```

### output
```
12 21
123 132 213 231 312 321
```

## DSA01006 - HOÁN VỊ NGƯỢC

Cho số nguyên dương N. Nhiệm vụ của bạn là hãy liệt kê tất cả các hoán vị của 1, 2, .., N theo thứ tự ngược. Ví dụ với N = 3 ta có kết quả: 321, 312, 231, 213, 132, 123.

Input:

*   Dòng đầu tiên đưa vào số lượng test T.
*   Những dòng kế tiếp đưa vào các bộ test. Mỗi bộ test là một số tự nhiên N được viết trên một dòng.
*   T, n thỏa mãn ràng buộc: 1≤T, N≤10.

Output:

*   Đưa ra kết quả mỗi test theo từng dòng.

### input
```
2
2
3
```

### output
```
21 12 
321 312 231 213 132 123
```

## DSA01007 - XÂU AB CÓ ĐỘ DÀI N

Xâu ký tự str được gọi là xâu AB nếu mỗi ký tự trong xâu hoặc là ký tự ‘A’ hoặc là ký tự ‘B’. Ví dụ xâu str=”ABBABB” là xâu AB độ dài 6. Nhiệm vụ của bạn là hãy liệt kê tất cả các xâu AB có độ dài n.

Input:

*   Dòng đầu tiên đưa vào số lượng test T.
*   Những dòng kế tiếp đưa vào các bộ test. Mỗi bộ test là một số tự nhiên n.
*   T, n thỏa mãn ràng buộc: 1≤T≤10; 1≤n≤10.

Output:

*   Đưa ra kết quả mỗi test theo từng dòng. Mỗi xâu cách nhau 1 khoảng trống.

### input
```
2
2
3
```

### output
```
AA AB BA BB
AAA AAB ABA ABB BAA BAB BBA BBB
```

## DSA01008 - XÂU NHỊ PHÂN CÓ K BIT 1

Hãy in ra tất cả các xâu nhị phân độ dài N, có K bit 1 theo thứ tự từ điển tăng dần.

Input: Dòng đầu tiên là số lượng bộ test T (T ≤ 20). Mỗi test gồm 2 số nguyên N, K (1 ≤ K ≤ N ≤ 16).

Output:  Với mỗi test, in ra đáp án tìm được, mỗi xâu in ra trên một dòng.

### input
```
2
4 2
3 2
```

### output
```
0011
0101
0110
1001
1010
1100
011
101
110
```

## DSA01019 - HAHAHA

Khi chat chit vui vẻ, anh em chiến hữu thường hay gõ HAHA để thể hiện sự sảng khoái. Đôi khi cũng có thể gõ HAHAAAAA chẳng hạn cho thêm phần nhấn mạnh.

Giả sử một xâu ký tự được coi là HAHA nếu thỏa mãn các điều kiện:

*   Ký tự đầu tiên phải là chữ H, ký tự cuối cùng phải là chữ A
*   Không có hai chữ H nào liền nhau

Cho trước độ dài N, hãy liệt kê tất cả các xâu ký tự HAHA theo thứ tự từ điển.

**Input**

*   Dòng đầu ghi số bộ test T (không quá 10)
*   Mỗi bộ test ghi độ dài N (2 <= N < 16)

**Output**

*   Với mỗi bộ test, ghi ra tất cả các xâu HAHA tìm được theo thứ tự từ điển, mỗi xâu viết trên một dòng.

**Ví dụ**

### input
```
2
2
4
```

### output
```
HA
HAAA
HAHA
```

## DSA01020 - XÂU NHỊ PHÂN TRƯỚC

Cho xâu nhị phân X\[\], nhiệm vụ của bạn là hãy đưa ra xâu nhị phân trước của X\[\]. Ví dụ X\[\] =”111111” thì xâu nhị phân trước của X\[\] là “111110”. Với xâu X\[\] =“000001” thì xâu nhị trước của X\[\] là “000000”. Chú ý: nếu xâu dữ liệu trong input là xâu đầu tiên thì trước nó sẽ là xâu cuối cùng.

**Input:**

*   Dòng đầu tiên đưa vào số lượng test T.
*   Những dòng kế tiếp đưa vào các bộ test. Mỗi bộ test là một xâu nhi phân X.
*   T, X\[\] thỏa mãn ràng buộc: 1≤T≤100; 1≤length(X)≤10<sup>3</sup>.

**Output:**

*   Đưa ra kết quả mỗi test theo từng dòng.

**Ví dụ:**

### input
```
2
010101
111111
```

### output
```
010100
111110
```

## DSA01021 - TỔ HỢP TIẾP THEO

Cho số nguyên dương (1<N<40) và số nguyên dương K<N. Với 1 tổ hợp chập K phần tử của N, hãy cho biết tổ hợp tiếp theo sẽ có bao nhiêu phần tử mới. Nếu tổ hợp đã cho là cuối cùng thì kết quả là K.  

**Dữ liệu vào:** Dòng đầu ghi số bộ test, không quá 20. Mỗi bộ test viết trên hai dòng

*   Dòng 1: hai số nguyên dương N và K (K<N)
*   Dòng 2 ghi K số của tổ hợp ban đầu. Theo đúng thứ tự tăng dần, không có số nào trùng nhau.

**Kết quả:** Với mỗi bộ dữ liệu in ra số lượng phần tử mới.

 **Ví dụ:**

### input
```
3
5 3
1 3 5
5 3
1 4 5
6 4
3 4 5 6
```

### output
```
1
2
4
```

## DSA01022 - SỐ THỨ TỰ HOÁN VỊ

Cho một hoán vị của N số nguyên dương đầu tiên.

Hãy xác định xem đó là hoán vị thứ bao nhiêu nếu liệt kê theo thứ tự tăng dần (tính từ 1).

**Input**

Dòng đầu ghi số T là số bộ test (T < 10)

Mỗi bộ test gồm 2 dòng

*   Dòng đầu ghi số nguyên dương N (3 < N < 10)
*   Dòng tiếp theo ghi một hoán vị của các số nguyên dương từ 1 đến N.  

**Output**

Với mỗi bộ test, ghi ra trên một dòng số thứ tự của hoán vị (tính từ 1, theo thứ tự liệt kê tăng dần).

**Ví dụ**

### input
```
2
4
1 4 3 2
4
1 2 3 4
```

### output
```
6
1
```

## DSA01023 - SỐ THỨ TỰ TỔ HỢP

Cho một tổ hợp chập K của N số nguyên dương đầu tiên (2 < K < N < 15).

Hãy xác định xem đó là tổ hợp thứ bao nhiêu nếu liệt kê tất cả các tổ hợp theo thứ tự tăng dần (tính từ 1).

**Input**

Dòng đầu ghi số T là số bộ test (T < 10)

Mỗi bộ test gồm 2 dòng

*   Dòng đầu ghi 2 số nguyên dương N và K (2 < K < N < 15)
*   Dòng tiếp theo ghi một tổ hợp chập K của các số nguyên dương từ 1 đến N.  

**Output**

Với mỗi bộ test, ghi ra trên một dòng số thứ tự của tổ hợp (tính từ 1, theo thứ tự liệt kê tăng dần).

**Ví dụ**

### input
```
2
6 4
1 3 5 6
6 4
2 3 4 6
```

### output
```
9
12
```

## DSA01024 - ĐẶT TÊN - 1

Kỳ thi ICPC có K đội của PTIT tham gia và đội tuyển đang rất đau đầu không biết chọn các cái tên như thế nào cho các đội. Yêu cầu phải đảm bảo tên không có khoảng trống và không được trùng nhau. Sau khi thảo luận, có N cái tên được đề xuất (có thể bị trùng nhau). Với K<15 và 4 < N < 30.

Hãy liệt kê tất cả danh sách các tổ hợp K cái tên khác nhau có thể được tạo ra theo thứ tự từ điển.

**Input**

Dòng đầu ghi 2 số N và K.

Tiếp theo là 1 dòng ghi N cái tên, mỗi cái tên có độ dài không quá 15 và cách nhau một khoảng trống. Tất cả đều là ký tự in hoa.

**Output**

Ghi ra tất cả các tổ hợp tên có thể được lựa chọn theo thứ tự từ điển.

Tức là các tên trong mỗi tổ hợp liệt kê theo thứ tự từ điển và các tổ hợp cũng được liệt kê theo thứ tự từ điển.

**Ví dụ**

### input
```
6 2
DONG TAY NAM BAC TAY BAC
```

### ouput
```
BAC DONG
BAC NAM
BAC TAY
DONG NAM
DONG TAY
NAM TAY
```

## DSA01025 - ĐẶT TÊN - 2

Vương quốc PTIT sử dụng bảng chữ cái gồm N chữ cái Latinh viết hoa. Quy tắc đặt tên của gia đình Hoàng gia  PTIT là chọn ra K chữ cái (không trùng nhau) và sắp xếp lại theo thứ tự từ điển.

Hãy liệt kê tất cả các cái tên có thể có của gia đình Hoàng gia PTIT

**Input**

*   Dòng đầu ghi số bộ test T (không quá 10)
*   Mỗi bộ test ghi 2 số N và K (3 < K < N < 16)

**Output**

*   Với mỗi bộ test, ghi ra tất cả các cái tên có thể được tạo ra, mỗi kết quả viết trên một dòng.

**Ví dụ**

### input
```
1
4 2
```

### output
```
AB
AC
AD
BC
BD
CD
```

## DSA01026 - PHÁT LỘC

Một xâu ký tự số chỉ bao gồm các chữ số 6 và 8 sẽ được gọi là “phát lộc” nếu thỏa mãn các điều kiện sau:

*   Độ dài xâu ít nhất là 6
*   Chữ số đầu tiên là chữ số 8, chữ số cuối cùng là chữ số 6
*   Không có 2 chữ số 8 nào ở cạnh nhau
*   Không có nhiều hơn 3 chữ số 6 ở cạnh nhau.

Viết chương trình liệt kê các xâu ký tự phát lộc độ dài N theo thứ tự tăng dần.

**Input**

Chỉ có 1 dòng ghi số N (5 < N < 16).

**Output**

Ghi ra các xâu ký tự phát lộc độ dài N, mỗi xâu trên một dòng.

**Ví dụ**

### input
```
6
```

### output
```
866686
866866
868666
868686
```

## DSA01027 - HOÁN VỊ DÃY SỐ

Cho dãy số A\[\] có N phần tử là các số nguyên dương khác nhau từng đôi một. Hãy liệt kê tất cả các hoán vị của dãy số A\[\] theo thứ tự tăng dần, tức là hoán vị đầu tiên có giá trị tăng dần từ trái qua phải, hoán vị cuối cùng giảm dần từ trái qua phải.

**Input**

Dòng đầu ghi số N (1 < N < 9)

Dòng thứ 2 ghi N số của dãy A\[\] (0 < A\[i\] < 10000)

**Output**

Ghi mỗi hoán vị của dãy số trên một dòng

**Ví dụ**

### input
```
3
88 77 99
```

### output
```
77 88 99
77 99 88
88 77 99
88 99 77
99 77 88
99 88 77
```

## DSA01028 - LIỆT KÊ TỔ HỢP

Cho dãy số A\[\] có N phần tử. Hãy liệt kê tất cả các tổ hợp chập K của tập các phần tử khác nhau trong A\[\]. Các tổ hợp cần liệt kê theo thứ tự từ điển (tức là trong mỗi tổ hợp thì giá trị từ nhỏ đến lớn, và tổ hợp sau lớn hơn tổ hợp trước).

**Input**

Dòng đầu ghi hai số N và K.

Dòng thứ 2 ghi N số của mảng A\[\]. Các giá trị không quá 1000.

Dữ liệu đảm bảo số phần tử khác nhau của A\[\] không quá 20 và K không quá 10.

**Output**

Ghi ra lần lượt các tổ hợp tìm được, mỗi tổ hợp trên một dòng.

**Ví dụ**

### input
```
8 3
2 4 4 3 5 1 3 4
```

### output
```
1 2 3
1 2 4
1 2 5
1 3 4
1 3 5
1 4 5
2 3 4
2 3 5
2 4 5
3 4 5
```

## DSA02001 - DÃY SỐ 1

Cho dãy số A\[\] gồm n số nguyên dương. Tam giác đặc biệt của dãy số A\[\] là tam giác được tạo ra bởi n hàng, trong đó hàng thứ 1 là dãy số A\[\], hàng i là tổng hai phần tử liên tiếp của hàng i-1 (2≤i≤n). Ví dụ A\[\] = {1, 2, 3, 4, 5}, khi đó tam giác được tạo nên như dưới đây:

\[1, 2, 3, 4, 5 \]

\[3, 5, 7, 9 \]

\[8, 12, 16\]

\[20, 28\]

\[48\]

            **Input:**

*   Dòng đầu tiên đưa vào số lượng bộ test T.
*   Những dòng tiếp theo đưa vào các bộ test. Mỗi bộ test gồm hai dòng: dòng thứ nhất đưa vào N là số lượng phần tử của dãy số A\[\]; dòng tiếp theo đưa vào N số của mảng A\[\].
*   T, N, A\[i\] thỏa mãn ràng buộc: 1≤T≤100; 1≤N, A\[i\] ≤10;

**Output:**

*   Đưa ra tam giác tổng của mỗi test theo từng dòng. Mỗi dòng của tam giác tổng được bao bởi ký tự \[, \].

### input
```
1
5
1 2 3 4 5
```

### output
```
[1 2 3 4 5]
[3 5 7 9]
[8 12 16]
[20 28]
[48]
```

## DSA02002 - DÃY SỐ 2

Cho dãy số A\[\] gồm n số nguyên dương. Tam giác đặc biệt của dãy số A\[\] là tam giác được tạo ra bởi n hàng, trong đó hàng thứ n là dãy số A\[\], hàng i là tổng hai phần tử liên tiếp của hàng i+1 (1≤i≤n-1). Ví dụ A\[\] = {1, 2, 3, 4, 5}, khi đó tam giác được tạo nên như dưới đây:

\[48\]

\[20, 28\]

\[8, 12, 16\]     

\[3, 5, 7, 9 \]

\[1, 2, 3, 4, 5 \]

            **Input:**

*   Dòng đầu tiên đưa vào số lượng bộ test T.
*   Những dòng tiếp theo đưa vào các bộ test. Mỗi bộ test gồm hai dòng: dòng thứ nhất đưa vào N là số lượng phần tử của dãy số A\[\]; dòng tiếp theo đưa vào N số của mảng A\[\].
*   T, N, A\[i\] thỏa mãn ràng buộc: 1≤T≤100; 1≤N, A\[i\] ≤10;

**Output:**

*   Đưa ra kết quả mỗi test theo từng dòng. Mỗi dòng của tam giác tổng được bao bởi ký tự \[, \].

### input
```
1
5
1 2 3 4 5
```

### output
```
[48] [20 28] [8 12 16] [3 5 7 9] [1 2 3 4 5]
```

## DSA02003 - DI CHUYỂN TRONG MÊ CUNG 1

Cho một mê cung bao gồm các khối được biểu diễn như một ma trận nhị phân A\[N\]\[N\]. Một con chuột đi từ ô đầu tiên góc trái (A\[0\]\[0\]) đến ô cuối cùng góc phải (A\[N-1\]\[N-1\]) theo nguyên tắc:

*   Down (D): Chuột được phép xuống dưới nếu ô dưới nó có giá trị 1.
*   Right (R): Chuột được phép sang phải dưới nếu ô bên phải nó có giá trị 1.

Hãy đưa ra một hành trình của con chuột trên mê cung. Đưa ra -1 nếu chuột không thể đi đến đích.

**Input:**

*   Dòng đầu tiên đưa vào số lượng bộ test T.
*   Những dòng kế tiếp đưa vào các bộ test. Mỗi bộ test gồm hai phần: phần thứ nhất đưa vào số N là kích cỡ của mê cung; dòng tiếp theo đưa vào ma trận nhị phân A\[N\]\[N\].
*   T, N, A\[i\]\[j\] thỏa mãn ràng buộc: 1≤T ≤10; 2≤N≤10; 0≤A\[i\]\[j\] ≤1.

**Output:**

*   Đưa ra tất cả đường đi của con chuột trong mê cung theo thứ tự từ điển. Đưa ra -1 nếu chuột không đi được đến đích.

### input
```
2
4
1 0 0 0
1 1 0 1 
0 1 0 0 
1 1 1 1
5
1 0 0 0 0
1 1 1 1 1
1 1 0 0 1
0 1 1 1 1
0 0 0 1 1
```

### output
```
DRDDRR
DDRDRRDR DDRDRRRD DRDDRRDR DRDDRRRD DRRRRDDD
```

## DSA02005 - HOÁN VỊ XÂU KÝ TỰ

Cho xâu ký tự S bao gồm các ký tự in hoa khác nhau. Hãy đưa ra tất cả các hoán vị của xâu ký tự S. Ví dụ S=”ABC” ta có kết quả {ABC ACB BAC BCA CAB CBA}. 

**Input:**

*   Dòng đầu tiên đưa vào số lượng bộ test T.
*   Những dòng tiếp theo đưa vào các bộ test. Mỗi bộ test là một xâu ký tự S được viết trên 1 dòng.
*   T, S thỏa mãn ràng buộc: 1≤T≤10; 1≤length(S) ≤10;

**Output:**

*   Đưa ra kết quả mỗi test theo từng dòng.

### input
```
2  
AB
ABC
```

### output
```
AB BA
ABC ACB BAC BCA CAB CBA
```

## DSA02006 - DÃY CON TỔNG BẰNG K

Cho dãy số A\[\] = (a1, a2, .., an) và số tự nhiên K. Hãy đưa ra tất cả các dãy con của dãy số A\[\] sao cho tổng các phần tử của dãy con đó đúng bằng K. Các phần tử của dãy số A\[\] được giả thuyết là nguyên dương và không có các phần tử giống nhau. Ví dụ với dãy con A\[\] = {5, 10, 15, 20, 25}, K = 50 ta có 3 dãy con {5, 10, 15, 20}, {5, 20, 25}, {10, 15, 25}.

**Input:**

*   Dòng đầu tiên đưa vào số lượng bộ test T.
*   Những dòng kế tiếp đưa vào các bộ test. Mỗi bộ test gồm hai phần: phần thứ nhất đưa vào số N là số lượng phần tử của dãy số A\[\] và số K; dòng tiếp theo đưa vào N phần tử của dãy số A\[\].
*   T, N, A\[i\] thỏa mãn ràng buộc: 1≤T ≤100; 1≤N≤10; 1≤ K, A\[i\] ≤100.

**Output:**

*   Đưa ra tất cả các dãy con của dãy số A\[\] thỏa mãn yêu cầu bài toán theo thứ tự từ điển, trong đó mỗi dãy con được bao bởi các ký tự \[, \]. Nếu không có dãy con nào thỏa mãn yêu cầu bài toán, hãy đưa ra -1.

### input
```
2  
5 50
5  10 15 20  25  
8  53  
15  22  14  26  32  9  16  8
```

### output
```
[5 10 15 20] [5 20 25] [10 15 25]  
[8 9 14 22] [8 14 15 16] [15 16 22]
```

## DSA02012 - DI CHUYỂN TRONG MA TRẬN

Cho ma trận A\[M\]\[N\]. Nhiệm vụ của bạn là đếm tất cả các đường đi từ phần tử A\[0\]\[0\] đến phần tử A\[M-1\]\[N-1\]. Bạn chỉ được phép dịch chuyển xuống dưới hoặc sang phải phần tử liền kề với vị trí hiện tại.

**Input:**

*   Dòng đầu tiên đưa vào số lượng bộ test T.
*   Những dòng kế tiếp đưa vào các bộ test. Mỗi bộ test gồm hai phần: phần thứ nhất là hai số M, N tương ứng với số hàng và số cột của ma trận; dòng tiếp theo đưa vào các phần tử của ma trận A\[\]\[\]; các số được viết cách nhau một vài khoảng trống.
*   T, M, N, A\[i\]\[j\] thỏa mãn ràng buộc: 1≤T ≤10; 1≤M, N, A\[i\]\[j\]≤100.

**Output:**

*   Đưa ra số cách di chuyển của mỗi test theo từng dòng.
*   Giải thích test 1: Có 3 cách di chuyển là \[1 4 5 6\], \[1 2 5 6\] và \[1 2 3 6\].

### input
```
2  
2 3
1 2 3 
4 5 6  
2 2
1 2 
3 4
```

### output
```
3
2
```

## DSA02016 - SẮP XẾP QUÂN HẬU 1

Cho một bàn cờ vua có kích thước n * n, ta biết ràng quân hậu có thể di chuyển theo chiều ngang, dọc, chéo. Vấn đề đặt ra rằng, có n quân hậu, bạn cần đếm số cách đặt n quân hậu này lên bàn cờ sao cho với 2 quân hậu bất kì, chúng không “ăn” nhau.

Input: Dòng đầu ghi số bộ test T (T<5). Mỗi bộ test ghi một số nguyên dương n duy nhất (không quá 10)

Output:  Ghi kết quả mỗi bộ test trên một dòng. Số cách đặt quân hậu.

Ví dụ:

### input
```
1
4
```

### output
```
2
```

## DSA02022 - NGÀY ĐẶC BIỆT


Hôm nay là ngày 22/02/2022. Một ngày đặc biệt. Chỉ có hai chữ số là 0 và 2. Đồng thời viết xuôi viết ngược tám chữ số ta đều được cùng một kết quả.

Nhiệm vụ của bạn trong ngày đặc biệt này là hãy liệt kê hết tất cả các ngày hợp lệ chỉ có 2 chữ số 0 và 2.

Một số chú ý:

- Luôn có đủ 8 chữ số của ngảy tháng năm và hai dấu gạch chéo.
- Ngày và tháng có thể có chữ số 0 ở đầu nhưng với năm thì không được phép. Tức là ta chỉ tính các ngày bắt đầu từ năm 2000 trở về sau.


Bài toán không có dữ liệu vào. Bạn chỉ cần liệt kê kết quả gồm tất cả các ngày tháng hợp lệ. Coi dãy ký tự ngày tháng là một xâu ký tự. Hãy liệt kê theo đúng thứ tự từ điển tăng dần.


## DSA02023 - ĐẶT TÊN

Kỳ thi ICPC có K đội của PTIT tham gia và đội tuyển đang rất đau đầu không biết chọn các cái tên như thế nào cho các đội. Yêu cầu phải đảm bảo tên không có khoảng trống và không được trùng nhau. Sau khi thảo luận, có N cái tên được đề xuất (có thể bị trùng nhau). Với K<15 và 4 < N < 30.

Hãy liệt kê tất cả danh sách các tổ hợp K cái tên khác nhau có thể được tạo ra theo thứ tự từ điển.

**Input**

Dòng đầu ghi 2 số N và K.

Tiếp theo là 1 dòng ghi N cái tên, mỗi cái tên có độ dài không quá 15 và cách nhau một khoảng trống. Tất cả đều là ký tự in hoa.

**Output**

Ghi ra tất cả các tổ hợp tên có thể được lựa chọn theo thứ tự từ điển.

Tức là các tên trong mỗi tổ hợp liệt kê theo thứ tự từ điển và các tổ hợp cũng được liệt kê theo thứ tự từ điển.

### input
```
6 2
DONG TAY NAM BAC TAY BAC
```

### output
```
BAC DONG
BAC NAM
BAC TAY
DONG NAM
DONG TAY
NAM TAY
```

## DSA02024 - DÃY CON TĂNG DẦN

Cho dãy số a[] có n phần tử là các số nguyên dương khác nhau từng đôi một. Hãy liệt kê tất cả các dãy con có từ 2 phần tử trở lên của dãy a[] thỏa mãn tính chất tăng dần.

Dãy con tạo được bằng cách lấy ra các phần tử trong dãy a[] nhưng vẫn giữ nguyên thứ tự ban đầu.

Coi mỗi dãy con như một xâu ký tự với các phần tử cách nhau một khoảng trống, hãy liệt kê theo thứ tự từ điển.

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

## DSA02029 - THÁP HÀ NỘI

Bài toán Tháp Hà Nội đã rất nổi tiểng. Bắt đầu có các đĩa xếp chồng lên cột A theo thứ tự kích thước giảm dần, nhỏ nhất ở trên cùng. Cột B và cột C ban đầu không có đĩa nào cả.

Mục tiêu của bạn là di chuyển toàn bộ các đĩa theo đúng thứ tự về cột C, tuân theo các quy tắc sau:

- Mỗi lần chỉ có thể di chuyển một đĩa.
- Mỗi lần di chuyển sẽ lấy đĩa trên từ một trong các cột và đặt nó lên trên một cột khác.
- Không được đặt đĩa lên trên đĩa nhỏ hơn..

**Input**

Số tự nhiên  0 < N < 10

**Output**

In ra lần lượt từng bước theo mẫu trong ví dụ. Chú ý giữa các chữ cái và dấu -> có khoảng trống.

### input
```
3
```

### output
```
A -> C
A -> B
C -> B
A -> C
B -> A
B -> C
A -> C
```

## DSA02030 - LIỆT KÊ XÂU KÝ TỰ

Cho chữ cái c in hoa (‘A’ < c < ’K’) và số nguyên K (0 < K < (c – ‘A’)).

Hãy tìm cách  liệt kê tất cả các xâu ký tự khác nhau được tạo ra bởi các chữ cái tính từ ‘A’ đến ký tự c. Các ký tự được phép lặp lại nhưng không tính các xâu là hoán vị của xâu nào đó đã liệt kê trước đó.

Xem ví dụ để hiểu thêm yêu cầu đề bài.

**Input**

Chỉ có một dòng ghi chữ cái c và số nguyên K thỏa mãn ràng buộc đề bài.

**Output**

Ghi ra lần lượt các xâu ký tự kết quả theo thứ tự từ điển, mỗi xâu trên một dòng.

### input
```
D 2
```

### output
```
AA
AB
AC
AD
BB
BC
BD
CC
CD
DD
```

## DSA02031 - GHÉP CHỮ CÁI

Trong 8 chữ cái Tiếng Anh đầu tiên (ABCDEFGH) thì có 2 nguyên âm là ‘A’, ‘E’, còn lại là phụ âm.

Người ta muốn ghép các chữ cái bắt đầu từ chữ cái ‘A’ cho đến chữ cái c (‘D’ <= c <= ‘H’) sao cho mỗi chữ cái được sử dụng đúng một lần và xâu kết quả không có nguyên âm nào bị kẹp giữa bởi hai phụ âm.

Hãy liệt kê các xâu thỏa mãn theo thứ tự từ điển.

**Input**

Chỉ có một dòng ghi chữ cái c (đảm bảo từ ‘D’ đến ‘H’).

**Output**

Liệt kê các xâu thỏa mãn, mỗi xâu trên một dòng.

### input
```
D
```

### output
```
ABCD
ABDC
ACBD
ACDB
ADBC
ADCB
BCDA
BDCA
CBDA
CDBA
DBCA
DCBA
```

## DSA02033 - SỐ XA CÁCH

Cho số nguyên dương N (2 < N <10). Một số nguyên dương K có N chữ số được gọi là số xa cách nếu thỏa mãn:

*   K không chứa chữ số 0
*   Tất cả các chữ số từ 1 đến N đều xuất hiện trong K đúng 1 lần
*   Không có hai chữ số liên tiếp nào trong K có hiệu bằng 1. 

Hãy liệt kê tất cả các số thỏa mãn theo thứ tự tăng dần.

**Input**

*   Dòng đầu ghi số bộ test (không quá 10)
*   Mỗi bộ test là 1 số nguyên dương N (2 < N < 10)

**Output**

Liệt kê tất cả các số thỏa mãn, mỗi số trên một dòng.

Sau mỗi test in ra một khoảng trống.

**Ví dụ**

### input
```
2
3
4
```

### output
```
2413
3142
```

## DSA02034 - TRÒ CHƠI VỚI CÁC CON SỐ

Nam có N thẻ bài, mỗi thẻ ghi một con số từ 1 tới N. Không có 2 thẻ nào ghi hai số trùng nhau. Nam muốn xếp thứ tự các thẻ bài sao cho không có hai con số nào liền kề nhau ở cạnh nhau.

Ví dụ với N = 4 thì cách xếp 3142 là hợp lệ nhưng cách xếp 1324 không hợp lệ.

Hãy giúp Nam liệt kê tất cả các cách xếp thỏa mãn theo thứ tự từ điển.  

**Input**
- Dòng đầu ghi số bộ test T (không quá 10)
- Mỗi bộ test ghi số N (3 < N < 10)

**Output**
- Với mỗi bộ test, ghi ra tất cả các cách xếp thứ tự thỏa mãn, mỗi cách trên một dòng.

### input
```
1
4
```

### output
```
2413
3142
```

## DSA03001 - ĐỔI TIỀN

Tại ngân hàng có các mệnh giá bằng 1, 2, 5, 10, 20, 50, 100, 200, 500, 1000. Tổng số tiền cần đổi có giá trị bằng N.  Hãy xác định xem có ít nhất bao nhiêu tờ tiền sau khi đổi tiền?

**Input**:

Dòng đầu tiên là số lượng bộ test T (T ≤ 50).  Mỗi test gồm 1 số nguyên N ( 1 ≤ N ≤ 100 000).

**Output**: Với mỗi test, in ra đáp án trên một dòng.

### input
```
2
70
121
```

### output
```
2
3
```

## DSA04001 - LŨY THỪA

Cho số nguyên dương N và K. Hãy tính NK modulo 10<sup>9</sup>+7.

**Input:**

Dòng đầu tiên là số lượng bộ test T (T ≤ 20).

Mỗi test gồm 1 số nguyên N và K (1 ≤ N ≤ 1000, 1 ≤ K ≤ 10<sup>9</sup>).

**Output:**

Với mỗi test, in ra đáp án trên một dòng.

### input
```
2
2 3
4 2
```

### output
```
8
16
```

## DSA04002 - LŨY THỪA ĐẢO

Cho mảng số N. Ta gọi số đảo của N là R. Hãy tìm lũy thừa R của N. Đưa ra kết quả của bài toán dưới dạng modulo với 10<sup>9</sup> + 7.

**Input:**
- Dòng đầu tiên đưa vào số lượng bộ test T.
- Những dòng kế tiếp đưa vào các bộ test. Mỗi bộ test gồm là số N được ghi trên một dòng.
- T, N thỏa mãn ràng buộc: 1≤T≤100;  1≤N≤10<sup>10</sup>.

**Output:**
- Đưa ra kết quả mỗi test theo từng dòng.

### input
```
2
2
12
```

### output
```
4
864354781
```

## DSA04003 - ĐẾM DÃY

Cho số nguyên dương n. Hãy cho biết có bao nhiêu dãy số nguyên dương có tổng các phần tử trong dãy bằng n. 

**Dữ liệu vào:** dòng đầu tiên chứa số nguyên T là số bộ dữ liệu, mỗi bộ dữ liệu ghi một số nguyên dương n duy nhất không qua 1018. 

**Kết quả:** Mỗi bộ dữ liệu ghi ra một số nguyên duy nhất là số dư của kết quả tìm được khi chia cho 123456789.

### input
```
1
3
```

### output
```
4
```

## DSA04004 - GẤP ĐÔI DÃY SỐ

Một dãy số tự nhiên bắt đầu bởi con số 1 và được thực hiện N-1 phép biến đổi “gấp đôi” dãy số như sau:

Với dãy số A hiện tại, dãy số mới có dạng A, x, A trong đó x là số tự nhiên bé nhất chưa xuất hiện trong A.

Ví dụ với 2 bước biến đổi, ta có [1] - [1 2 1] - [1 2 1 3 1 2 1].

Các bạn hãy xác định số thứ K trong dãy số cuối cùng là bao nhiêu?

**Input:**

Dòng đầu tiên là số lượng bộ test T (T ≤ 20).

Mỗi test gồm số nguyên dương N và K (1 ≤ N ≤ 50, 1 ≤ K ≤ 2N - 1).

**Output:**

Với mỗi test, in ra đáp án trên một dòng.

### input
```
2
3 2
4 8
```

### output
```
2
4
```

## DSA04005 - DÃY XÂU FIBONACI

Một dãy xâu ký tự G chỉ bao gồm các chữ cái A và B được gọi là dãy xâu Fibonacci nếu thỏa mãn tính chất:    G(1) = A; G(2) = B; G(n) = G(n-2)+G(n-1). Với phép cộng (+) là phép nối hai xâu với nhau.  Bài toán đặt ra là tìm ký tự ở vị trí thứ i (tính từ 1) của xâu Fibonacci thứ n.

**Dữ liệu vào:** Dòng 1 ghi số bộ test. Mỗi bộ test ghi trên một dòng 2 số nguyên N và i (1<N<93). Số i đảm bảo trong phạm vi của xâu G(N) và không quá 18 chữ số. 

**Kết quả:** Ghi ra màn hình kết quả tương ứng với từng bộ test.

### input
```
2
6 4
8 19
```

### output
```
A
B
```

## DSA04010 - DÃY CON LIÊN TIẾP CÓ TỔNG LỚN NHẤT

Cho mảng A[] gồm N số có cả các số âm và số dương. Nhiệm vụ của bạn là tìm mảng con liên tục có tổng lớn nhất của mảng. Ví dụ với mảng A[]={-2, -5, 6, -2,-3, 1, 5, -6} ta có kết quả là 7 tương ứng với dãy con {6, -2, -3, 1, 5}.

**Input:**
- Dòng đầu tiên đưa vào số lượng bộ test T.
- Những dòng kế tiếp đưa vào các bộ test. Mỗi bộ test gồm 2 dòng: dòng thứ nhất đưa vào hai số N tương ứng với số phần tử của mảng; dòng tiếp theo đưa vào N số A[i]; các số được viết cách nhau một vài khoảng trống.
- T, N, A[i] thỏa mãn ràng buộc: 1≤T≤100;  1≤ N≤100; -100≤A[i] ≤100.

**Output:**
- Đưa ra tổng con liên tục lớn nhất của mỗi test theo từng dòng.


### input
```
1
8
-2 -5 6 -2 -3 1 5 -6
```

### output
```
7
```

## DSA04015 - TÍNH FLOOR(X)

Cho mảng đã được sắp xếp A[] gồm N phần tử không có hai phần tử giống nhau và số X. Nhiệm vụ của bạn là tìm floor(X). Trong đó, K=floor(X) là phần tử lớn nhất trong mảng A[] nhỏ hơn hoặc bằng X.

**Input:**
- Dòng đầu tiên đưa vào số lượng bộ test T.
- Những dòng kế tiếp đưa vào các bộ test. Mỗi bộ test gồm 2 dòng: dòng thứ nhất đưa vào số N là số phần tử của mảng A[] và số X; dòng tiếp theo đưa vào N số của mảng A[]; các số được viết cách nhau một vài khoảng trống.
- T, N, A[i] thỏa mãn ràng buộc: 1≤T≤100;  1≤ N≤10<sup>7</sup>; 1≤ A[i]≤10<sup>18</sup>.

**Output:**
- Đưa ra vị trí của  floor(X) trong mảng A[] hoặc -1 nếu không tồn tại floor(X) của mỗi test theo từng dòng.


### input
```
3
7 0
1 2 8 10 11 12 19
7 5
1 2 8 10 11 12 19
7 10
1 2 8 10 11 12 19
```

### output
```
-1
2
4
```

## DSA04016 - PHẦN TỬ THỨ K

Cho hai mảng đã được sắp xếp A[], B[] gồm M, N phần tử theo thứ tự và số K. Nhiệm vụ của bạn là tìm phần tử ở vị trí số K sau khi trộn hai mảng để nhận được một mảng được sắp xếp.

**Input:**
- Dòng đầu tiên đưa vào số lượng bộ test T.
- Những dòng kế tiếp đưa vào các bộ test. Mỗi bộ test gồm 3 dòng: dòng thứ nhất đưa vào số M, N, K; dòng tiếp theo đưa vào M số của mảng A[];dòng tiếp theo đưa vào N số của mảng B[];các số được viết cách nhau một vài khoảng trống.
- T, M,N, A[i], B[i] thỏa mãn ràng buộc: 1≤T≤100;  1≤ N, A[i], B[i]≤10<sup>6</sup>; 1≤ K≤N+M.

**Output:**
- Đưa ra giá trị phần tử thứ K của mỗi test theo từng dòng.

### input
```
1
5 4 5
2 3 6 7 9
1 4 8 10
```

### output
```
6
```

## DSA04017 - PHẦN TỬ KHÁC NHAU

Cho hai mảng đã được sắp xếp A[] và B[] gồm N và N-1 phần tử. Các phần tử của mảng A[] chỉ khác mảng B[] một phần tử duy nhất. Hãy tìm vị trí của phần tử khác nhau giữa A[] và B[].

**Input:**
- Dòng đầu tiên đưa vào số lượng bộ test T.
- Những dòng kế tiếp đưa vào các bộ test. Mỗi bộ test gồm 3 dòng: dòng thứ nhất đưa vào số N; dòng tiếp theo đưa vào N số của mảng A[];dòng tiếp theo đưa vào N-1 số của mảng B[]; các số được viết cách nhau một vài khoảng trống.
- T, N, A[i], B[i] thỏa mãn ràng buộc: 1≤T≤100;  1≤ N≤10<sup>7</sup>; 0≤ A[i]≤10<sup>18</sup>.

**Output:**
- Đưa ra kết quả mỗi test theo từng dòng.

### input
```
2
7
2 4 6 8 9 10 12
2 4 6 8 10 12
6
3 5 7 9 11 13
3 5 7 11 13
```

### output
```
5
4
```

## DSA04018 - ĐẾM SỐ 0

Cho mảng A[] gồm N phần tử chỉ bao gồm các số 0 và 1. Các số 0 được đặt trước các số 1. Hãy đếm các số 0 với thời gian log(N).

**Input:**
- Dòng đầu tiên đưa vào số lượng bộ test T.
- Những dòng kế tiếp đưa vào các bộ test. Mỗi bộ test gồm 2 dòng: dòng thứ nhất đưa vào số N; dòng tiếp theo đưa vào N số của mảng A[]; các số được viết cách nhau một vài khoảng trống.
- T, N, A[i] thỏa mãn ràng buộc: 1≤T≤100;  1≤ N≤1000; 0≤ A[i]≤1.

**Output:**
- Đưa ra kết quả mỗi test theo từng dòng.

### input
```
3
12
0 0 0 0 0 0 0 0 0 1 1 1 
5
0 0 0 0 0
6
1 1 1 1 1 1
```

### output
```
9
5
0
```

## DSA04020 - TÌM KIẾM NHỊ PHÂN

Cho dãy số A[] gồm có N phần tử đã được sắp xếp tăng dần và số K.

Nhiệm vụ của bạn là kiểm tra xem số K có xuất hiện trong dãy số hay không. Nếu có hãy in ra vị trí trong dãy A[], nếu không in ra “NO”.

**Input:**
- Dòng đầu tiên là số lượng bộ test T (T ≤ 10).
- Mỗi test bắt đầu bằng số nguyên N và K (N ≤ 100 000, 0 ≤ K ≤ 10<sup>6</sup>).
- Dòng tiếp theo gồm N số nguyên A[i] (0 ≤ A[i] ≤ 10<sup>6</sup>), các phần tử là riêng biệt.

**Output:**
- Với mỗi test in ra trên một dòng đáp án tìm được.

### input
```
2
5 3
1 2 3 4 5
6 5
0 1 2 3 9 10
```

### output
```
3
NO
```

## DSA04021 - DÃY XÂU NHỊ PHÂN

Người ta tạo ra một dãy xâu ký tự nhị phân X[] trong đó:

X[1] = “0”

X[2] = “1”

X[i] = X[i-2] + X[i-1] với i>2

Với phép cộng (+) là phép nối hai xâu với nhau. 

Cho hai số tự nhiên N và K (1<N<93; K đảm bảo trong phạm vi của xâu X[N]).

Hãy xác định ký tự thứ K trong xâu X[N] là ký tự ‘0’ hay ký tự ‘1’.

**Input:** Dòng 1 ghi số bộ test. Mỗi bộ test ghi trên một dòng 2 số nguyên N và K.

**Output:** Ghi ra màn hình kết quả tương ứng với từng bộ test.

### input
```
2
3 1
4 3
```

### output
```
0
1
```

## DSA04022 - KÝ TỰ THỨ K TRONG XÂU

Xâu ký tự S được tạo ra bằng cách bổ sung dần các ký tự chữ cái Tiếng Anh in hoa như sau.

- Bước 1: Chỉ có chữ cái A
- Bước 2: Thêm chữ cái B vào giữa 2 chữ A => S = "ABA"
- Bước 3: Thêm chữ cái C vào giữa 2 xâu đã có ở bước 2: S = "ABACABA"

Cứ như vậy cho đến bước thứ N (0 < N < 26)

Hãy xác định ký tự thứ K trong bước biến đổi thứ N là chữ cái gì?

**Input:**
- Dòng đầu tiên là số lượng bộ test T (T ≤ 20).
- Mỗi test gồm số nguyên dương N và K (1 ≤ N ≤ 25, 1 ≤ K ≤ 2N - 1).

**Output:**
- Với mỗi test, in ra đáp án trên một dòng.

### input
```
2
3 2
4 8
```

### output
```
B
D
```

## DSA04024 - LŨY THỪA MA TRẬN 2

Cho ma trận vuông A kích thước N x N. Nhiệm vụ của bạn là hãy tính ma trận X = AK với K là số nguyên cho trước. Sau đó, tính tổng các phần tử của cột cuối cùng. Đáp số có thể rất lớn, hãy in ra kết quả theo modulo 10<sup>9</sup>+7.

**Input:**

Dòng đầu tiên là số lượng bộ test T (T ≤ 100).

Mỗi test bắt gồm một số nguyên N và K (1 ≤ N ≤ 10, 1 ≤ K ≤ 10<sup>9</sup>) là kích thước của ma trận và số mũ.

**Output:** 

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
581039956
```

## DSA04025 - DÃY SỐ VÔ HẠN

Dãy số nguyên dương vô hạn A[] được định nghĩa một cách đệ quy như sau:

A[0] = 0

A[1] = 1;

A[i] = A[i-1] + A[i-2] với mọi n ≥ 2.

Cho số nguyên dương N không quá 109. Hãy xác định số thứ N trong dãy A[]. Nếu kết quả quá lớn, hãy in ra theo modulo 10<sup>9</sup>+7.

**Input:**
- Dòng đầu tiên là số lượng bộ test T (T ≤ 1000).
- Mỗi test bắt gồm một số nguyên N (1 ≤ N ≤ 10<sup>9</sup>).

**Output:**
- Với mỗi test, in ra đáp án trên một dòng.

### input
```
2
2
6
```

### output
```
1
8
```

## DSA04035 - TÍNH LŨY THỪA

Cho hai số nguyên không âm a và b. Hãy tính ab.

Nếu kết quả quá lớn hãy chia dư cho 10<sup>9</sup> + 7.

**Input**

Gồm không quá 20 bộ test, mỗi test ghi trên một dòng hai số a,b; a không quá 9 chữ số, b không quá 18 chữ số.

Input kết thúc khi a = b = 0

**Output**

Với mỗi test ghi ra kết quả tính được trên một dòng.

### input
```
2 3
2 4
3 2
0 0
```

### output
```
8
16
9
```

## DSA05009 - TẬP CON BẰNG NHAU

Cho tập các số A[] = (a1, a2, .., an). Hãy kiểm tra xem ta có thể chia tập A[] thành hai tập con sao cho tổng các phần tử của hai tập con bằng nhau hay không. Đưa ra YES nếu có thể thực hiện được, ngược lại đưa ra NO.

**Input:**
- Dòng đầu tiên đưa vào số lượng bộ test T.
- Những dòng kế tiếp đưa vào các bộ test. Mỗi bộ test gồm hai phần: phần thứ nhất đưa vào số N là số lượng phần tử của dãy số A[]; dòng tiếp theo đưa vào N phần tử của dãy số A[].
- T, N, A[i] thỏa mãn ràng buộc: 1≤T ≤100; 1≤N≤100; 1≤ A[i] ≤100.

**Output:**
- Đưa ra kết quả mỗi test theo từng dòng.

### input
```
2
4
1 5 11 5
3
1 3 5 
```

### output
```
YES
NO
```

## DSA06001 - SẮP XẾP XEN KẼ

Cho mảng A[] gồm n số nguyên khác nhau. Hãy đưa ra các phần tử của mảng theo khuôn dạng lớn nhất, nhỏ nhất, lớn thứ hai, nhỏ thứ 2, … Ví dụ với A[] = {9, 7, 12, 8, 6, 5} ta đưa ra : 12, 5, 9, 6, 8, 7.

**Input:**
- Dòng đầu tiên đưa vào số lượng bộ test T.
- Những dòng kế tiếp đưa vào T bộ test. Mỗi bộ test gồm hai dòng: dòng đầu tiên là số phần tử của mảng n; dòng tiếp theo là n số A [i] của mảng A [];các số được viết cách nhau một vài khoảng trống.
- T, n thỏa mãn ràng buộc: 1≤ T ≤100; 1≤ n ≤10<sup>3</sup>.

**Output:**
- Đưa ra kết quả mỗi test theo từng dòng.

### input
```
2
7
7 1 2 3 4 5 6
8
1 6 9 4 3 7 8 2
```

### output
```
7 1 6 2 5 3 4
9 1 8 2 7 3 6 4
```

## DSA06002 - SẮP XẾP THEO GIÁ TRỊ TUYỆT ĐỐI

Cho mảng A[] gồm n phần tử và số X. Hãy đưa sắp xếp các phần tử của mảng theo trị tuyệt đối của |X - A[i] |. Ví dụ với A[] = {10, 5, 3, 9, 2} và X = 7 ta đưa ra mảng được sắp xếp theo nguyên tắc kể trên: A[] = {5, 9, 10, 3, 2} vì |7-10|=3, |7-5|=2, |7-3|=4, |7-9|=2, |7-2|=5.

**Input:**
- Dòng đầu tiên đưa vào số lượng bộ test T.
- Những dòng kế tiếp đưa vào T bộ test. Mỗi bộ test gồm hai dòng: dòng đầu tiên là số phần tử của mảng n và X; dòng tiếp theo là n số A [i] của mảng A [];các số được viết cách nhau một vài khoảng trống.
- T, n, X thỏa mãn ràng buộc: 1≤ T ≤100; 1≤ n, X, A[i] ≤10<sup>5</sup>.

**Output:**
- Đưa ra kết quả mỗi test theo từng dòng.

### input
```
2
5 7
10 5 3 9 2
5 6
1 2 3 4 5
```

### output
```
5 9 10 3 2
5 4 3 2 1
```

## DSA06003 - ĐỔI CHỖ ÍT NHẤT

Cho mảng A[] gồm n phần tử. Hãy tìm số phép đổi chỗ ít nhất giữa các phần tử của mảng để mảng A[] được sắp xếp. Ví dụ với A[] = {4, 3, 2, 1} ta cần thực hiện ít nhất 2 phép đổi chỗ: Swap(A[0], A[3]),  Swap(A[1], A[2]).

**Input:**
- Dòng đầu tiên đưa vào số lượng bộ test T.
- Những dòng kế tiếp đưa vào T bộ test. Mỗi bộ test gồm hai dòng: dòng đầu tiên là số phần tử của mảng n và X; dòng tiếp theo là n số A [i] của mảng A [];các số được viết cách nhau một vài khoảng trống.
- T, n thỏa mãn ràng buộc: 1≤ T ≤100; 1≤ n ≤10<sup>3</sup>.

**Output:**
- Đưa ra kết quả mỗi test theo từng dòng.

### input
```
2
4
4 3 2 1
5
1 5 4 3 2
```

### output
```
2
2
```

## DSA06004 - HỢP VÀ GIAO CỦA HAI DÃY SỐ 1

Cho mảng A[] gồm n phần tử, mảng B[] gồm m phần tử khác nhau. Các phần tử của mảng A[] và B[] đã được sắp xếp. Hãy tìm mảng hợp và giao được sắp giữa A[] và B[]. Ví dụ với A[] = {1, 3, 4, 5, 7}, B[]={2, 3, 5, 6} ta có mảng hợp Union = {1, 2, 3, 4, 5, 6, 7}, mảng giao Intersection = {3, 5}. In ra đáp án theo giá trị phần tử từ nhỏ đến lớn.

**Input:**
- Dòng đầu tiên đưa vào số lượng bộ test T.
- Những dòng kế tiếp đưa vào T bộ test. Mỗi bộ test gồm ba dòng: dòng đầu tiên đưa vào n, m là số phần tử của mảng A[] và B[]; dòng tiếp theo là n số A [i] của mảng A [];dòng tiếp theo là m số B[i] của mảng B[]; các số được viết cách nhau một vài khoảng trống.
- T, n, m, A[i], B[i] thỏa mãn ràng buộc: 1≤ T ≤100; 1≤ n, m, A[i], B[i] ≤10<sup>5</sup>.

**Output:**
- Đưa ra kết quả mỗi test theo từng dòng.

### input
```
1
5 3
1 2 3 4 5
1 2 3
```

### output
```
1 2 3 4 5
1 2 3
```

## DSA06005 - HỢP VÀ GIAO CỦA HAI DÃY SỐ 2

Cho mảng A[] gồm n phần tử, mảng B[] gồm m phần tử khác nhau. Các phần tử của mảng A[] và B[] chưa được sắp xếp. Hãy tìm mảng hợp và giao được sắp giữa A[] và B[]. Ví dụ với A[] = {7, 1, 5, 2, 3, 6}, B[]={3, 8, 6, 20, 7} ta có mảng hợp Union = {1, 2, 3, 5, 6, 7, 8, 20}, mảng giao Intersection = {3, 6}.

**Input:**
- Dòng đầu tiên đưa vào số lượng bộ test T.
- Những dòng kế tiếp đưa vào T bộ test. Mỗi bộ test gồm ba dòng: dòng đầu tiên đưa vào n, m là số phần tử của mảng A[] và B[]; dòng tiếp theo là n số A [i] của mảng A [];dòng tiếp theo là m số B[i] của mảng B[]; các số được viết cách nhau một vài khoảng trống.
- T, n, m, A[i], B[i] thỏa mãn ràng buộc: 1≤ T ≤100; 1≤ n, m, A[i], B[i] ≤10<sup>5</sup>.

**Output:**
- Đưa ra kết quả mỗi test theo từng dòng.

### input
```
1
6 5
7 1 5 2 3 6
3 8 6 20 7
```

### output
```
1 2 3 5 6 7 8 20
2 6
```

## DSA06006 - SẮP XẾP [0 1 2]

Cho mảng A[] gồm n phần tử. Các phần tử của mảng A[] chỉ bao gồm các số 0, 1, 2. Hãy sắp xếp mảng A[] theo thứ tự tăng dần. Ví dụ với A[] = {0, 2, 1, 2, 0} ta kết quả A[] = {0, 0, 1, 2, 2}.

**Input:**
- Dòng đầu tiên đưa vào số lượng bộ test T.
- Những dòng kế tiếp đưa vào T bộ test. Mỗi bộ test gồm hai dòng: dòng đầu tiên đưa vào n là số phần tử của mảng A[]; dòng tiếp theo là n số A [i] của mảng A []các số được viết cách nhau một vài khoảng trống.
- T, n, A[i] thỏa mãn ràng buộc: 1≤ T ≤100; 0≤ A[i] ≤2; 1≤ n ≤10<sup>6</sup>.

**Output:**
- Đưa ra kết quả mỗi test theo từng dòng.

### input
```
2
5
0 2 1 2 0
3
0 1 0
```

### output
```
0 0 1 2 2
0 1
```

## DSA06007 - SẮP XẾP DÃY CON LIÊN TỤC

Cho mảng A[] gồm n phần tử. Hãy tìm dãy con liên tục của mảng A[R], .., A[L] sao cho khi sắp xếp lại dãy con ta nhận được một mảng được sắp xếp. Ví dụ với A[] = {10, 12, 20, 30, 25, 40, 32, 31, 35, 50, 60} ta chỉ cần sắp xếp lại dãy con từ A[4],.., A[9]: {30, 25, 40, 32, 31, 35} để có mảng được sắp.

**Input:**
- Dòng đầu tiên đưa vào số lượng bộ test T.
- Những dòng kế tiếp đưa vào T bộ test. Mỗi bộ test gồm hai dòng: dòng đầu tiên đưa vào n là số phần tử của mảng A[]; dòng tiếp theo là n số A [i] của mảng A []các số được viết cách nhau một vài khoảng trống.
T, n, A[i] thỏa mãn ràng buộc: 1≤ T ≤100; 1≤ n ≤10<sup>6</sup>; 0≤ A[i] ≤10<sup>7</sup>.
- T, N thỏa mãn ràng buộc: 1≤T≤100;  1≤N≤1010.

**Output:**
- Đưa ra kết quả mỗi test theo từng dòng.

### input
```
2
11
10 12 20 30 25 40 32 31 35 50 60
9
0 1 15 25 6 7 30 40 50
```

### output
```
4 9
3 6
```

## DSA06008 - ĐẾM CẶP

Cho mảng X[] gồm n phần tử và mảng Y[] gồm m phần tử. Hãy đếm số các cặp xy>yx, trong đó x€X[] và y€Y[]. Ví dụ X[] = {2, 1, 6 }, Y[] = {1, 5} ta có kết quả là 3 cặp (2, 1), (2, 5), (6, 1).

**Input:**
- Dòng đầu tiên đưa vào số lượng bộ test T.
- Những dòng kế tiếp đưa vào T bộ test. Mỗi bộ test gồm ba dòng: dòng đầu tiên đưa vào n, m tương ứng với số phần tử của mảng X[] và Y[]; dòng tiếp theo là n số X[i] của mảng X[]; dòng cuối cùng là m số của mảng Y[]; các số được viết cách nhau một vài khoảng trống.
- T, n, m, X[i], Y[j] thỏa mãn ràng buộc: 1≤ T ≤100; 1≤ n, m ≤10<sup>5</sup>; 0≤ X[i], Y[j] ≤10<sup>3</sup>.

**Output:**
- Đưa ra kết quả mỗi test theo từng dòng.

### input
```
1
3 2
2 1 6
1 5
```

### output
```
3
```

## DSA06009 - CẶP SỐ TỔNG BẰNG K

Cho mảng A[] gồm n phần tử và số k. Đếm tất cả các cặp phần tử của mảng có tổng bằng k. Ví dụ A[] = {1, 5, 3, 4, 2 }, k = 7 ta có kết quả là 2 cặp (3, 4), (5, 2).

**Input:**
- Dòng đầu tiên đưa vào số lượng bộ test T.
- Những dòng kế tiếp đưa vào T bộ test. Mỗi bộ test gồm hai dòng: dòng đầu tiên đưa vào n là số phần tử của mảng A[] và k; dòng tiếp theo là n số A[i] của mảng A[]các số được viết cách nhau một vài khoảng trống.
- T, n, k, A[i] thỏa mãn ràng buộc: 1≤ T ≤100; 1≤ n ≤100; 0≤ k ≤100, 0≤ A[i] ≤10<sup>3</sup>.

**Output:**
- Đưa ra kết quả mỗi test theo từng dòng.

### input
```
2
5 9 
1 5 4 1 2
3 2
1 1 1
```

### output
```
1
3
```

## DSA06010 - SẮP XẾP CHỮ SỐ

Cho mảng A[] gồm n phần tử. Nhiệm vụ của bạn là đưa ra mảng đã được sắp xếp bao gồm các chữ số của mỗi phần tử trong A[]. Ví dụ A[] = {110, 111, 112, 113, 114 }ta có kết quả là {0, 1, 2, 3, 4}.

**Input:**
- Dòng đầu tiên đưa vào số lượng bộ test T.
- Những dòng kế tiếp đưa vào T bộ test. Mỗi bộ test gồm hai dòng: dòng đầu tiên đưa vào n là số phần tử của mảng A[]; dòng tiếp theo là n số A[i] ; các số được viết cách nhau một vài khoảng trống.
- T, n, A[i] thỏa mãn ràng buộc: 1≤ T ≤100; 1≤ n ≤10<sup>7</sup>; 0≤ A[i] ≤10<sup>16</sup>.

**Output:**
- Đưa ra kết quả mỗi test theo từng dòng.

### input
```
2
3
131 11 48
4
111 222 333 446
```

### output
```
1 3 4 8
1 2 3 4 6
```

## DSA06011 - TỔNG GẦN 0 NHẤT

TỔNG GẦN 0 NHẤT

**Input:**
- Dòng đầu tiên đưa vào số lượng bộ test T.
- Những dòng kế tiếp đưa vào các bộ test. Mỗi bộ test gồm hai dòng: dòng thứ nhất đưa vào n là số phần tử của mảng A[]; dòng tiếp theo đưa vào n số A[i]; các số được viết cách nhau một vài khoảng trống.
- T, n, A[i] thỏa mãn ràng buộc: 1≤T≤100; 2≤N ≤10<sup>3</sup>, -10<sup>6</sup>≤A[i] ≤10<sup>6</sup>.

**Output:**
- Đưa ra tổng gần nhất với 0 của cặp phần tử.

### input
```
2
3
-8 -66 -60
6
-21 -67 -37 -18 4 -65  
```

### output
```
-68
-14
```

## DSA06012 - PHẦN TỬ LỚN NHẤT

Cho mảng A[] gồm n phần tử, hãy tìm k phần tử lớn nhất của mảng. Các phần tử được đưa ra theo thứ tự giảm dần.

**Input:**
- Dòng đầu tiên đưa vào số lượng bộ test T.
- Những dòng kế tiếp đưa vào các bộ test. Mỗi bộ test gồm hai dòng: dòng thứ nhất đưa vào N và K; dòng tiếp theo đưa vào n số A[i]; các số được viết cách nhau một vài khoảng trống.
- T, N, K, A[i] thỏa mãn ràng buộc: 1≤T≤100; 1≤K < N ≤10<sup>3</sup>, 1≤A[i] ≤10<sup>6</sup>.

**Output:**
- Đưa ra k phần tử lớn nhất trên một dòng.

### input
```
2
5 3
10 7 9 12 6
6 2
9 7 12 8 6 5
```

### output
```
12 10 9
12 9
```

## DSA06013 - SỐ LẦN XUẤT HIỆN

Cho mảng A[] gồm n phần tử đã được sắp xếp. Hãy tìm số lần xuất hiện số X trong mảng. Nếu số lần xuất hiện số x trong mảng là 0 hãy đưa ra -1.

**Input:**
- Dòng đầu tiên đưa vào số lượng bộ test T.
- Những dòng kế tiếp đưa vào các bộ test. Mỗi bộ test gồm hai dòng: dòng thứ nhất đưa vào N và X; dòng tiếp theo đưa vào n số A[i]; các số được viết cách nhau một vài khoảng trống.
- T, N, X, A[i] thỏa mãn ràng buộc: 1≤T≤100; 1≤ N ≤10<sup>3</sup>, 1≤A[i], X ≤106.

**Output:**
- Đưa ra kết quả mỗi test theo từng dòng.

### input
```
2
7 2
1 1 2 2 2 2 3
7 4
1 1 2 2 2 2 3
```

### output
```
4
-1
```

## DSA06014 - TỔNG CẶP SỐ NGUYÊN TỐ

Cho số tự nhiên N. Hãy tìm cặp số nguyên tố đầu tiên có tổng là N. Nếu không tồn tại cặp số nguyên tố có tổng bằng N, hãy đưa ra -1.

**Input:**
- Dòng đầu tiên đưa vào số lượng bộ test T.
- Những dòng kế tiếp đưa vào các bộ test. Mỗi bộ test gồm là một số N được ghi trên một dòng.
- T, N thỏa mãn ràng buộc: 1≤T≤100; 1≤ N ≤10<sup>6</sup>.

**Output:**
- Đưa ra kết quả mỗi test theo từng dòng.

### input
```
2
4
8
```

### output
```
2 2
2 5
```

