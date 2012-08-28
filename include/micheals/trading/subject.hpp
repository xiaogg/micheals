#ifndef MICHEALS_TRADING_SUBJECT_HPP
#define MICHEALS_TRADING_SUBJECT_HPP

#include <string>

#include <micheals/trading/subscriber.hpp>

namespace micheals {
namespace trading {

using namespace std;

class Suject {
public:
	Subject();
	~Subject();
public:
	string& getName();

	template<typename MessageType>
	void publish(MessageType* message);

	void addSubscriber(Subscriber* subscriber);

	void removeSubscriber(subsriber* subscriber);

	bool contain(Subscriber* subscriber);
private:
	class Impl;
	Impl* impl;
};

}
}

#endif //MICHEALS_TRADING_SUBJECT_HPP
