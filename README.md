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

## DSA01003 - HOÁN VỊ KẾ TIẾP

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


### input
```
2
4 3
5 3
```

### output
```
123 124 134 234
123 124 125 134 135 145 234 235 245 345
```

## DSA01005 - SINH HOÁN VỊ

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

## DSA06015 - MERGE SORT

Cho mảng A[] gồm N phần tử chưa được sắp xếp. Nhiệm vụ của bạn là sắp xếp các phần tử của mảng A[] theo thứ tự tăng dần bằng thuật toán Merge Sort.

**Input:**
- Dòng đầu tiên đưa vào số lượng bộ test T.
- Những dòng kế tiếp đưa vào các bộ test. Mỗi bộ test gồm hai phần: phần thứ nhất đưa vào số N tương ứng với số phần tử của mảng A[]; phần thứ 2 là N số của mảng A[]; các số được viết cách nhau một vài khoảng trống.
- T, N, A[i] thỏa mãn ràng buộc: 1≤T≤100;  1≤N, A[i]≤10<sup>6</sup>.

**Output:**
- Đưa ra kết quả mỗi test theo từng dòng.

### input
```
2
5
4 1 3 9 7
10
10 9 8 7 6 5 4 3 2 1
```

### output
```
1 3 4 7 9
1 2 3 4 5 6 7 8 9 10
```

## DSA06016 - TÍCH LỚN NHẤT - NHỎ NHẤT

Cho mảng A[] gồm n phần tử và mảng B[] gồm m phần tử. Nhiệm vụ của bạn là tìm tích giữa phần tử lớn nhất của mảng A[] và phần tử nhỏ nhất của mảng B[]. Ví dụ A[] = {5, 7, 112, 9, 3, 6, 2 }, B[] = {1, 2, 6, -1, 0, 9} ta có kết quả là -9 = 9*(-1).

**Input:**
- Dòng đầu tiên đưa vào số lượng bộ test T.
- Những dòng kế tiếp đưa vào T bộ test. Mỗi bộ test gồm ba dòng: dòng đầu tiên đưa vào n, m tương ứng với số phần tử của mảng A[] và B[]; dòng tiếp theo là n số A[i] ; dòng cuối cùng là m số B[i]; các số được viết cách nhau một vài khoảng trống.
- T, n, m, A[i], B[i] thỏa mãn ràng buộc: 1≤ T ≤100; 1≤ n, m ≤10<sup>6</sup>; -10<sup>8</sup>≤ A[i] ≤10<sup>8</sup>.

**Output:**
- Đưa ra kết quả mỗi test theo từng dòng.

### input
```
2
6 6
5 7 9 3 6 2
1 2 6 -1 0 9
6 6
1 4 2 3 10 2
4 2 6 5 2 9
```

### output
```
-9
20
```

## DSA06017 - TRỘN HAI DÃY

