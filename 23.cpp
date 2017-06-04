#include <iostream>

using namespace std;

struct BinaryTreeNode {
	int m_nValue;
	BinaryTreeNode* m_pLeft;
	BinaryTreeNode* m_pRight;
};

class Tree {
	public:
		Tree();
		Tree(const Tree&);
		~Tree();
	public:
		bool Create_Tree();
		bool Push_Value();
		bool Pop_Value();
		int Top_value();
		bool Delete_Tree();
	private:
		BinaryTreeNode* m_pRoot;
};


int main()
{
	
	return 0;
}
