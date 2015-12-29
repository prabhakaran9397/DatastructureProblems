#include<bits/stdc++.h>
#include<time.h>
#define Parent(i)	(((i)-1)/2)
#define Left(x)		((i)*2+1)
#define Right(x)	((i)*2+2)
using namespace std;

void down(int *heap, int n, int i)			//HEAP SORT
{
	int l=Left(i), r=Right(i), s=i;
	if(l<n && heap[l]<heap[s]) s=l;
	if(r<n && heap[r]<heap[s]) s=r;
	if(i!=s){
		swap(heap[i],heap[s]);
		down(heap,n,s);
	}	
}
void up(int *heap, int n, int i)
{
	while(i>0){
		int p = Parent(i);
		if(heap[i]<heap[p])
			swap(heap[i],heap[p]);
		i = p; 
	}
}
void insert(int *heap, int size, int val)
{
	heap[size]=val;
	up(heap,size+1,size);
}
int remove_min(int *heap, int size)
{
	int min=heap[0];
	swap(heap[0],heap[size-1]);
	down(heap,size-1,0);
	return min;
}
void heapsort(int *arr, int size)
{
	int heap[size], i;
	for(i=0;i<size;i++)
		insert(heap,i,arr[i]);
	for(i=0;i<size;i++)
		arr[i]=remove_min(heap,size-i);	
}
void insertionsort(int a[],int n)			//INSERTION SORT
{
	for(int i=1; i<n; i++){
		int temp=a[i], j=i-1;
		for(;temp<a[j]&&j>=0;j--)
			a[j+1]=a[j];
		a[j+1]=temp;
	}
}
void sort(int *a, int s, int e)				//QUICK SORT
{
	if(e>s){
		int i=s, j=e, p=s;
		while(i<=j){
			while(a[i]<a[p])i++;
			while(a[j]>a[p])j--;
			if(i<=j)
				swap(a[i++],a[j--]);
		}
		sort(a,s,j);
		sort(a,i,e);
	}
}
void quicksort(int *arr, int size)
{
	sort(arr,0,size-1);
}
void merge(int *a, int s, int m, int e, int n)		//MERGE SORT
{
	int c[n], i=s, j=m+1, k=s;
	while(i<=m && j<=e){
		if(a[i]<a[j]) c[k++]=a[i++];
		else c[k++]=a[j++];
	}
	while(i<=m) c[k++]=a[i++];
	while(j<=e) c[k++]=a[j++];
	for(i=s;i<k;i++) a[i]=c[i];
}
void split(int *a, int s, int e, int n)
{
	if(e>s){
		int m = (s+e)/2;
		split(a,s,m,n);
		split(a,m+1,e,n);
		merge(a,s,m,e,n);
	}
}
void mergesort(int *arr, int size)
{
	split(arr,0,size-1,size);
}
void selectionsort(int a[],int n)			//SELECTION SORT
{
	for(int i=0; i<n-1; i++)
		for(int j=i+1; j<n; j++)
			if(a[i]>a[j])
				swap(a[i],a[j]);
}

void getarray(int array[], int size){
	cout << "Enter your elements: ";
	for(int i=0; i<size; i++)
		cin>>array[i];
}
void putarray(int array[], int size){
	for(int i=0; i<size; i++)
		cout<<array[i]<<"  ";
	cout<<endl;
}
void copy(int b[], int a[], int n)
{
	for(int i=0; i<n; i++)
		b[i]=a[i];
}
void analyse(int a[], int n)
{
	int b[n];
 	clock_t start, end;	
	double t;
	
	copy(b,a,n);
     	start = clock();
	selectionsort(b,n);
	end = clock();
     	t = ((double)(end - start)) / CLOCKS_PER_SEC;
	putarray(b,n);
	cout << "Time taken to sort in Selection sort:\t" << t << endl;

        copy(b,a,n);
        start = clock();
        insertionsort(b,n);
        end = clock();
        t = ((double)(end - start)) / CLOCKS_PER_SEC;
        cout << "Time taken to sort in Insertion sort:\t" << t << endl;

        copy(b,a,n);
        start = clock();
        heapsort(b,n);
        end = clock();
        t = ((double)(end - start)) / CLOCKS_PER_SEC;
        cout << "Time taken to sort in Heap sort:\t" << t << endl;

        copy(b,a,n);
        start = clock();
        mergesort(b,n);
        end = clock();
        t = ((double)(end - start)) / CLOCKS_PER_SEC;
        cout << "Time taken to sort in Merge sort:\t" << t << endl;

        start = clock();
        quicksort(a,n);
        end = clock();
        t = ((double)(end - start)) / CLOCKS_PER_SEC;
        cout << "Time taken to sort in Quick sort:\t" << t << endl;

}

int main(void)
{
	int n;
	cout << "Enter the size: "; cin>>n;
	int array[n];
	getarray(array,n);	
	analyse(array,n);
	return 0;
}
