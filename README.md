# Đề cấu trúc dữ liệu và giải thuật

## CTDL_001 - THUẬT TOÁN SINH

Một xâu nhị phân độ dài n được gọi là thuận nghịch hay đối xứng nếu đảo ngược xâu nhị phân đó ta vẫn nhận được chính nó. Cho số tự nhiên n (n nhập từ bàn phím). Hãy viết chương trình liệt kê tất cả các xâu nhị phân thuận nghịch có độ dài n.  Hai phần tử khác nhau của xâu thuận nghịch được ghi cách nhau một khoảng trống.

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
5 50      
5 10 15 20 25   
Các dãy con thoả mãn điều kiện tìm được liệt kê trên màn hình:
    Mỗi dòng ghi lại một dãy con. Hai phần tử khác nhau của dãy con được viết cách nhau bởi một  khoảng trống.
    Dòng cuối cùng ghi lại số các dãy con có tổng các phần tử đúng bằng K tìm được.
10 15 25
5 20 25
5 10 15 20
3