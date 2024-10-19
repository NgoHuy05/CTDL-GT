// Bài 9. Tần suất

// Cho mảng số nguyên A[] gồm N phần tử, hãy liệt kê các giá trị xuất hiện trong mảng kèm theo tần suất tương ứng, mỗi giá trị chỉ liệt kê một lần theo thứ tự xuất hiện.
// Gợi ý : Xét từng chỉ số i trong mảng, đối với mỗi chỉ số i sẽ duyệt các phần tử đứng trước nó để xem nó đã xuất hiện trước đó hay chưa, nếu chưa xuất hiện thì tiến hành duyệt các phần tử đứng sau chỉ số i và đếm xem có bao nhiêu phần tử bằng với a[i]

// map<int,int> mp;
// mp[a[i]]++;