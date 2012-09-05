#ifndef MICHEALS_STRATEGY_STRATEGY_HPP
#define MICHEALS_STRATEGY_STRATEGY_HPP

namespace micheals {
namespace strategy {

class Strategy {
public:
	~Strategy()
	{}

public:
	virtual bool onOpen(Context* context)
	{
		context_ = context;
		context_->registerHandler();
	}
	
	void handlerTick(Tick* tick; Symbol)
	
	virtual void close()
	{}
private:
	Context context_;
};

}
}

#endif // end MICHEALS_STRATEGY_STRATEGY_HPP
