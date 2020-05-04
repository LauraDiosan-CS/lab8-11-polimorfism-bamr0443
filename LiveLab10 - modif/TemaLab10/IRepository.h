#pragma once
#include <vector>
#include <algorithm>
using namespace std;

template <class T> class IRepository{
protected:
	vector<T*> elem;
public:
	IRepository();
	void add(T*);
	int find(T*);
	void update(T*, T*);
	int remove(T*);
	int getSize();
	T* get(int i);
	vector<T> getAll();
};

template<class T>
inline IRepository<T>::IRepository()
{
}

template<class T>
inline void IRepository<T>::add(T *e)
{
	if (elem.size() == 0)
		elem.push_back(e); // adauga daca e primul element
	else
	{
		// adaugam elementul nou INAINTE de ultimul element existent
		T* inainte = elem[elem.size() - 1]; // salvam ultimul element
		elem[elem.size() - 1] = e; // ultimul element devine cel nou
		elem.push_back(inainte); // ultimul element ramane cel anterior
	}
}

template<class T>
inline int IRepository<T>::find(T *e)
{
	auto it=std::find(elem.begin(), elem.end(), e);
	if (it != elem.end()) return distance(elem.begin(), it);
	return -1;
}

template<class T>
inline void IRepository<T>::update(T * vechi, T * nou)
{
	std::replace(elem.begin(), elem.end(), vechi, nou);
}

template<class T>
inline int IRepository<T>::remove(T *e)
{
	auto last=std::remove(elem.begin(), elem.end(), e);
	if (last != elem.end()) {
		elem.erase(last, elem.end());
		return 0;
	}
	return -1;
}

template<class T>
inline int IRepository<T>::getSize()
{
	return elem.size();
}

template<class T>
inline T* IRepository<T>::get(int i)
{
	return elem[i];
}

template<class T>
inline vector<T> IRepository<T>::getAll()
{
	return elem;
}