Cho mảng A[] gồm n phần tử và mảng B[] gồm m phần tử. Nhiệm vụ của bạn là hợp nhất hai mảng A[] và B[] để được một mảng mới đã được sắp xếp. Ví dụ A[] = {5, 7, 112, 9, 3, 6, 2 }, B[] = {1, 2, 6, -1, 0, 9} ta có kết quả là C[] = {-1, 1, 0, 2, 3, 5, 6, 6, 7, .

**Input:**
- Dòng đầu tiên đưa vào số lượng bộ test T.
- Những dòng kế tiếp đưa vào T bộ test. Mỗi bộ test gồm ba dòng: dòng đầu tiên đưa vào n, m tương ứng với số phần tử của mảng A[] và B[]; dòng tiếp theo là n số A[i] ; dòng cuối cùng là m số B[i]; các số được viết cách nhau một vài khoảng trống.
- T, n, m, A[i], B[i] thỏa mãn ràng buộc: 1≤ T ≤100; 1≤ n, m ≤10<sup>6</sup>; -10<sup>8</sup>≤ A[i] ≤10<sup>8</sup>.

**Output:**
- Đưa ra kết quả mỗi test theo từng dòng.

### input
```
1
3 3
10 5 15
20 3 2
```

### output
```
2 3 5 10 15 20
```

## DSA06018 - BỔ SUNG PHẦN TỬ

Cho mảng A[] gồm n số nguyên dương. Gọi L, R là max và min các phần tử của A[]. Nhiệm vụ của bạn là tìm số phần tử cần thiết cần thêm vào mảng để mảng có đầy đủ các số trong khoảng [L, R]. Ví dụ A[] = {5, 7, 9, 3, 6, 2 } ta nhận được kết quả là 2 tương ứng với các số còn thiếu là 4, 8.

**Input:**
- Dòng đầu tiên đưa vào số lượng bộ test T.
- Những dòng kế tiếp đưa vào T bộ test. Mỗi bộ test gồm hai dòng: dòng đầu tiên đưa vào n, tương ứng với số phần tử của mảng A[]; dòng tiếp theo là n số A[i] ; các số được viết cách nhau một vài khoảng trống.
- T, n, A[i] thỏa mãn ràng buộc: 1≤ T ≤100; 1≤ n, A[i] ≤10<sup>3</sup>.

**Output:**
- Đưa ra kết quả mỗi test theo từng dòng.

### input
```
2
5
4 5 3 8 6
3
2 1 3
```

### output
```
1
0
```

## DSA06019 - SẮP XẾP THEO SỐ LẦN XUẤT HIỆN

Cho mảng A[] gồm n số nguyên. Nhiệm vụ của bạn là sắp xếp mảng theo số lần xuất hiện các phần tử của mảng. Số xuất hiện nhiều lần nhất đứng trước. Nếu hai phần tử có số lần xuất hiện như nhau, số nhỏ hơn đứng trước. Ví dụ A[] = {5, 5, 4, 6, 4 }, ta nhận được kết quả là A[] = {4, 4, 5, 5, 6}.

**Input:**
- Dòng đầu tiên đưa vào số lượng bộ test T.
- Những dòng kế tiếp đưa vào T bộ test. Mỗi bộ test gồm hai dòng: dòng đầu tiên đưa vào n, tương ứng với số phần tử của mảng A[] và số k; dòng tiếp theo là n số A[i] ; các số được viết cách nhau một vài khoảng trống.
- T, n, A[i] thỏa mãn ràng buộc: 1≤ T ≤100; 1≤ n ≤10<sup>4</sup>; 1≤ k ≤10<sup>3</sup>; 1≤ A[i] ≤10<sup>5</sup>.

**Output:**
- Đưa ra kết quả mỗi test theo từng dòng.

### input
```
2
5
5 5 4 6 4
5
9 9 9 2 5
```

### output
```
4 4 5 5 6
9 9 9 2 5
```

## DSA06020 - TÌM KIẾM

Cho mảng A[] gồm n phần tử đã được sắp xếp. Hãy đưa ra 1 nếu X có mặt trong mảng A[], ngược lại đưa ra -1.

**Input:**
- Dòng đầu tiên đưa vào số lượng bộ test T.
- Những dòng kế tiếp đưa vào các bộ test. Mỗi bộ test gồm hai dòng: dòng thứ nhất đưa vào n, X là số các phần tử của mảng A[] và số X cần tìm; dòng tiếp theo đưa vào n số A[i] (1≤i≤n) các số được viết cách nhau một vài khoảng trống.
- T, n, A, X thỏa mãn ràng buộc: 1≤T≤100; 1≤N, X, A[i] ≤10<sup>6</sup>.

**Output:**
- Đưa ra kết quả mỗi test theo từng dòng.

### input
```
2 
5 16
2 4 7 9 16
7 98
1 22 37 47 54 88 96
```

### output
```
1
-1
```

## DSA06021 - TÌM KIẾM TRONG DÃY SẮP XẾP VÒNG

Một mảng được sắp được chia thành hai đoạn tăng dần được gọi là mảng sắp xếp vòng. Ví dụ mảng A[] = { 5, 6, 7, 8, 9, 10, 1, 2, 3, 4} là mảng sắp xếp vòng. Cho mảng A[] gồm n phần tử, hãy tìm vị trí của phần tử x trong mảng A[] với thời gian log(n).

**Input:**
- Dòng đầu tiên đưa vào số lượng bộ test T.
- Những dòng kế tiếp đưa vào các bộ test. Mỗi bộ test gồm hai dòng: dòng thứ nhất đưa vào n và x; dòng tiếp theo đưa vào n số A[i]; các số được viết cách nhau một vài khoảng trống.
- T, n, A[i], x  thỏa mãn ràng buộc: 1≤T≤100; 1≤N, x, A[i] ≤10<sup>7</sup>.

**Output:**
- Đưa ra kết quả mỗi test theo từng dòng.

### input
```
2
10 3
5 6 7 8 9 10 1 2 3 4
10 3
1 2 3 4 5 6 7 8 9 10
```

### output
```
9
3
```

## DSA06022 - SỐ NHỎ NHẤT VÀ NHỎ THỨ HAI

Cho mảng A[] gồm n phần tử, hãy đưa ra số nhỏ nhất và số nhỏ thứ hai của mảng. Nếu không có số nhỏ thứ hai, hãy đưa ra -1.

**Input:**
- Dòng đầu tiên đưa vào số lượng bộ test T.
- Những dòng kế tiếp đưa vào các bộ test. Mỗi bộ test gồm hai dòng: dòng thứ nhất đưa vào n là số phần tử của mảng A[]; dòng tiếp theo đưa vào n số A[i]; các số được viết cách nhau một vài khoảng trống.
- T, n, A[i] thỏa mãn ràng buộc: 1≤T≤100; 1≤N, A[i] ≤10<sup>7</sup>.

**Output:**
- Đưa ra kết quả mỗi test theo từng dòng.

### input
```
2
10
5 6 7 8 9 10 1 2 3 4
5
1 1 1  1  1
```

### output
```
1 2
-1
```

## DSA06023 - SẮP XẾP ĐỔI CHỖ TRỰC TIẾP

Hãy thực hiện thuật toán sắp xếp đổi chỗ trực tiếp trên dãy N số nguyên. Ghi ra các bước thực hiện thuật toán.

**Input:**
Dòng 1 ghi số N (không quá 100). Dòng 2 ghi N số nguyên dương (không quá 100).

**Output:**
Ghi ra màn hình từng bước thực hiện thuật toán. Mỗi bước trên một dòng, các số trong dãy cách nhau đúng một khoảng trống.

### input
```
4
5 7 3 2
```

### output
```
Buoc 1: 2 7 5 3
Buoc 2: 2 3 7 5
Buoc 3: 2 3 5 7
```

## DSA06024 - SẮP XẾP CHỌN

Hãy thực hiện thuật toán sắp xếp chọn trên dãy N số nguyên. Ghi ra các bước thực hiện thuật toán.

**Input:**
Dòng 1 ghi số N (không quá 100). Dòng 2 ghi N số nguyên dương (không quá 100).

**Output:**
Ghi ra màn hình từng bước thực hiện thuật toán. Mỗi bước trên một dòng, các số trong dãy cách nhau đúng một khoảng trống.

### input
```
4
5 7 3 2
```

### output
```
Buoc 1: 2 7 3 5
Buoc 2: 2 3 7 5
Buoc 3: 2 3 5 7
```

## DSA06025 - SẮP XẾP CHÈN

Hãy thực hiện thuật toán sắp xếp chọn trên dãy N số nguyên. Ghi ra các bước thực hiện thuật toán.

**Input:**
Dòng 1 ghi số N (không quá 100). Dòng 2 ghi N số nguyên dương (không quá 100).

**Output:**
Ghi ra màn hình từng bước thực hiện thuật toán. Mỗi bước trên một dòng, các số trong dãy cách nhau đúng một khoảng trống.

### input
```
4
5 7 3 2
```

### output
```
Buoc 0: 5
Buoc 1: 5 7
Buoc 2: 3 5 7
Buoc 3: 2 3 5 7
```

## DSA06026 - SẮP XẾP NỔI BỌT

Hãy thực hiện thuật toán sắp xếp chọn trên dãy N số nguyên. Ghi ra các bước thực hiện thuật toán.

**Input:**
Dòng 1 ghi số N (không quá 100). Dòng 2 ghi N số nguyên dương (không quá 100).

**Output:**
Ghi ra màn hình từng bước thực hiện thuật toán. Mỗi bước trên một dòng, các số trong dãy cách nhau đúng một khoảng trống.

### input
```
4
5 7 3 2
```

### output
```
Buoc 1: 3 2 5 7
Buoc 2: 2 3 5 7
```

## DSA06027 - SẮP XẾP ĐỔI CHỖ TRỰC TIẾP - LIỆT KÊ NGƯỢC

Cho dãy số A[] có n phần tử là các số nguyên dương. Hãy sắp xếp dãy số theo thuật toán sắp xếp đổi chỗ trực tiếp. Nhưng yêu cầu in ra lần lượt các bước chạy của thuật toán theo thứ tự ngược (bước cuối cùng in ra đầu tiên).

**Input:**

Dòng đầu ghi số bộ test (không quá 10). Mỗi test gồm 2 dòng:

- Dòng đầu ghi số n (1 < n < 100)
- Dòng thứ 2 ghi n số của dãy A (các số đều nguyên dương và nhỏ hơn 1000)

**Output:**

Ghi ra lần lượt các bước thuật toán theo thứ tự ngược (xem ví dụ mẫu để hiểu rõ hơn).

### input
```
1
6
5 8 3 9 1 4
```

### output
```
Buoc 5: 1 3 4 5 8 9
Buoc 4: 1 3 4 5 9 8
Buoc 3: 1 3 4 9 8 5
Buoc 2: 1 3 8 9 5 4
Buoc 1: 1 8 5 9 3 4
```

## DSA06028 - SẮP XẾP CHỌN - LIỆT KÊ NGƯỢC

Cho dãy số A[] có n phần tử là các số nguyên dương. Hãy sắp xếp dãy số theo thuật toán sắp xếp chọn. Nhưng yêu cầu in ra lần lượt các bước chạy của thuật toán theo thứ tự ngược (bước cuối cùng in ra đầu tiên).

**Input:**
- Dòng đầu ghi số n (1 < n < 100)
- Dòng thứ 2 ghi n số của dãy A (các số đều nguyên dương và nhỏ hơn 100000)

**Output:**
- Ghi ra lần lượt các bước thuật toán theo thứ tự ngược (xem ví dụ mẫu để hiểu rõ hơn).

### input
```
6
5 8 3 9 1 4
```

### output
```
Buoc 5: 1 3 4 5 8 9
Buoc 4: 1 3 4 5 9 8
Buoc 3: 1 3 4 9 5 8
Buoc 2: 1 3 8 9 5 4
Buoc 1: 1 8 3 9 5 4
```

## DSA06029 - SẮP XẾP CHÈN - LIỆT KÊ NGƯỢC

Cho dãy số A[] có n phần tử là các số nguyên dương. Hãy sắp xếp dãy số theo thuật toán sắp xếp chèn. Nhưng yêu cầu in ra lần lượt các bước chạy của thuật toán theo thứ tự ngược (bước cuối cùng in ra đầu tiên).

**Input:**
- Dòng đầu ghi số n (1 < n < 100)
- Dòng thứ 2 ghi n số của dãy A (các số đều nguyên dương và nhỏ hơn 100000)

**Output:**
- Ghi ra lần lượt các bước thuật toán theo thứ tự ngược (xem ví dụ mẫu để hiểu rõ hơn).

### input
```
6
5 8 3 9 1 4
```

### output
```
Buoc 5: 1 3 4 5 8 9
Buoc 4: 1 3 5 8 9
Buoc 3: 3 5 8 9
Buoc 2: 3 5 8
Buoc 1: 5 8
Buoc 0: 5
```

## DSA06030 - SẮP XẾP NỔI BỌT - LIỆT KÊ NGƯỢC

Cho dãy số A[] có n phần tử là các số nguyên dương. Hãy sắp xếp dãy số theo thuật toán sắp xếp nổi bọt. Nhưng yêu cầu in ra lần lượt các bước chạy của thuật toán theo thứ tự ngược (bước cuối cùng in ra đầu tiên).

*Chú ý: thuật toán sắp xếp nổi bọt có thể kết thúc khi tất cả dãy đã sắp xếp, không còn cặp số cạnh nhau nào sai thứ tự.*

**Input:**

Dòng đầu ghi số bộ test (không quá 10). Mỗi test gồm 2 dòng:

- Dòng đầu ghi số n (1 < n < 100)
- Dòng thứ 2 ghi n số của dãy A (các số đều nguyên dương và nhỏ hơn 1000)

**Output:**

- Đưa ra kết quả mỗi test theo từng dòng.

### input
```
1
6
4 1 3 9 8 5
```

### output
```
Buoc 2: 1 3 4 5 8 9
Buoc 1: 1 3 4 8 5 9
```

## DSA06031 - PHẦN TỬ LỚN NHẤT TRONG DÃY CON

Cho dãy số A[] gồm có N phần tử và số nguyên K.

Với mỗi dãy con liên tiếp có độ dài bằng K (từ trái sang phải), bạn hãy in ra phần tử lớn nhất trong dãy con này.

**Input:**
- Dòng đầu tiên là số lượng bộ test T (T ≤ 10).
- Mỗi test gồm số nguyên N và K (1≤ N ≤ 100 000, 1 ≤ K ≤ N).
- Dòng tiếp theo gồm N số nguyên A[i] (0 ≤ A[i] ≤ 10<sub>9</sub>).

**Output:**
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

## DSA06032 - BỘ BA SỐ CÓ TỔNG NHỎ HƠN K

Cho dãy số A[] gồm có N phần tử.

Nhiệm vụ của bạn là hãy đếm số bộ ba (i, j, k) mà A[i] + A[j] + A[k] < K cho trước.

**Input:**
- Dòng đầu tiên là số lượng bộ test T (T ≤ 20).
- Mỗi test gồm số nguyên N và K (1≤ N ≤5000, -10<sup>9</sup> ≤ K ≤ 10<sup>9</sup>).
- Dòng tiếp theo gồm N số nguyên A[i] (-10<sup>9</sup> ≤ A[i] ≤ 10<sup>9</sup>).

**Output:**
- Với mỗi test, in ra trên một dòng là đáp án tìm được.

### input
```
2
4 2
-2 0 1 3
5 12
5 1 3 4 7
```

### output
```
2
4
```

## DSA06043 - ĐIỂM CÂN BẰNG

Cho dãy số A[] gồm có N phần tử nguyên dương. Phần tử thứ i được gọi là điểm cân bằng của dãy số nếu như tổng các số bên trái bằng tổng các số bên phải của nó.

Nhiệm vụ của bạn là điểm cân bằng đầu tiên của dãy A[] cho trước. Nếu không có đáp án, in ra -1.

**Input:**
- Dòng đầu tiên là số lượng bộ test T (T ≤ 10).
- Mỗi test gồm số nguyên N (1≤ N ≤ 100 000), số lượng phần tử trong dãy số ban đầu.
- Dòng tiếp theo gồm N số nguyên A[i] (-1000 ≤ A[i] ≤ 1000).

**Output:**
- Với mỗi test, in ra trên một dòng vị trí của điểm cân bằng tìm được.

### input
```
2
7
-7 1 5 2 -4 3 0
5
1 2 3 4 5
```

### output
```
4
-1
```

## DSA06046 - CHÊNH LỆCH NHỎ NHẤT

Cho dãy số A[] gồm có N phần tử. Bạn cần tìm chênh lệch nhỏ nhất giữa hai phần tử bất kì trong dãy số đã cho.

**Input:**
- Dòng đầu tiên là số lượng bộ test T (T ≤ 10).
- Mỗi test gồm số nguyên N (1≤ N ≤ 100 000).
- Dòng tiếp theo gồm N số nguyên A[i] (0 ≤ A[i] ≤ 10<sup>9</sup>).

**Output:**
- Với mỗi test, in ra trên một dòng là đáp án tìm được.

### input
```
3
6
1 5 3 19 18 25
4
30 5 20 9
7
1 19 2 31 38 25 100
```

### output
```
1
4
1
```

## DSA02004 - DI CHUYỂN TRONG MÊ CUNG 2

Cho một mê cung bao gồm các khối được biểu diễn như một ma trận nhị phân A[N][N]. Một con chuột đi từ ô đầu tiên góc trái (A[0][0]) đến ô cuối cùng góc phải (A[N-1][N-1]) theo nguyên tắc:

- Down (D): Chuột được phép xuống dưới nếu ô dưới nó có giá trị 1.
- Right (R): Chuột được phép sang phải dưới nếu ô bên phải nó có giá trị 1.
- Left (L): Chuột được phép sang trái dưới nếu ô bên trái nó có giá trị 1.
- Up (U): Chuột được phép lên trên nếu ô trên nó có giá trị 1.

Hãy đưa ra tất cả các hành trình của con chuột trên mê cung. Đưa ra -1 nếu chuột không thể đi đến đích.

**Input:**
- Dòng đầu tiên đưa vào số lượng bộ test T.
- Những dòng kế tiếp đưa vào các bộ test. Mỗi bộ test gồm hai phần: phần thứ nhất đưa vào số N là kích cỡ của mê cung; dòng tiếp theo đưa vào ma trận nhị phân A[N][N].
- T, N, A[i][j] thỏa mãn ràng buộc: 1≤T ≤10; 2≤N≤8; 0≤A[i][j] ≤1.

**Output:**
- Đưa ra các xâu ký tự được sắp xếp, trong đó mỗi xâu là một đường đi của con chuột trong mê cung. In ra đáp án theo thứ tự từ điển. Đưa ra -1 nếu chuột không đi được đến đích.

### input
```
3
4
1 0 0 0
1 1 0 1
0 1 0 0
0 1 1 1
4
1 0 0 0
1 1 0 1
1 1 0 0
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
DRDDRR
DDRDRR DRDDRR
DDRRURRDDD DDRURRRDDD DRDRURRDDD DRRRRDDD
```

## DSA03026 - LỰA CHỌN THAM LAM

Cho hai số nguyên dương N và S. Hãy lựa chọn các chữ số phù hợp để tạo ra số nhỏ nhất và số lớn nhất có N chữ số sao cho tổng chữ số đúng bằng S.

**Input:**

Chỉ có một dòng ghi hai số N và S. (0 < N <= 100; 0 <= S <= 900)

**Output:**

Ghi ra hai số nhỏ nhất và lớn nhất tìm được, cách nhau một khoảng trống.

Nếu không thể tìm được thì ghi ra “-1 -1”


### input
```
3 20
________________________________________________________________
2 900
________________________________________________________________
3 0
```

### output
```
299 992
________________________________________________________________
-1 -1
________________________________________________________________
-1 -1
```

## DSA04008 - SỐ FIBONACCI THỨ N

Dãy số Fibonacci được xác định bằng công thức như sau:

F[0] = 0, F[1] = 1;

F[n] = F[n-1] + F[n-2] với mọi n >= 2.

Các phần tử đầu tiên của dãy số là 0, 1, 1, 2, 3, 5, 8, ...

Nhiệm vụ của bạn là hãy xác định số Fibonaci thứ n. Do đáp số có thể rất lớn, in ra kết quả theo modulo 10<sup>9</sup>+7.

**Input:**
- Dòng đầu tiên là số lượng bộ test T (T ≤ 1000).
- Mỗi test bắt gồm một số nguyên N (1 ≤ N ≤ 10<sup>9</sup>).

**Output:**
- Với mỗi test, in ra đáp án trên một dòng.

### input
```
3
2
6
20
```

### output
```
1
8
6765
```

## DSA04009 - LŨY THỪA MA TRẬN 1

Cho ma trận vuông A kích thước N x N. Nhiệm vụ của bạn là hãy tính ma trận X = A<sup>K</sup> với K là số nguyên cho trước. Đáp số có thể rất lớn, hãy in ra kết quả theo modulo 10<sup>9</sup>+7.

**Input:**
- Dòng đầu tiên là số lượng bộ test T (T ≤ 100).
- Mỗi test bắt gồm một số nguyên N và K (1 ≤ N ≤ 10, 1 ≤ K ≤ 10<sup>9</sup>) là kích thước của ma trận và số mũ.

**Output:**
- Với mỗi test, in ra kết quả của ma trận X.

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
8 5
5 3
597240088 35500972 473761863
781257150 154135232 527013321
965274212 272769492 580264779
```

## DSA06044 - SẮP XẾP CHẴN LẺ

Cho dãy số a[] có n phần tử, đánh số từ 1 đến n. Hãy sắp xếp các phần tử ở vị trí lẻ theo thứ tự tăng dần, các phần tử ở vị trí chẵn theo thứ tự giảm dần.

**Input:**
- Dòng đầu tiên ghi số n, không quá 10<sup>5</sup>
- Dòng thứ 2 ghi n số của dãy a[] (a ≤ a[i] ≤ 10<sup>9</sup>)

**Output:**
- Ghi ra dãy số kết quả trên một dòng

### input
```
4
1 2 3 4
```

### output
```
1 4 3 2
```

## DSA09011 - SỐ LƯỢNG HÒN ĐẢO

Cho một bản đồ kích thước N x M được mô tả bằng ma trận A[][].A[i][j] = 1 có nghĩa vị trí (i, j) là nổi trên biển. 2 vị trí (i, j) và (x, y) được coi là liền nhau nếu như nó có chung đỉnh hoặc chung cạnh. Một hòn đảo là một tập hợp các điểm (i, j) mà A[i][j] = 1 và có thể di chuyển giữa hai điểm bất kì trong đó.

Nhiệm vụ của bạn là hãy đếm số lượng đảo xuất hiện trên bản đồ.

**Input:**
- Dòng đầu tiên là số lượng bộ test T (T ≤ 20).
- Mỗi test bắt đầu bởi 2 số nguyên N và M (1 ≤ N, M ≤ 500).
- N dòng tiếp theo, mỗi dòng gồm M số nguyên A[i][j].

**Output:**
- Với mỗi test, in ra số lượng hòn đảo tìm được.

### input
```
1
5 5
1 1 0 0 0
0 1 0 0 1
1 0 0 1 1
0 0 0 0 0
1 0 1 0 1
```

### output
```
5
```

## DSA06034 - CẶP SỐ CÓ TỔNG BẰNG K

Cho dãy số A[] gồm có N phần tử.

Nhiệm vụ của bạn là đếm xem có bao nhiêu cặp (i, j) mà A[i] + A[j] = K cho trước.

**Input:**
- Dòng đầu tiên là số lượng bộ test T (T ≤ 10).
- Mỗi test gồm số nguyên N và K (1≤ N ≤ 100 000, 0 ≤ K ≤ 10^9).
- Dòng tiếp theo gồm N số nguyên A[i] (-10^9 ≤ A[i] ≤ 10^9).

**Output:**
- Với mỗi test, in ra trên một dòng là đáp án thu được.

### input
```
4
4 6
1 5 7 -1
5 6
1 5 7 -1 5
4 2
1 1 1 1
13 11
10 12 10 15 -1 7 6 5 4 2 1 1 1
```

### output
```
2
3
6
9
```

## DSA03002 - NHẦM CHỮ SỐ

Trong một buổi học toán, giáo viên viết 2 số nguyên, A và B, và yêu cầu Tèo thực hiện phép cộng. Tèo không bao giờ tính toán sai, nhưng thỉnh thoảng cậu ta chép các con số một cách không chính xác. Lỗi duy nhất của là ghi nhầm '5' thành '6' hoặc ngược lại.  Cho hai số, A và B, tính tổng nhỏ nhất và lớn nhất mà Tèo có thể nhận được.

**Input:**
Có một dòng chứa hai số nguyên dương A và B ( 1 ≤ A, B ≤ 1 000 000).

**Output:**
In ra 2 số nguyên cách nhau một dấu cách, tổng nhỏ nhất và lớn nhất có thể nhận được.

| | Test 1 | Test 2 | Test 3 |
| --- | --- | --- | --- |
| input | 11 25 | 1430 4862 | 16796 58786 |
| output | 36 37 | 6282 6292 | 74580 85582 |

## DSA03003 - TÌM MAX

Cho mảng A[] gồm N phần tử. Nhiệm vụ của bạn là tìm **max = for(i: 0 to n - 1) A<sub>i</sub> * i** bằng cách sắp đặt lại các phần tử trong mảng. Chú ý, kết quả của bài toán có thể rất lớn vì vậy bạn hãy đưa ra kết quả lấy modulo với 10<sup>9</sup>+7.

**Input:**
- Dòng đầu tiên đưa vào số lượng bộ test T.
- Những dòng kế tiếp đưa vào các bộ test. Mỗi bộ test gồm 2 dòng: dòng thứ nhất đưa vào số phần tử của mảng N; dòng tiếp theo đưa vào N số A[i] tương ứng với các phần tử của mảng A[]; các số được viết cách nhau một vài khoảng trống.
- T, N, A[i] thỏa mãn ràng buộc: 1≤T≤100;  1≤N, A[i] ≤10<sup>7</sup>.

**Output:**
- Đưa ra kết quả mỗi test theo từng dòng.

### input
```
2
5
5 3 2 4 1
3
1 2 3
```

### output
```
40
8
```

## DSA03004 - TỔNG NHỎ NHẤT

Cho mảng A[] gồm các số từ 0 đến 9. Nhiệm vụ của bạn là tìm tổng nhỏ nhất của hai số được tạo bởi các số trong mảng A[]. Chú ý, tất cả các số trong mảng A[] đều được sử dụng để tạo nên hai số.

**Input:**
- Dòng đầu tiên đưa vào số lượng bộ test T.
- Những dòng kế tiếp đưa vào các bộ test. Mỗi bộ test gồm 2 dòng: dòng thứ nhất đưa vào số phần tử của mảng N; dòng tiếp theo đưa vào N số A[i] tương ứng với các phần tử của mảng A[]; các số được viết cách nhau một vài khoảng trống.
- T, N, A[i] thỏa mãn ràng buộc: 1≤T≤100;  1≤N ≤20; 0≤A[i]≤9.

**Output:**
- Đưa ra kết quả mỗi test theo từng dòng.

### input
```
2
6
6 8 4 5 2 3
5
5 3 0 7 4
```

### output
```
604
82
```

## DSA03005 - CHIA MẢNG THÀNH HAI MẢNG CON CÓ TỔNG LỚN NHẤT

Cho mảng A[] gồm N số nguyên không âm và số K. Nhiệm vụ của bạn là hãy chia mảng A[] thành hai mảng con có kích cỡ K và N-K sao cho hiệu giữa tổng hai mảng con là lớn nhất. Ví dụ với mảng A[] = {8, 4, 5, 2, 10}, K=2 ta có kết quả là 17 vì mảng A[] được chia thành hai mảng {4, 2} và { 8, 5,10} có hiệu của hai mảng con là 23-6=17 là lớn nhất.

**Input:**
- Dòng đầu tiên đưa vào số lượng bộ test T.
- Những dòng kế tiếp đưa vào các bộ test. Mỗi bộ test gồm 2 dòng: dòng thứ nhất đưa vào số phần tử của mảng N và số K; dòng tiếp theo đưa vào N số A[i] tương ứng với các phần tử của mảng A[]; các số được viết cách nhau một vài khoảng trống.
- T, N, K, A[i] thỏa mãn ràng buộc: 1≤T≤100;  1≤ K<N ≤50; 0≤A[i]≤1000.

**Output:**
- Đưa ra kết quả mỗi test theo từng dòng.

### input
```
2
5 2
8 4 5 2 10
8 3
1 1 1 1 1 1 1 1
```

### output
```
17
2
```

## DSA03006 - SẮP XẾP THAM LAM

Cho mảng A[] gồm N số và thực hiện các thao tác theo nguyên tắc dưới đây:

- Ta chọn một mảng con sao cho phần tử ở giữa của mảng con cũng là phần tử ở giữa của mảng A[] (trong trường hợp N lẻ).
- Đảo ngược mảng con đã chọn trong mảng A[]. Ta được phép chọn mảng con và phép đảo ngược mảng con bao nhiêu lần tùy ý.

Ví dụ với mảng A[] = {1, 6, **3, 4, 5**, 2, 7} ta có câu trả lời là Yes vì: ta chọn mảng con {3, 4, 5} và đảo ngược để nhận được mảng A[]={1, 6, **5, 4, 3**, 2, 7}, chọn tiếp mảng con {6, 5, 4, 3, 2} và đảo ngược ta nhận được mảng A[]={1, 2, 3, 4, 5, 6, 7}. Hãy cho biết ta có thể sắp xếp được mảng A[] bằng cách thực hiện các thao tác kể trên hay không?

**Input:**
- Dòng đầu tiên đưa vào số lượng bộ test T.
- Những dòng kế tiếp đưa vào các bộ test. Mỗi bộ test gồm 2 dòng: dòng thứ nhất đưa vào số phần tử của mảng N; dòng tiếp theo đưa vào N số A[i] tương ứng với các phần tử của mảng A[]; các số được viết cách nhau một vài khoảng trống.
- T, N, A[i] thỏa mãn ràng buộc: 1≤T≤100;  1≤ N ≤50; 0≤A[i]≤1000.

**Output:**
- Đưa ra kết quả mỗi test theo từng dòng.

### input
```
2
7
1 6 3 4 5 2 7
7
1 6 3 4 5 7 2
```

### output
```
Yes
No
```

## DSA03010 - NỐI DÂY 1

Cho N sợi dây với độ dài khác nhau được lưu trong mảng A[]. Nhiệm vụ của bạn là nối N sợi dây thành một sợi sao cho tổng chi phí nối dây là nhỏ nhất. Biết chi phí nối sợi dây thứ i và sợi dây thứ j là tổng độ dài hai sợi dây A[i] và A[j].

**Input:**
- Dòng đầu tiên đưa vào số lượng bộ test T.
- Những dòng kế tiếp đưa vào các bộ test. Mỗi bộ test gồm hai dòng: dòng thứ nhất đưa vào số lượng sợi dây N; dòng tiếp theo đưa vào N số A[i] là độ dài của các sợi dây; các số được viết cách nhau một vài khoảng trống.
- T, N, A[i] thỏa mãn ràng buộc: 1≤T≤100;  1≤N≤10<sup>6</sup>; 0≤A[i]≤10<sup>6</sup>.

**Output:**
- Đưa ra kết quả mỗi test theo từng dòng.

### input
```
2
4
4 3 2 6
5
4 2 7 6 9
```

### output
```
29
62
```

## DSA03012 - SẮP ĐẶT XÂU KÝ TỰ 1

Cho xâu ký tự S bao gồm các ký tự in thường. Nhiệm vụ của bạn là kiểm tra xem ta có thể sắp đặt lại các ký tự trong S để hai ký tự giống nhau đều không kề nhau hay không? Đưa ra 1 nếu có thể sắp đặt lại các ký tự trong S thỏa mãn yêu cầu bài toán, ngược lại đưa ra -1.

**Input:**
- Dòng đầu tiên đưa vào số lượng bộ test T.
- Những dòng kế tiếp đưa vào các bộ test. Mỗi bộ test là một xâu ký tự S được viết trên một dòng.
- T, S thỏa mãn ràng buộc: 1≤T≤100;  1≤length(S)≤10000.

**Output:**
- Đưa ra kết quả mỗi test theo từng dòng.

### input
```
3
geeksforgeeks
bbbabaaacd
bbbbb
```

### output
```
1
1
-1
```

## DSA03013 - SẮP ĐẶT XÂU KÝ TỰ 2

Cho xâu ký tự S bao gồm các ký tự và số D. Nhiệm vụ của bạn là kiểm tra xem ta có thể sắp đặt lại các ký tự trong S để tất cả các ký tự giống nhau đều có khoảng cách là D hay không? Đưa ra 1 nếu có thể sắp đặt lại các ký tự trong S thỏa mãn yêu cầu bài toán, ngược lại đưa ra -1.

**Input:**
- Dòng đầu tiên đưa vào số lượng bộ test T.
- Những dòng kế tiếp đưa vào các bộ test. Mỗi bộ test gồm hai dòng: dòng thứ nhất là số D; dòng tiếp theo là xâu S.
- T, S, D thỏa mãn ràng buộc: 1≤T≤100;  1≤length(S)≤10000; 1≤D≤100.

**Output:**
- Đưa ra kết quả mỗi test theo từng dòng.

### input
```
2
2
ABB
2
AAA
```

### output
```
1
-1
```

## DSA03015 - MUA LƯƠNG THỰC

Giả sử bạn là một người nghèo trong địa phương của bạn. Địa phương của bạn có duy nhất một cửa hàng bán lương thực. Cửa hàng của bạn mở cửa tất cả các ngày trong tuần ngoại trừ chủ nhật. Cho bộ ba số N, S, M thỏa mãn ràng buộc sau:

- N : số đơn vị lương thực nhiều nhất bạn có thể mua trong ngày.
- S : số lượng ngày bạn cần được sử dụng lương thực để tồn tại.
- M : số đơn vị lương thực cần có mỗi ngày để bạn tồn tại.

Giả sử bạn đang ở ngày thứ 2 trong tuần và cần tồn tại trong S ngày tới. Hãy cho biết số lượng ngày ít nhất bạn cần phải mua lương thực từ của hàng để tồn tại hoặc bạn sẽ bị chết đói trong S ngày tới.


**Input:**
- Dòng đầu tiên đưa vào số lượng bộ test T.
- Những dòng kế tiếp đưa vào các bộ test. Mỗi bộ test là bộ 3 số N, S, M được viết trên một dòng.
- T, N, S, M thỏa mãn ràng buộc: 1≤T≤100;  1≤N, S, M ≤30.

**Output:**
- Đưa ra số ngày ít nhất bạn có thể mua lương thực để tồn tại hoặc đưa ra -1 nếu bạn bị chết đói.

### input
```
2
16 10 2
20 10 30
```

### output
```
2
-1
```

## DSA03022 - TÍCH LỚN NHẤT

Cho dãy số A gồm N phần tử là các số nguyên. Hãy tính tích lớn nhất của **2 hoặc 3** phần tử trong dãy.

**Input:**
- Dòng đầu tiên ghi số N (3 ≤ N ≤ 10000)
- Dòng thứ 2 ghi N số của dãy A (|A<sub>i</sub>| ≤ 1000)

**Output:**
- Ghi ra kết quả trên một dòng

### input
```
6
5 10 -2 3 5 2
```

### output
```
250
```

## DSA03024 - LỰA CHỌN TỐI ƯU

Bạn được giao cho N công việc, công việc thứ i có thời gian bắt đầu là A[i] và kết thúc tại B[i]. Tại một thời điểm, bạn chỉ có thể làm một công việc.

Bạn hãy lựa chọn các công việc một cách tối ưu sao cho số công việc làm được là nhiều nhất.

**Input:**
- Dòng đầu tiên là số lượng bộ test T (T ≤ 10).
- Mỗi test gồm 1 số nguyên N ( 1 ≤ N ≤ 100 000).
- N dòng tiếp theo, mỗi dòng gồm 2 số A[i] và B[i] (0 ≤ A[i] < B[i] ≤ 10<sup>6</sup>).

**Output:**
- Với mỗi test, in ra đáp án trên một dòng.

### input
```
1
6
5 9
1 2
3 4
0 6
5 7
8 9
```

### output
```
4
```

*Giải thích test: Lựa chọn công việc 2, 3, 5, 6.*

## DSA03025 - TRỤC TỌA ĐỘ

Trên trục Ox tính từ vị trí 0, người ta muốn xếp nhiều nhất các đoạn thẳng sao cho không đoạn nào chồng lấn lên nhau. Đoạn thẳng thứ i có vị trí bắt đầu là X1[i] và kết thúc tại X2[i], với X1[i] <= X2[i].

Hãy tính số đoạn thẳng nhiều nhất có thể được lựa chọn để đưa lên trục Ox và không có đoạn nào chồng lấn lên nhau.

**Input:**
- Dòng đầu tiên ghi số bộ test, không quá 10.
- Với mỗi bộ test: dòng đầu ghi số N là số đoạn thẳng (không quá 10<sup>5</sup>)
- Tiếp theo là N dòng, mỗi dòng có 2 số nguyên mô tả đoạn thẳng. Các giá trị tọa độ đều là các số nguyên không âm và không quá 10<sup>6</sup>.

**Output:**
- Với mỗi test, viết trên 1 dòng số lượng đoạn thẳng nhiều nhất có thể được lựa chọn thỏa mãn điều kiện đề bài.

### input
```
1
10
39 55
37 74
0 1
19 25
65 76
51 52
19 21
5 94
46 65
32 40
```

### output
```
5
```

## DSA03034 - DÃY CON CHUNG

Cho dãy số A[], B[] và C[] là dãy không giảm và có lần lượt N, M, K phần tử. Nhiệm vụ của bạn là hãy tìm các phần tử chung của 3 dãy số này.

**Input:**
- Dòng đầu tiên là số lượng bộ test T (T ≤ 20).
- Mỗi test gồm số nguyên N, M và K (1≤ N, M, K ≤ 100 000).
- Dòng tiếp theo gồm N số nguyên A[i], rồi M số nguyên B[i] và K số nguyên C[i]. (0 ≤ A[i], B[i], C[i] ≤ 10<sup>9</sup>).

**Output:**
- Với mỗi test, in ra trên một dòng là đáp án thu được. Nếu không tìm được đáp án, in ra “NO”.

### input
```
3
6 5 8
1 5 10 20 40 80
5 7 20 80 100
3 4 15 20 30 70 80 120
3 5 4
1 5 5
3 4 5 5 10
5 5 10 20
3 3 3
1 2 3
4 5 6
7 8 9
```

### output
```
20 80
5 5
NO
```

## DSA03035 - SẮP XẾP ĐƠN GIẢN

Cho một dãy số a[] có n phần tử gồm các số từ 1 đến n theo 1 thứ tự ngẫu nhiên. Nhiệm vụ của bạn là sắp xếp lại dãy số này theo thứ tự tăng dần với điều kiện : ở mỗi bước sắp xếp, bạn chỉ được chọn 1 số ở 1 vị trí bất kì và chuyển số đó lên đầu dãy hoặc về cuối dãy.

Hãy tính số bước tối thiểu cần thực hiện để hoàn thành việc sắp xếp.

**Input:**
- Dòng đầu tiên ghi 1 số n: số lượng phần tử của dãy a (1 ≤ n ≤ 100000)
- Dòng tiếp theo gồm n số từ 1 đến n theo thứ tự ngẫu nhiên

**Output:**
- Một số nguyên duy nhất là số bước tối thiểu cần thực hiện để hoàn thành việc sắp xếp.

### input
```
5
4 1 2 5 3
```

### output
```
2
```

## DSA03017 - GIÁ TRỊ NHỎ NHẤT CỦA XÂU

Cho xâu ký tự S. Ta gọi giá trị của xâu S là tổng bình phương số lần xuất hiện mỗi ký tự trong S. Hãy tìm giá trị nhỏ nhất của xâu S sau khi thực hiện K lần loại bỏ ký tự.

**Input:**
- Dòng đầu tiên đưa vào số lượng bộ test T.
- Những dòng kế tiếp đưa vào các bộ test. Mỗi bộ test gồm hai phần: phần thứ nhất là số K; phần thứ hai là một xâu ký tự S được viết trên một dòng.
- DT, S, K thỏa mãn ràng buộc: 1≤T≤100;  1≤length(S)≤10000; 1≤K≤1000.

**Output:**
- Đưa ra kết quả mỗi test theo từng dòng.

### input
```
2
2
ABCCBC
2
AAAB
```

### output
```
6
2
```

## DSA03018 - SỐ MAY MẮN

Hoàng yêu thích các số may mắn. Ta biết rằng một số là số may mắn nếu biểu diễn thập phân của nó chỉ chứa các chữ số may mắn là 4 và 7. Ví dụ, các số 47, 744, 4 là số may mắn và 5, 17, 467 không phải. Hoàng muốn tìm số may mắn bé nhất có tổng các chữ số bằng n. Hãy giúp anh ấy

**Input:**
Dòng đầu ghi số bộ test, mỗi bộ test có một dòng chứa số nguyên n (1 ≤ n ≤ 106) — tổng các chữ số của số may mắn cần tìm.

**Output:**
In ra trên 1 dòng số may mắn bé nhất, mà tổng các chữ số bằng n. Nếu không tồn tại số thỏa mãn, in ra -1.

### input
```
2
11
10
```

### output
```
47
-1
```

## DSA03019 - PHÂN SỐ ĐƠN VỊ

Một phân số đơn vị nếu tử số của phân số đó là 1. Mọi phân số nguyên dương đều có thể biểu diễn thành tổng các phân số đơn vị. Ví dụ 2/3 = 1/2  + 1/6. Cho phân số nguyên dương P/Q bất kỳ (P < Q), hãy biểu diễn phân số nguyên dương thành tổng phân số đơn vị với số hạng tử là ít nhất.

**Input:**
- Dòng đầu tiên đưa vào số lượng bộ test T.
- Những dòng kế tiếp đưa vào các bộ test. Mỗi bộ test là bộ đôi tử số P và mẫu số Q của phân số nguyên dương được viết trên một dòng.
- T, P, Q thỏa mãn ràng buộc: 1≤T≤100;  1≤P, Q≤100.

**Output:**
- Đưa ra đáp án tìm được trên 1 dòng, theo dạng “1/a + 1/b + …”

### input
```
2
2 3
1 3
```

### output
```
1/2 + 1/6 
1/3
```

## DSA05004 - DÃY CON TĂNG DÀI NHẤT

Cho một dãy số nguyên gồm N phần tử A[1], A[2], ... A[N]. 

Biết rằng dãy con tăng là 1 dãy A[i1],... A[ik] thỏa mãn i1 < i2 < ... < ik và A[i1] < A[i2] < .. < A[ik].

Hãy cho biết dãy con tăng dài nhất của dãy này có bao nhiêu phần tử? 

**Input:**
Dòng 1 gồm 1 số nguyên là số N (1 ≤ N ≤ 1000). Dòng thứ 2 ghi N số nguyên A[1], A[2], .. A[N] (1 ≤ A[i] ≤ 1000). 

**Output:**
Ghi ra độ dài của dãy con tăng dài nhất.

### input
```
6
1 2 5 4 6 2
```

### output
```
4
```

## DSA05012 - TỔ HỢP C(n, k)

Cho 2 số nguyên n, k. Bạn hãy tính C(n, k) modulo 10<sup>9</sup>+7.

**Input:**
- Dòng đầu tiên là số lượng bộ test T (T ≤ 20).
- Mỗi test gồm 2 số nguyên n, k (1 ≤ k ≤ n ≤ 1000).

**Output:**
- Với mỗi test, in ra đáp án trên một dòng.

### input
```
2
5 2
10 3
```

### output
```
10
120
```

## DSA05025 - CON ẾCH

Một con ếch có thể nhảy 1, 2, 3 bước để có thể lên đến một đỉnh cần đến. Hãy đếm số các cách con ếch có thể nhảy đến đỉnh.

**Input:**
- Dòng đầu tiên đưa vào số lượng bộ test T.
- Những dòng kế tiếp đưa vào các bộ test. Mỗi bộ test là số n là số bước con ếch có thể lên được đỉnh.
- T, n thỏa mãn ràng buộc: 1≤T≤100;  1≤n ≤50.

**Output:**
- Đưa ra kết quả mỗi test theo từng dòng.

### input
```
2
1
5
```

### output
```
1
13
```

## DSA05013 - BẬC THANG

Một chiếc cầu thang có N bậc. Mỗi bước, bạn được phép bước lên trên tối đa K bước. Hỏi có tất cả bao nhiêu cách bước để đi hết cầu thang? (Tổng số bước đúng bằng N).

**Input:**
- Dòng đầu tiên là số lượng bộ test T (T ≤ 100).
- Mỗi test gồm hai số nguyên dương N và K(1 ≤ N ≤ 100000, 1 ≤ K ≤ 100).

**Output:**
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

## DSA05005 - SỐ BƯỚC ÍT NHẤT

Cho mảng A[] gồm N số nguyên. Nhiệm vụ của bạn là sắp xếp lại mảng số với số lượng bước là ít nhất. Tại mỗi bước, bạn chỉ được phép chèn phần tử bất kỳ của mảng vào vị trí bất kỳ trong mảng. Ví dụ A[] = {2, 3, 5, 1, 4, 7, 6 }sẽ cho ta số phép chèn ít nhất là 3 bằng cách lấy số 1 chèn trước số 2, lấy số 4 chèn trước số 5, lấy số 6 chèn trước số 7 ta nhận được mảng được sắp.

**Input:**
- Dòng đầu tiên đưa vào số lượng bộ test T.
- Những dòng kế tiếp đưa vào các bộ test. Mỗi bộ test gồm hai dòng: dòng thứ nhất là một số N; dòng tiếp theo đưa vào N số của mảng A[]; các số được viết cách nhau một vài khoảng trống.
- T, N, A[i] thỏa mãn ràng buộc: 1≤T≤100;  1≤N ≤1000; 1≤A[i] ≤1000.

**Output:**
- Đưa ra kết quả mỗi test theo từng dòng.

### input
```
1
7
2 3 5 1 4 7 6
```

### output
```
3
```

## DSA05006 - TỔNG LỚN NHẤT CỦA DÃY CON TĂNG DẦN

Cho dãy số A[] gồm N số. Nhiệm vụ của bạn là tìm tổng lớn nhất của dãy con được sắp theo thứ tự tăng dần của dãy A[]. Ví dụ với dãy A[] = {1, 101, 2, 3, 100, 4, 5} ta có kết quả là 106 = 1 + 2 + 3 + 100. Với dãy A[] = {10, 7, 5} ta có kết quả là 10. Với dãy A[] = {1, 2, 3, 5} ta có kết quả là 11.

**Input:**
- Dòng đầu tiên đưa vào số lượng bộ test T.
- Những dòng kế tiếp đưa vào các bộ test. Mỗi bộ test gồm hai dòng: dòng đầu tiên đưa vào N là số phần tử của dãy A[]; dòng tiếp theo đưa vào N số A[i]; các số được viết cách nhau một vài khoảng trống.
- T, N, A[i] thỏa mãn ràng buộc: 1≤T≤100;  1≤N ≤10<sup>3</sup>; 0≤A[i] ≤10<sup>3</sup>.

**Output:**
- Đưa ra kết quả mỗi test theo từng dòng.

### input
```
3
7
1 101 2 3 100 4 5
3
10 7 5
4
1 2 3 5
```

### output
```
106
10
11
```

## DSAKT110 - NHÀ KHÔNG KỀ NHAU -- DSA05007 - TỔNG LỚN NHẤT CỦA DÃY CON KHÔNG KỀ NHAU

Có N ngôi nhà trên một dãy phố, mỗi ngôi nhà chứa đựng một số lượng tài sản khác nhau. Một tên trộm muốn ăp cắp được nhiều nhất tài sản của dãy phố nhưng không muốn lấy tài sản của hai nhà kề nhau. Hãy cho biết, bằng cách đó tên trộm có thể đánh cắp được nhiều nhất bao nhiêu tài sản.

**Input:**
- Dòng đầu tiên đưa vào số lượng bộ test T.
- Những dòng kế tiếp đưa vào các bộ test. Mỗi bộ test gồm hai dòng: dòng thứ nhất là một số N là số lượng ngôi nhà; dòng tiếp theo đưa vào N số là tài sản tương ứng trong mỗi ngôi nhà; các số được viết cách nhau một vài khoảng trống.
- T, N, A[i] thỏa mãn ràng buộc: 1≤T≤100;  1≤N ≤10<sup>6</sup>; 1≤A[i] ≤10<sup>7</sup>.

**Output:**
- Đưa ra kết quả mỗi test theo từng dòng.

### input
```
2
6
5 5 10 100 10 5
4
3 2 7 10
```

### output
```
110
13
```

## DSA05001 - XÂU CON CHUNG DÀI NHẤT

Cho 2 xâu S1 và S2. Hãy tìm xâu con chung dài nhất của 2 xâu này *(các phần tử không nhất thiết phải liên tiếp nhau).*

**Input:** 
Dòng đầu tiên là số lượng bộ test T (T ≤ 20). Mỗi test gồm hai dòng, mô tả xâu S1 và S2, mỗi xâu có độ dài không quá 1000 và chỉ gồm các chữ cái in hoa.

**Output:** 
Với mỗi test, in ra độ dài dãy con chung dài nhất trên một dòng.

### input
```
2
AGGTAB
GXTXAYB
AA
BB
```

### output
```
4
0
```

## DSA05008 - DÃY CON CÓ TỔNG BẰNG S

Cho N  số nguyên dương tạo thành dãy A={A1, A2, ..., AN}. Tìm ra một dãy con của dãy A (không nhất thiết là các phần tử liên tiếp trong dãy) có tổng bằng S cho trước.

**Input:** 
Dòng đầu ghi số bộ test T (T<10).  Mỗi bộ test có hai dòng, dòng đầu tiên ghi hai số nguyên dương N và S (0 < N ≤ 200) và S (0 < S ≤ 40000). Dòng tiếp theo lần lượt ghi N số hạng của dãy A là các số A1, A2, ..., AN (0 < Ai ≤ 200).

**Output:** 
Với mỗi bộ test, nếu bài toán vô nghiệm thì in ra “NO”, ngược lại in ra “YES”

### input
```
2
5 6
1 2 4 3 5
10 15
2 2 2 2 2 2 2 2 2 2
```

### output
```
YES
NO
```

## DSA03008 - SẮP XẾP CÔNG VIỆC 1

Cho hệ gồm N hành động. Mỗi hành động được biểu diễn như một bộ đôi <S<sub>i</sup>, F<sub>i</sub>> tương ứng với thời gian bắt đầu và thời gian kết thúc của mỗi hành động. Hãy tìm phương án thực hiện nhiều nhất các hành động được thực hiện bởi một máy hoặc một người sao cho hệ không xảy ra mâu thuẫn.

**Input:**
- Dòng đầu tiên đưa vào số lượng bộ test T.
- Những dòng kế tiếp đưa vào các bộ test. Mỗi bộ test gồm 3 dòng: dòng thứ nhất đưa vào số lượng hành động N; dòng tiếp theo đưa vào N số S<sub>i</sub> tương ứng với thời gian bắt đầu mỗi hành động; dòng cuối cùng đưa vào N số F<sub>i</sub> tương ứng với thời gian kết thúc mỗi hành động; các số được viết cách nhau một vài khoảng trống.
- T, N, S<sub>i</sub>, F<sub>i</sub> thỏa mãn ràng buộc: 1≤T≤100;  1≤N, F<sub>i</sub>, S<sub>i</sub>≤1000.

**Output:**
- Đưa số lượng lớn nhất các hành động có thể được thực thi bởi một máy hoặc một người.

### input:
```
1
6
1  3  0  5  8  5
2  4  6  7  9  9
```

### output:
```
4
```

## DSA02035 - HOÁN VỊ CÁC CHỮ SỐ

Độ chênh lệch của một dãy số nguyên dương được định nghĩa là hiệu của số lớn nhất trừ đi số nhỏ nhất trong dãy.

Cho hai số nguyên dương n và k, với 1 <= n, k <= 8.

Với n xâu ký tự số có độ dài k, có thể có chữ số 0 ở đầu. Hãy tìm cách duyệt tất cả hoán vị các chữ số của từng số trong danh sách sao cho độ chênh lệch của dãy số tạo được là bé nhất có thể.

**Input:**
- Dòng đầu ghi hai số n và k.
- Tiếp theo là n dòng, mỗi dòng ghi một xâu ký tự đúng k chữ số.

**Output:**
- Ghi ra độ chênh lệch bé nhất có thể.

### input:
```
6 4
5237
2753
7523
5723
5327
2537
```

### output:
```
2700
```

## CTDL_004 - DÃY CON TĂNG DẦN BẬC K

Cho dãy gồm N số phân biệt AN = {a1, a2, .., aN } và số tự nhiên K (K<=N<=100). Ta gọi một dãy con tăng dần bậc K của dãy số AN là một dãy các số gồm K phần tử trong dãy đó thỏa mãn tính chất tăng dần. Bài toán được đặt ra là in ra màn hình  số các dãy con tăng dần bậc K của dãy số AN. Ví dụ :

**Input:**
- Dòng đầu tiên ghi lại hai số N và K tương ứng với số phần tử của dãy số và bậc của dãy con.
- Dòng kế tiếp : N số của dãy số AN, các số trong dãy không lớn hơn 100. 

**Output:**
- In ra ra kết quả tìm được.

### input:
```
5 3
2 5 15 10 20  
```

### output:
```
7
```

