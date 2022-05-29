## NGÂN HÀNG

Một ngân hàng muốn dành ra N đồng để cho sinh viên vay vốn ưu đãi và có m sinh viên đăng ký, sinh viên thứ i đăng ký vay t<sub>i</sub> đồng. Ngân hàng muốn đáp ứng được nhiều sinh viên nhất nhưng phải đảm bảo nếu sinh viên thứ i được cho vay thì phải vay đúng t<sub>i</sub> đồng.

Trong các cách thỏa mãn, ngân hàng muốn chọn cách mà số sinh viên vay ít nhất là lớn nhất.

**Yêu cầu:** Cho t1,t2,…,tm và lần lượt Q giá trị N giả định.

Với mỗi giá trị N, hãy đưa ra cách cho vay thỏa mãn yêu cầu đề bài.   

**Input**
- Dòng đầu ghi 2 số m và Q (m,Q ≤ 9000).
- Dòng thứ 2 ghi m số nguyên dương t1 … tm (0 < ti ≤ 10<sup>9</sup>)
- Dòng thứ 3 ghi Q giá trị N giả định (0 < Ni ≤ 10<sup>18</sup>)

**Output**
- Gồm Q dòng, mỗi dòng ghi 2 số s,v lần lượt là số sinh viên được vay vốn và số tiền sinh viên được vay ít nhất ứng với giá trị N giả định.

**input**
```
5 2
1 3 2 3 5
6 8
```

**output**
```
3 1
3 2
```

## CHIA HẾT CHO 4

Cho xâu ký tự các chữ số S có độ dài không quá 10<sup>6</sup>.

Nhiệm vụ của bạn là đếm xem có bao nhiêu xâu con của S tạo thành một số chia hết cho 4.

**Input**
- Chỉ có một xâu S bao gồm các chữ số từ 0 đến 9 (1 ≤ |S| ≤ 10<sup>6</sup>).

**Output**
- In ra kết quả bài toán.

**input**
```
04
```

**output**
```
3
```

## BIỂU THỨC ĐÚNG

Cho biểu thức số học bất kỳ. Nhiệm vụ của bạn là xác định độ dài lớn nhất của các cặp đóng mở ngoặc đúng lồng nhau. Ví dụ với biểu thức P = “( ((X)) (((Y))) )” ta có độ dài các cặp đóng mở ngoặc lồng nhau đúng là 4.

Nếu biểu thức không đúng hãy đưa ra -1.

**Input**
- Dòng đầu tiên đưa vào số lượng bộ test T (1 ≤ T ≤ 100)
- Những dòng kế tiếp đưa vào các bộ test. Mỗi bộ test là một biểu thức số học được đưa vào trên một dòng. Độ dài biểu thức không quá 10<sup>6</sup>

**Output**
- Đưa ra kết quả mỗi test theo từng dòng.

**input**
```
2
(((X))(((Y))))
(b)((c)()
```

**output**
```
4
-1
```

## KIỂM TRA LIÊN THÔNG MẠNH

Cho đồ thị có hướng có N đỉnh (1 <= N <= 10^4) và M cạnh (1 <= M <= 10^5).

Trong một thành phần liên thông mạnh, giữa 2 đỉnh bất kì luôn luôn tồn tại đường đi.

Hãy kiểm tra xem đồ thị có liên thông mạnh hay không. Nếu không thì in ra số thành phần liên thông mạnh của đồ thị. 

**Input**
- Dòng đầu tiên là số lượng bộ test T (T <= 20).
- Mỗi test bắt đầu bằng hai số nguyên N và M.
- M dòng tiếp theo, mỗi dòng gồm 2 số nguyên u và v, mô tả cạnh một chiều từ u đến v.

**Output**
- Với mỗi test, nếu đồ thị liên thông mạnh thì in ra YES, nếu không in ra NO và số thành phần liên thông mạnh của đồ thị.

**input**
```
2
3 2
1 2
2 3
4 4
1 2
2 3
3 4
4 1
```

**output**
```
NO 3
YES
```
 
## HỆ THỐNG GIAO THÔNG

Mạng lưới giao thông ở 1 nước bao gồm N thành phố (đánh số từ 1 đến N) và N-1 đường nối các thành phố với nhau. Có một đường đi duy nhất giữa mỗi cặp thành phố và mỗi con đường có một độ dài xác định.

Nhiệm vụ của bạn là với mỗi K cặp thành phố cho trước, tìm độ dài của con đường ngắn nhất và dài nhất giữa 2 thành phố này.

**Input**
- Dòng đầu tiên chứa số nguyên N (2 ≤ N ≤ 100 000). N-1 dòng tiếp theo chứa 3 số nguyên A, B, C cho biết có một con đường độ dài C giữa thành phố A và thành phố B (1 ≤ C ≤ 1000000).
- Dòng tiếp theo chứa số nguyên K là số lượng truy vấn (1 ≤ K ≤ 100 000).
- K dòng tiếp theo, mỗi dòng gồm 2 số nguyên U và V.

**Output**
- Với mỗi truy vấn, in ra hai số nguyên là độ dài đường đi ngắn nhất và dài nhất tìm được.

**test1**
**input**
```
5
2 3 100
4 3 200
1 5 150
1 3 50
3
2 4
3 5
1 2
```

**output**
```
100 200
50 150
50 100
```

**test2**
**input**
```
7
3 6 4
1 7 1
1 3 2
1 2 6
2 5 4
2 4 4
5
6 4
7 6
1 2
1 3
3 5
```

**output**
```
2 6
1 4
6 6
2 2
2 6
```