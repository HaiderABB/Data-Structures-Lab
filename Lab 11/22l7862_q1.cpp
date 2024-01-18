//#include<iostream>
//#include<fstream>
//#include<string>
//#include<queue>
//
//using namespace std;
//
//const int ASCII_SIZE = 128; // Assuming ASCII characters
//
//struct node {
//    char data;
//    int frequency;
//    node* left;
//    node* right;
//
//    node() {
//        left = nullptr;
//        right = nullptr;
//    }
//};
//
//// Comparison struct for the priority queue
//struct CompareNodes {
//    bool operator()(const node* a, const node* b) {
//        return a->frequency > b->frequency;
//    }
//};
//
//// Function to build the Huffman tree
//node* buildHuffmanTree(node** nodes, int size) {
//    priority_queue<node*, vector<node*>, CompareNodes> pq;
//
//    for (int i = 0; i < size; i++) {
//        if (nodes[i] != nullptr) {
//            pq.push(nodes[i]);
//        }
//    }
//
//    while (pq.size() > 1) {
//        node* left = pq.top();
//        pq.pop();
//
//        node* right = pq.top();
//        pq.pop();
//
//        node* internalNode = new node();
//        internalNode->frequency = left->frequency + right->frequency;
//        internalNode->left = left;
//        internalNode->right = right;
//
//        pq.push(internalNode);
//    }
//
//    return pq.top();
//}
//
//// Function to generate Huffman codes
//void generateCodesHelper(node* root, string code, string codes[]) {
//    if (root == nullptr)
//        return;
//
//    if (root->data != '\0') {
//        codes[static_cast<unsigned char>(root->data)] = code; // Ensure correct index range
//    }
//
//    generateCodesHelper(root->left, code + "0", codes);
//    generateCodesHelper(root->right, code + "1", codes);
//}
//
//void generateCodes(node* root, string codes[]) {
//    generateCodesHelper(root, "", codes);
//}
//
//// Function to encode the text using Huffman codes
//string encodeText(string text, string codes[]) {
//    string encodedText = "";
//
//    for (char c : text) {
//        encodedText += codes[static_cast<unsigned char>(c)]; // Ensure correct index range
//    }
//
//    return encodedText;
//}
//
//// Function to delete the Huffman tree nodes
//void deleteTree(node* root) {
//    if (root == nullptr)
//        return;
//
//    deleteTree(root->left);
//    deleteTree(root->right);
//
//    delete root;
//}
//
//int main() {
//    string text;
//    int nodesCount = 0;
//    node* nodes[ASCII_SIZE] = { nullptr };
//
//    ifstream file("abc.txt");
//
//    while (getline(file, text)) {
//        int len = text.length();
//        cout << text << endl;
//        for (int i = 0; i < len; i++) {
//            char currentChar = text[i];
//            int index = static_cast<unsigned char>(currentChar);
//
//            if (nodes[index] == nullptr) {
//                nodes[index] = new node();
//                nodesCount++;
//            }
//
//            nodes[index]->data = currentChar;
//            nodes[index]->frequency++;
//        }
//    }
//
//    file.close();
//
//    // Building Huffman tree
//    node* huffmanTreeRoot = buildHuffmanTree(nodes, ASCII_SIZE);
//
//    // Generating Huffman codes
//    string codes[ASCII_SIZE];
//    generateCodes(huffmanTreeRoot, codes);
//
//    // Encoding the text
//    ifstream inputFile("abc.txt");
//    string encodedText = "";
//
//    while (getline(inputFile, text)) {
//        encodedText += encodeText(text, codes);
//    }
//
//    inputFile.close();
//
//    // Outputting the Huffman codes
//    cout << "\nHuffman Codes:\n";
//    for (int i = 0; i < ASCII_SIZE; i++) {
//        if (!codes[i].empty()) {
//            cout << static_cast<char>(i) << ": " << codes[i] << endl;
//        }
//    }
//
//    // Output the encoded text
//    cout << "\nEncoded Text:\n" << encodedText << endl;
//
//    // Cleanup: Delete the Huffman tree nodes
//    deleteTree(huffmanTreeRoot);
//
//    return 0;
//}