//
// Created by sonde on 09/01/2025.
//
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int N;
    cin >> N;

    int D[360]; // Mảng lưu các góc xoay
    for (int i = 0; i < N; i++) {
        cin >> D[i];
    }

    int cuts[362]; // Mảng lưu các góc cắt (tối đa 360 góc + 0 và 360)
    int current_angle = 0;
    int num_cuts = 1; // Số lượng góc cắt, bắt đầu từ 1 (0 độ)
    cuts[0] = 0; // Góc ban đầu

    // Tính toán các góc cắt
    for (int i = 0; i < N; i++) {
        current_angle = (current_angle + D[i]) % 360; // Cộng dồn và lấy mod 360
        cuts[num_cuts++] = current_angle; // Lưu góc cắt vào mảng
    }

    // Sắp xếp các góc cắt
    sort(cuts, cuts + num_cuts);

    // Thêm góc 360 để tính phần cuối
    cuts[num_cuts++] = 360;

    // Tìm phần bánh lớn nhất
    int max_angle = 0;
    for (int i = 1; i < num_cuts; i++) {
        max_angle = max(max_angle, cuts[i] - cuts[i - 1]);
    }

    // In kết quả
    cout << max_angle << endl;

    return 0;
}