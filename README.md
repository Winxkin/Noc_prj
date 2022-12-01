# Noc_prj
Tên đề tài: Thiết kế router 5 cổng cho ứng dụng mạng trên chip (NOC)
Mục tiêu đề tài:
    1.Nghiên cứu về mô hình SOC sử dụng nền tảng kết nối là mạng trên chip (NOC).
    2.Thiết kế bộ router 5 cổng nhằm mục đích triển khai mạng dạng lưới cho mô hình network-on-chip bằng ngôn ngữ mô tả phần cứng.
        2.1.Thiết kế khối điều khiển gói tin đầu vào.
            2.1.1.Thiết kế bộ đệm lưu trữ gói tin đầu vào tại mỗi cổng router.
            2.1.2.Thiết kế bộ điều kiểm soát lưu lượng gói tín đầu vào
            2.1.3.Thiết kế bộ điều hướng gói tin sử dụng thuật toán XY routing.
        2.2.Thiết kế khối chuyển mạch để điều hướng gói tin đến đích mong muốn.
            2.2.1.Thiết kế bộ crossbar 5 cổng.
            2.2.2.Thiết kế bộ điều khiển chuyển mạch nhằm mục đích tránh việc tranh chấp gói tin trong router.
        2.3.Thiết kế khối điều khiển gói tin đầu ra.
            2.3.1.Thiết kế bộ đệm lưu trữ gói tin đầu ra tại mỗi cổng của router.
            2.3.2.Thiết kế bộ điều khiển kiểm soát lưu lượng gói tin đầu ra.
            2.3.3.Thiết kế bộ điều khiển đầu ra nhằm mục đích giao tiếp với các router lân cận để yêu cầu gửi gói tin.
    3.Triển khai mô phỏng 1 mạng lưới network-on-chip 4x4 với 16 router và đánh giá kết quả.
