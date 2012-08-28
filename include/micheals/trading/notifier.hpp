#ifndef MICHEALS_TRADING_NOTIFIER_HPP
#define MICHEALS_TRADING_NOTIFIER_HPP

namespace micheals {
namespace trading {

#include <micheals/trading/subject.hpp>
#include <micheals/trading/notifier.hpp>


class Notifier {
public:
	~Notifier()
	{}
public:
	virtual bool open() = 0;

	virtual void close() = 0;

	virtual void subscribe(const Subject& subject) throw(NotiferException) = 0;

	virtual void unSubscribe() = 0;
};


}
}
#endif //MICHEALS_TRADING_NOTIFIER_HPP
