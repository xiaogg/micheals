#ifndef MICHEALS_TRADING_NOTIFIER_HPP
#define MICHEALS_TRADING_NOTIFIER_HPP

namespace micheals {
namespace trading {

#include <micheals/trading/subject.hpp>
#include <micheals/trading/notifier.hpp>
#include <micheals/trading/notifierexception.hpp>

class Notifier {
public:
	~Notifier()
	{}
public:
	virtual bool open() = 0;

	virtual void close() = 0;

    virtual void subscribe(const Subject& subject) throw(NotifierException) = 0;

	virtual void unSubscribe(const Subject& subject) = 0;
};


}
}
#endif //MICHEALS_TRADING_NOTIFIER_HPP
