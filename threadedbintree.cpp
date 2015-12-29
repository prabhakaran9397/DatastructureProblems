#include <iostream>
class node
{
	public:
		int data;
		node *left;
		node *right;
		bool is_right;
		bool is_left;
};
class threaded
{
	private:
		node *root;
	public:
		threaded(){
			root=new node();
			root->left=root->right=root;
			root->data=1000;
			root->is_left=true;	
		}
		void insert_node(int value);
		void inorder();
};
void threaded::insert_node(int value){
	node *temp=root;
	while(1){
		if(temp->data > value){
			if(temp->is_left)
				break;
			temp=temp->left;
		}else if(temp->data < value){
			if(temp->is_right)
				break;
			temp=temp->right;
		}else{
			return;
		}
	}
	node *new_node= new node();
	new_node->data=value;
	new_node->is_right=new_node->is_left=true;
	if(temp->data < value){
		new_node->left=temp;
		new_node->right=temp->right;
		temp->right=new_node;
		temp->is_right=false;
	}else{
		new_node->left=temp->left;
		new_node->right=temp;
		temp->left=new_node;
		temp->is_left=false;
	}
}
void threaded::inorder(){
	node *temp=root;
	node *aux;
	while(1){
		aux=temp;
		temp=temp->right;
		if(!aux->is_right){
			while(!temp->is_left)
				temp=temp->left;
		}
		if(temp==root)
			break;
		std::cout<<temp->data<<"\t";
	}
}
int main(){
	threaded tree;
	tree.insert_node(6);
	tree.insert_node(4);
	tree.insert_node(8);
	tree.insert_node(3);
	tree.insert_node(5);
	tree.insert_node(7);
	tree.insert_node(9);
	tree.inorder();
	std::cout<<"\n";
}
