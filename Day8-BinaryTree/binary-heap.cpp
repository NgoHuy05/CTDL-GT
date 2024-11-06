#include <iostream>
#include <vector>

using namespace std;

int parent(int i) { return (i - 1) / 2; }
int leftChild(int i) { return 2 * i + 1; }
int rightChild(int i) { return 2 * i + 2; }

void heapifyUp(vector<int>& heap, int index) {
    while (index != 0 && heap[parent(index)] > heap[index]) {
        swap(heap[index], heap[parent(index)]);
        index = parent(index);
    }
}

void heapifyDown(vector<int>& heap, int index) {
    int left = leftChild(index);
    int right = rightChild(index);
    int smallest = index;

    if (left < heap.size() && heap[left] < heap[smallest])
        smallest = left;

    if (right < heap.size() && heap[right] < heap[smallest])
        smallest = right;

    if (smallest != index) {
        swap(heap[index], heap[smallest]);
        heapifyDown(heap, smallest);
    }
}

void insert(vector<int>& heap, int value) {
    heap.push_back(value);
    heapifyUp(heap, heap.size() - 1);
}

void deleteMin(vector<int>& heap) {
    if (heap.empty()) {
        cout << "Heap trống!" << endl;
        return;
    }
    heap[0] = heap.back();
    heap.pop_back();
    heapifyDown(heap, 0);
}

int getMin(const vector<int>& heap) {
    if (heap.empty()) return -1;
    return heap[0];
}

void printHeap(const vector<int>& heap) {
    for (int i : heap) cout << i << " ";
    cout << endl;
}

int main() {
    vector<int> heap;

    insert(heap, 10);
    insert(heap, 5);
    insert(heap, 20);
    insert(heap, 3);

    cout << "Heap: ";
    printHeap(heap);

    cout << "Phần tử nhỏ nhất: " << getMin(heap) << endl;

    deleteMin(heap);
    cout << "Heap sau khi xóa phần tử nhỏ nhất: ";
    printHeap(heap);

    return 0;
}
