# pragma once

template<class T>
class Singleton
{
private:

	static T* m_instance;

	Singleton() = default;
	Singleton(const Singleton&) = delete;
	Singleton& operator=(const Singleton&) = delete;

public:

	static T& Instance()
	{
		return *m_instance;
	}

	static void Create()
	{
		m_instance = new T;
	}

	static void Destroy()
	{
		delete m_instance;
		m_instance = nullptr;
	}
};

template<class T> T* Singleton<T>::m_instance = nullptr;
