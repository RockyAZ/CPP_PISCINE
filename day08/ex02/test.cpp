
MutantStack &operator=(MutantStack const &r)
  {
   (void)r;
   return;
  }

  T top(void)
  {
   return (_stack.front());
  }

  T size(void)
  {
   return (_stack.size());
  }

  typedef std::list<int>::iterator iterator;

  iterator begin()
  {
   return (_stack.begin());
  }

  iterator end() {
   return (_stack.end());
  }

  void push(T value)
  {
   _stack.push_front(value);
  }

  void pop(void)
  {
   _stack.pop_front();
  }

 private:

  std::list<T>  _stack;

};