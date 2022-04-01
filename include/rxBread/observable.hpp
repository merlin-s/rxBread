
namespace rx_bread {
template<typename T> class observer
{
  void notify(T const &);
};

template<typename T> class observable
{
  void subscribe(observer<T> *);
};
}// namespace rx_bread
